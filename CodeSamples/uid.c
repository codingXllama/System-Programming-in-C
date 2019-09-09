#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void main(int argc, char *argv[])
{

    printf("Hello, my uid is %d\n", getuid());
}