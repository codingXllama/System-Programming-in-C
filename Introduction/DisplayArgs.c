#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    if (argc > 1)
    {
        for (i = 0; i < argc; i++)
        {
            printf("Argument %d = %s\n", i, argv[i]);
        }
    }
    else
    {
        printf("Please Specify more arguments ex: arg1 arg2 argN\n");
    }
}