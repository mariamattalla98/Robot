#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int f=1;
    printf("Enter the number ");
    scanf("%d",&x);
    for (int i=x;i>0;i--)
    {
        f= f*i;

    }
    printf("%d",f);
    return 0;
}
