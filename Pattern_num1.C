//Pattern with num

#include <stdio.h>

int main(void) {
  
 for(int i=0;i<6;i++){
    for(int j=1;j<=6;j++){
      if(j<=i){
        printf("%d ", j);
      }
      
    }
    printf("\n");
  }

  return 0;
}