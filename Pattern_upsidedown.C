//print pattern upside down

#include <stdio.h>

int main(void) {
  
 for(int i=5;i>0;i--){
    for(int j=0;j<6;j++){
     printf(" ");
      if(j<i){
        printf("*");
      } 
    }
    printf("\n");
  }

  printf("\n");
  
  return 0;
}