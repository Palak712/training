#include <stdio.h>
int n = 0, x;
void incrementStatic()
{
    static int count = 0;
    count++;
    n = count;
}
void incrementAuto()
{
    x = 0;
    x++;
}

int main()
{
    incrementStatic();
    incrementAuto();
    incrementStatic();
    incrementAuto();
    printf("%d %d", n, x);
    return 0;
}