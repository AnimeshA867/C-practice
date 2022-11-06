//Program to convert pound to kilogram.

#include<stdio.h>
void main(){
    float unitKilo=2.205,pound,kilo;
    printf("Enter the value of weight in pound:");
    scanf("%f",&pound);
    kilo=pound/unitKilo;

    printf("%.2f pound -> %.2f kilogram",pound,kilo);


}