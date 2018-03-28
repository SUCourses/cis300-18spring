#include<stdio.h> //printf

int array_stack[] = {0,1,2};

int main(){
  int sum; // local variable
  for(int i=0; i<=3; i++){
    sum += array_stack[i];
  }
  printf("sum = %d\n", sum);
  return 0;
}

