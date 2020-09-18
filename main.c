#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Sum of two numbers A>=1 , B<=1000
    int A; int B;
    printf("Enter first number =");
    scanf("%d",&A);
    printf("Enter second number =");
    scanf("%d",&B);
    Sum(A,B);
    return 0;
}
void Sum(int x , int y)
{
    if((x>=1)&&(y<=1000))
    {
      int z= x+y;
      printf("The sum of two numbers = %d",z);
    }
    else{
        printf("Error");
    }
}
/* Hello world N times
int N;
    printf("Enter the number");
    scanf("%d",&N);
    for (int i=0; i<N;i++)
    {
        printf(" Hello World ");
    }
*/
/* Sum of odd numbers .. each from -100 to 100
int n=0;
    int sum=0;
    for (int i =0;i<10;i++)
    {
        scanf("%d",&n);
        if ((n>=-100) &&(n<=100))
        {
            if ( n%2  !=0)
        {
            sum +=n;
        }
        }

    }
    printf("Sum of odd numbers = %d",sum);
*/
