//Progra mto swap two numbers using a fucntion and by passing arguments as references.

#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void main(){
    int a=12,b=14;
    printf("Before swapping a: %d and b= %d",a,b);
    swap(&a,&b);
    printf("After swapping a:%d and b: %d",a,b);
}