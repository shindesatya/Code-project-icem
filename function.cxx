



#include<stdio.h>

int main(){
     char ch;
     printf("enter the character");
     scanf("%c", &ch);
     if(ch>='A' && ch<='Z'){
         printf("upper case character");
         
         }else if  (ch>='a' && ch<='z'){
             
             printf("lower case character");
             
             }else {
                 printf("character is invalid");
    }
    return 0;
}