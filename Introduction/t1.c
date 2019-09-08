#include <stdio.h>

// Creating unitialized global vars, even a static global variabl
int g = 100;
int h;
static int s;

int mysum(int x, int y);

// Main Function
void main(int argc, char *argv[])
{
    // Automatic local variable
    int a = 1;
    int b;

    // Static local variables
    static int c = 3;
    b = 2;
    // Calling mysum function(), passing a,b as params
    c = mysum(a, b);
    printf("Sum = %d\n", c);
}
