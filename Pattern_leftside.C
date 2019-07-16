#include <stdio.h>

int main(void) {
  
 for(int i=6;i>0;i--){
    for(int j=1;j<=6;j++){
     
      if(j>=i){
        printf("*");
      } else{
        printf(" ");
      } 
    }
    printf("\n");
  }
  
  return 0;
}
