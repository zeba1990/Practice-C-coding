//factorial of a number

#include <stdio.h>

int main(void) {
  int num, fact = 1;

  printf("Please enter the number \n");
  scanf("%d\n", &num);

  for(int i= num; i>=1; i--){
    fact *= i;
  }
  
  printf("%d ", fact);
  return 0;
}