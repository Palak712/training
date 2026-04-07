#include <stdio.h>
int main()
{
    char *ptr="India";
    while(ptr!=" ")
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
