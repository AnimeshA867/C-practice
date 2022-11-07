//Program to get  n integer number and display them in ascending order

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *arr,n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        printf("Enter the array element:");
        scanf("%d",arr+i);
        // sum+=*(arr+i);
    }
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(*(arr+i)>*(arr+j)){

        int temp = *(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=temp;
        }
    }
   }
   for(int i=0;i<n;i++){
    printf("%d\t",*(arr+i));
   }

}