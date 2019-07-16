//Fibonacci series


#include <stdio.h>

int main(void) {
  int num=0 , temp =1, nexterm=0;
  int n;
  printf("enter the number of terms of fibonacci series  ");
  scanf("%d", &n);

  printf("%d   ",num);
  
  for(int i =1; i<n; i++){
    nexterm=num +temp;
    num=temp ;
    temp=nexterm ;
    printf("%d   ",temp);
  }
  return 0;
}