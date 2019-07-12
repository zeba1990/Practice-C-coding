/*Find out if a string is a rotation of another string. E.g. ABCD is a rotation of BCDA but not ACBD.*/

#include <stdio.h>
//#include <string.h>
#include <stdbool.h>

int main(void) {
 
  int length1, length2;
  char first_string[length1] ;
  char second_string[length2] ;
  bool check = 0;

  printf("Enter length of string1 \n");
  scanf("%d", &length1);

  printf("Enter length of string2 \n");
  scanf("%d", &length2);

  printf("Enter string1\n");
  scanf("%s", &first_string);
 

  printf("Enter string2\n");
  scanf("%s", &second_string);
  

  //length1 = sizeof(first_string)/sizeof(first_string[0]);
  //length2 = sizeof(second_string)/sizeof(second_string[0]);
  
 
  if(length1 == length2){
    for(int i = 0; i< length1; i++){
      if(first_string[i]==second_string[i+length1]){
        check = 1;
      } else {
        check = 0;
      }
    } 
    
  } else{
    check = 0;
  }
  if(check) {
    printf("Rotation\n");
  } else {
    printf("No rotation");
  }
  return 0;
}