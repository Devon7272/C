/* This alarm_fork.c program is a version using multiple processes. The difference between this alarm_fork.c program and
 * alarm.c program is that instead of calling sleep directly we fork to create a new child process that calls sleep for
 * us and eventually printf asynchronously, while the parent process continues.
 */
#include <sys/types.h>
#include <sys/wait.h>
#include <error.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    int status;
    char line[128];
    int seconds;
    pid_t pid;
    char message[64];

    while(1)
    {
        printf("Alarm> ");
        if(fgets(line, sizeof(line), stdin) == NULL) exit(0);
        if(strlen(line) <= 1) continue;

        /*
         * Parse input line into seconds (%d) and a message
         * (%64[^\n]), consisting of up ot 64 characters
         * separated from the seconds by whitespaces
         */

        if (sscanf(line, "%d %64[^\n]", &seconds, message) < 2)
        {
            fprintf(stderr, "Bad command\n");
        }

        else
        {
           pid = fork();
           if(pid ==(pid_t)-1)
               perror("Fork");

           if(pid == (pid_t)0)
           {
               /*
                * In the child, wait and then print a message
                */
               sleep (seconds);
               printf("(%d) %s\n", seconds, message);
               exit(0);
           }

           else
           {
               /*
                * In the parent, call waitpid() to collect children
                * that have already terminated
                */
               do
               {
                   pid = waitpid((pid_t)-1, NULL, WNOHANG);
                   if (pid == (pid_t)-1)
                       perror("Wait for child");
               }
               while (pid != (pid_t)0);
           }
        }
    }
}
