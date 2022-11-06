//This is a program to produce an abbreciated version a name provided as the input to the program.

#include<stdio.h>
#include<string.h>
void main(){
    char fname[50],lname[50],abbr[50];
    printf("Enter your name:");
    scanf("%s %s",fname,lname);
    printf("The abbreciated name is: %c. %s",fname[0],lname);

}