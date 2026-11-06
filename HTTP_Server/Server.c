#include <stdio.h>
#include <sys/socket.h>

/*  1) Create the socket
    2) Make the socket listen for incomming connections
    3) Send the server off to sleep, waiting for incomming socket signal to wake it up
    4) Create a new process to handle the HTTP request 
*/ 

typedef struct sockaddr_in {
    short sin_family; /* AF_INET protocol */
    int sin_port; /* port number */
    struct in_addr sin_addr; /* machine's IP address */
    char sin_zero[8]; /* unused (8 octets) */
} stockaddr_in;

int main() {
    int sock = socket(PF_INET, SOCK_STREAM, 0);
    
    stockaddr_in.sin_port = 8888;

}