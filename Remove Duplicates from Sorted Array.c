#include <stdio.h>

int main(void) {
  //enter your array of numbers here 
  int a[] = {1,1,1,2,3}; 

  //enter the numbers you want to filter from the first arr 
  int b[] = {3}; 

  // get the length of array 
  int x = sizeof a / sizeof *a; 
  int y = sizeof b / sizeof *b; 
  //filter the array 
  for(int i = 0; i< x; i++){
    // check if the new arr include number if not push it 
    for(int j = 0; j < y; j++){
      if(a[i] != b[j]){
        printf("%d", a[i]); 
      }
    }
  }
  
  return 0;
}
