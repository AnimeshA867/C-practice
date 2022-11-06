// Program to find the sum of the series 1 + x^2 ..... + nx^2;
/*
#include<stdio.h>
#include<math.h>
void main(){
    int x,n,sum=0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum+=(n*pow(x,2));
    }
    printf("The sum of the series is %d",sum);
}
*/

// Program to calculate the sequence 1/1! + 2/2!+ n/n!;

#include <stdio.h>

long fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

void main()
{
    int n;
    long sum = 0;
    printf("Enter the value of n:(Note: The value must be lower than 25:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i/(fact(i));
    }

    printf("The sum of the sequence is %ld",sum);
}