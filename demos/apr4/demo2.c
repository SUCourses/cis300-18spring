#include<stdio.h>
int main(){
	signed int a;
  unsigned int b;
  short	c;
  long long d;	
  float	e;
  char f;
  printf("signed int: %lu\n", sizeof(a));
  printf("unsigned int: %lu\n", sizeof(b));
  printf("short: %lu\n", sizeof(c));
  printf("long long: %lu\n", sizeof(d));
  printf("float: %lu\n", sizeof(e));
  printf("char: %lu\n", sizeof(f));
  return 0;
}
