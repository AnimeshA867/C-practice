//Program to demonstrate binary search.

#include<stdio.h>

int search(int arr[], int high, int low, int key){
    // high = length-1;
    // low=0;
    if(high>=low){
        int mid=(high + low)/2;
        if(arr[mid]==key){
            return 0;
        }
        else if(arr[mid]<key){
            return search(arr,high,mid+1,key);
        }else if(arr[mid]>key){
            return search(arr, mid-1, low, key);
        }

    }else{

    return 1;
    }

}

   void main(){
    int length;
    printf("Enter the desired length of the array:");
    scanf("%d",&length);
    int arr[length];
    for(int i=0;i<length;i++){
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int key,flag;
    printf("Enter the array element to find:");
    scanf("%d",&key);
    flag=search(arr,length-1,0,key);
    if(flag==1){
        printf("The element %d not found.",key);
    }else{
        printf("The element %d has been found.",key);
    }
   }
