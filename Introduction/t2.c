// creating a external global variable
extern int g;

int mysum(int x, int y)
{
    return x + y + g;
}