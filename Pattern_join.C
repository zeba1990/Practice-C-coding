//print joint pattern

#include <stdio.h>

int main(void) {
  
  for(int i = 0; i< 7; i++){
    for(int j =0; j<i; j++){
        printf("*");
    }
     printf("\n");
  }
  for(int i = 5; i> 0; i--){
    for(int j =i; j>0; j--){
        printf("*");
    }
     printf("\n");
  }
  return 0;
}