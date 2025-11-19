#include <stdio.h>

void main() {
    int i,c=1,n;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0){
            c++;
        }
    }
    if(c>1)
    {
        printf("It is not a prime number.");
    }
    else{
       printf("It is a prime number.");
    }
}
