#include <stdio.h>

int y = 3;// global variable

int main(){
	 int x = 4;//local variable
   printf("helloworld: x=%d, y=%d\n", x, y);

//loop
   for(int i = 0; i < 10; i++){
       printf("in loop: i=%d\n", i);
	 }

/*
helloworld: x=4, y=3
in loop: i=0
in loop: i=1
in loop: i=2
in loop: i=3
in loop: i=4
in loop: i=5
in loop: i=6
in loop: i=7
in loop: i=8
in loop: i=9
 */
	 return 0;
}
