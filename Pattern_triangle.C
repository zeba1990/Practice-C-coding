//print * triange

#include <stdio.h>

int main(void) {
  
 for(int i=6;i>0;i--){
    for(int j=0;j<7;j++){
     printf(" ");
      if(j>i){
        printf("*");
      } 
    }
    printf("\n");
  }

  printf("\n");
  
  return 0;
}