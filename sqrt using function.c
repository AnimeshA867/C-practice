//Program to implement sqrt using fucntions

#include<stdio.h>

float sqrot(float n, float p){
    float result;
    if(p<=0){
        return 1;
    }else{
        result=n/n;
        return sqrot(n,p-1);
    }
}

void main(){
    float n,p;
    printf("Enter the value of n and p:");
    scanf("%f %f",&n,&p);
    printf("%.3f",sqrot(n,p));
}