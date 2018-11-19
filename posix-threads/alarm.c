/* This is a baseline, synchronous version of alarm.c with single routine. Most of main is a loop that will process
 * simple commands until fgets returns a NULL, error or end of file */

#include <error.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>

int main(int argc, char *argv[])
{
    int seconds;
    char line[128];
    char message[64];

    while(1)
    {
        printf("Alarm> ");
        if(fgets(line, sizeof(line), stdin) == NULL) exit(0);
        if(strlen(line) <= 1)
            continue;
        /*
         * Pares input lines into seconds (%d) and a message
         * (%64)[^\n], consisting of up to 64 characters
         * separated from the seconds by white space.
         */

        if (sscanf(line, "%d %64[^\n]", &seconds, message) < 2)
        {
            fprintf(stderr, "Bad command\n");
        }
        else
        {
            sleep (seconds);
            printf("(%d) %s\n", seconds, message);
        }
    }
}
