//Program to find the simple interest, simple amount, compound interst and compound amount.

#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
    float p,t,r,si,sa,ci,ca;

    printf("Enter the principle:");
    scanf("%f",&p);
    printf("Enter the time:");
    scanf("%f",&t);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    //Here we have a formula for Simple interest.

    si=(p*t*r)/100;

    printf("The simple interest on principle %.2f for %.2f time at %.2f%% interest is %.2f.\n",p,t,r,si);

    sa=si+p;
    printf("The simple amount is %.2f\n",sa);

    ca=p*pow((1+r/100),t);
    ci=ca-p;
    printf("The compound amount is %.2f and compound interest is %.2f",ca,ci);
    
}