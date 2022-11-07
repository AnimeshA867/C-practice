//Program to sum an array using pointer.

#include<stdio.h>

void sum(int *arr, int *sum,int length){
    int s=0;
    for(int i=0;i<length;i++){
        s+=*(arr+i);
    }
    *sum=s;
}

void main(){
    int s, arr[10];
    for(int i=0;i<10;i++){
        printf("Enter the array element:");
        scanf("%d",arr+i);
    }
    sum(arr,&s,10);
    printf("The sum of the array is %d",s);

}