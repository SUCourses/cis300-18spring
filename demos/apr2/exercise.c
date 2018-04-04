#include<stdio.h>
int main(){
	int x = 4;
  int * p1 = &x;
  int * p2 = &x;
	*p1 = 5;
	printf("x is %d\n",*p2);
}

