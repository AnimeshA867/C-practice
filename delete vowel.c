//Program to read a line of text and delete al the vowels from it. 

#include<stdio.h>
#include<string.h>

void main(){
    char str[500],mod[500],count=0;
    printf("Enter a line of text:");
    gets(str);

    for(int i=0;i<strlen(str);i++){
        
            if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
                continue;
            }else{
                mod[count]=str[i];
                count++;
            }

        }
    printf("The original line of text is: %s\n",str);
    printf("The modified line of text after deleting all the vowels is: %s",mod);
    }

