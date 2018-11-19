/* This is a simple TCP client that is sending a single byte 1 to our peer and is then read from the socket. This
 * program show how a client is constructed in simple terms */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct sockaddr_in peer;
    int s;
    int rc;
    char buf[1];

    // Set Up Our Peer
    //this block of code here is allows us to fill the sockaddr_in structure with
    //the servers port number (7500) and address. The 127.0.0.1 is the loopback address
    //It specifies that the sever is on the same host as the client
    peer.sin_family = AF_INET;
    peer.sin_port = htons(7500);
    peer.sin_addr.s_addr = inet_addr("127.0.0.1");

    //Obtain a Socket and Connect to Our Peer
    //Here we obtain a SOCK_STREAM socket. As we mentioned before
    //TCP uses this tyo of socket because it is a stream protocol.
    s = socket(AF_INET, SOCK_STREAM, 0);
    if(s < 0)
    {
        perror("socket call failed");
        exit(1);
    }

    //In this block of code we establish the connection with our peer by calling connect.
    //This is used to specify our peers address.
    rc = connect(s,(struct sockaddr *)&peer, sizeof(peer));
    if(rc)
    {
        perror("connection call failed");
        exit (1);
    }

    //In this block we first send the single byte 1 to our peer, then immediately
    //read a single byte from the socket. We write the byte to stdout  and terminate
    rc = send(s, "1", 1, 0);
    if(rc <= 0)
    {
        perror("send call failed");
        exit(1);
    }

    rc = recv(s, buf, 1, 0);
    if (rc <= 0)
        perror("recv call failed");
    else
        printf("%c\n", buf[0] );
    exit(0);

}
