#include<stdio.h>
int main() {
    int x = 5;
		int y = 3;
		int z = x - y;
		int a = x * y;
		int b = a - 7*z;
		b--;
		int c = z + y;
		int d = c / b;
		int e = a + 12;
		int f = e - b;
		printf("%d\n",f);
}
