//Program to practice binary search.

#include<stdio.h>
void main(){
    int length,key,flag;
    printf("Enter the length of the array:");
     scanf("%d",&length);

    int arr[length];
    for(int i=0;i<length;i++){
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=arr[i];
        }
    }

    printf("Enter the element to be searched:");
    scanf("%d",&key);
    flag=0;
    int high = length-1;
    int low = 0;

    while(flag!=0){
        int mid=(high+low)/2;
        if(arr[mid]==key){
  
            flag=0;
            break;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }else if(arr[mid]<key){
            low = mid+1;
        }
        if(high<=low){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("The element %d was not found in the array.",key);
    }else if(flag==0){
                  printf("The element %d has been found.", key);
    }
}