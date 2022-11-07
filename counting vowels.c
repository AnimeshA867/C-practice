//PRogram to read a stirng and count the number of vowels and consonants in it.

#include<stdio.h>
#include<string.h>

void main(){
    char str[500];
    int vowel=0,consonant=0;
    printf("Enter a string:");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122){
            if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
                vowel++;
            }else{
                consonant++;
            }
        }
    }

    printf("The string is: %s\n",str);
    printf("The number of vowel= %d and the number of consonant = %d",vowel,consonant);
}