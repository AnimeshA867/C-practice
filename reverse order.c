//PRogram to print a six digit integer in reverse order.

#include<stdio.h>
void main(){
    int num,rev=0;
    printf("Enter a six digit integer:");
    scanf("%6d",&num);
    int temp = num;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }

    printf("The reverse order of %d is %d",temp,rev);
}