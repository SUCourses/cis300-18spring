#include <stdio.h>

int main(){
  int sum = 0;
  for (int i = 1; i <= 956; i++){
		sum = sum + i;
		//sum += i;
	}

	printf("the sum is %d\n", sum);
}
