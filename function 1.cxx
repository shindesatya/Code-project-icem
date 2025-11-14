#include<stdio.h>

void namaste();
void bonjour();

int main (){
      char ch;
      printf("enter f for french && i for indian");
      scanf("%d", &ch);
      
      if(ch== 'i'){
          namaste();
      }else {
          bonjour();
      }
    return 0;
    }
    
    
    void namaste() {
        printf("Namaste\n");
        
        }
         void  bonjour() {
        printf("bonjour\n");
         }
        