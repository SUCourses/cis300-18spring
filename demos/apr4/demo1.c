#include<stdio.h>
int main(){
  unsigned int u = 2147483649;
  int v = (int) u;
  printf("unsigned vs signed: %ud,%d\n",u,v);

	int i=1;
	float f = (float) i;
  printf("float vs int: %f,%d\n",f/3,i/3);
}

