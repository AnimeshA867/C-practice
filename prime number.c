//Program to check whether a number is a prime number or not.

#include<stdio.h>

int checkPrime(int n){
    int check=0;
    if(n>2){

    for(int i=2;i<n;i++){
        if(n%i==0){
            check=1;
        }
    }
    }
    return check;
}


void main(){
    //To check if a particular number is prime number or not.


/*     int n;
    printf("Enter a number to be checked:");
    scanf("%d",&n);

    int check = checkPrime(n);

    
    if(check==0){
        printf("%d is a prime number.",n);
    }else{
        printf("%d is not a prime number.",n);
    } */

    //To print certai number of prime numbers.

    int n,check;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int count=0;
    for(int i=1;i<i+2;i++){
        check=checkPrime(i);
        if(check==0){
            printf("%d\t",i);
            count++;
        }
        if(count==n){
            break;;
        }
    }
}