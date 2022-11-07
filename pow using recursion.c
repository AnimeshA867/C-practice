//Progrm to find the power of a number with the use of recursion

#include<stdio.h>

int power(int n,int p){
    if(p==0){
        return 1;
    }else{
        return n*power(n,p-1);
    }
}

void main(){
    int n,p;
    printf("Enter the value of number:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&p);

    int result = power(n,p);

    printf("%d",result);
}