//print table of any number entered
#include <stdio.h>

int main(void) {
  int num;

  printf("Please enter the number \n");
  scanf("%d\n", &num);
  
  for(int i=1; i<=10; i++) {
    printf("%d * %d = %d\n",num,i, num*i);
  }
  return 0;
}