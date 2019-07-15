//reverse a number
#include <stdio.h> 

int main(void) {
  int digit, num, ones, tens, hundreds;
  

  printf("Please choose if number is 3 digit number or 2 digit number   ");
  scanf("%d",&digit);

  if(digit==3) {
    printf("Please enter a 3 digit  number \n");
    scanf("%d", &num);
    ones = num %10;
    tens = (num/10)%10; 
    hundreds = num /100;
    printf("%d%d%d", ones, tens, hundreds);
  }  else {
    printf("\nPlease enter a 2 digit  number \n");
    scanf("%d", &num);
    ones = num %10;
    tens = num /10;
    printf("%d%d", ones, tens);
  }
  return 0;
}