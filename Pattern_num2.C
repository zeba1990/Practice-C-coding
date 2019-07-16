//Pattern with nums

#include <stdio.h>

int main(void) {
  
 int k =1;

 for(int i=0;i<6;i++){
    for(int j=1;j<=6;j++){
      if(j<=i){
        printf("%d ", k);
        k=k+1;
      }
      
    }
    
    printf("\n");
  }

  return 0;
}