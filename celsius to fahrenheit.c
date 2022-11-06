//Program to convert a temperature given in celsius to Fahrenheit.

#include<stdio.h>
void main(){
    float f,c;
    printf("Enter the temperature in celcius:");
    scanf("%f",&c);

    f=(c*((float)9/5))+32;

    printf("%.2fC -> %.2fF",c,f);

}