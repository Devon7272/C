/* This program is an elementary server that will be listening for our client. This is a bare bone program that is
 * intended to show the server's structure and the basics socket calls that every server must make. */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    struct sockaddr_in local;
    int s;
    int sl;
    int rc;
    char buf[1];

    //Fill In Address and Get a Socket
    //Here in this block we fill in the socked_in structure, local, with our server's
    //well-known address port number. This is used for the bind call. As with the
    //client, we obtain a SOCK_STREAM socket. This is our listening socket.
    local.sin_family = AF_INET;
    local.sin_port = htons(7500);
    local.sin_addr.s_addr = htonl(INADDR_ANY);
    s = socket(AF_INET, SOCK_STREAM, 0);
    if(s < 0)
    {
        perror("socket call failed");
        exit(1);
    }

    //Bind Our Well-Known port and Call listen
    //Here we bind the well-known port and address specified in the local
    //to our listening socket. We then call listen to mark the
    //socket as a listening socket
    rc = bind(s, (struct sockaddr*) &local, sizeof(local));
    if(rc < 0)
    {
        perror("bind call failed");
        exit(0);
    }

    rc = listen(s, 5);
    if(rc)
    {
        perror("listen call failed");
        exit(1);
    }

    //Accept a Connection
    //We call accept to accept new connections.The accept call
    //blocks until a new connection is ready and then return a new
    //a new socket for that connection.
    sl = accept(s, NULL, NULL);
    if(sl < 0)
    {
        perror("accept call failed");
        exit(1);
    }

    //Transfer Data
    //First we read and print 1 byte from our client. Next we send
    //the single byte 2 back to our client and exit.
    rc = recv(sl, buf, 1, 0);
    if(rc <= 0)
    {
        perror("recv call failed");
        exit(1);
    }

    printf("%c\n", buf[0]);
    rc = send(sl, "2", 1, 0);
    if(rc <= 0)
        perror("send call failed");
    exit(0);
}