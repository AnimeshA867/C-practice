//Program to convert fahrenheit into celcius.

#include<stdio.h>
void main(){
    float celcius,fahrenheit;
    for(fahrenheit=0;fahrenheit<100;fahrenheit++){
        celcius=((fahrenheit-32)*5)/9;
        printf("%.2f F -> %.2f C\n",fahrenheit,celcius);
    }
}