/*Write a function that takes an array of integers and returns the sum of the integers after adding 1 to each.*/

#include <stdio.h>

int sum_of_array(int *arr_input, int arr_len) {
  int sum_arr = 0;
  
  for(int  i =0; i<arr_len; i++){
    sum_arr +=arr_input[i];
  }
  
  return sum_arr;
}


int main(void) {
  int length;
  int input[10], result, x=0, i=0;
 // int length = sizeof(input)/sizeof(input[0]);
  printf("Please  enter  your array length\n");
  scanf("%d", &length);
  
  printf("Please  enter  your array\n");
  for (x=0; x<length;x++)
  {
      printf("Enter number %d \n", (x+1));
      scanf("%d", &input[x]);
  }
  
  printf("the array entered with length %d is\n", length);
  for( i=0; i<length; i++){
    printf("%d\n", input[i]);
  }
  result = sum_of_array(input, length);
  printf("\n result  %d\n", result);
  return 0;
}
