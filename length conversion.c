//Program to express a length given in millimeters in meters, centimeteres, and millimeters.

#include<stdio.h>
void main(){
    int millimeters,meters,centimeters;

    printf("Enter the length in millimeters:");
    scanf("%d",&millimeters);
    int temp= millimeters;

    meters=millimeters/1000;
    centimeters=(millimeters%1000)/10;
    millimeters=millimeters%10;

    printf("%d millimeters -> %d meters %d centimeters %d millimeters.",temp,meters,centimeters,millimeters);
}