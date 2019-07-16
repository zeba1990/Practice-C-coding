//Print pattern V


#include <stdio.h>

int main(void) {
  

  for(int i=0;i<6;i++){
    for(int j=0;j<5;j++){
      printf(" ");
      if(j==i){
        printf("*");
      }     
    }
    printf("\n");
  }

 printf("\t   ");
 
 for(int i=6;i>0;i--){
    for(int j=0;j<6;j++){
    // printf(" ");
      if(j==i){
        printf("*");
      } 
    }
    printf("\x1b[%dA",1);
  }

  
  
  return 0;
}