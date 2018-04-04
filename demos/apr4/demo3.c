#include<stdio.h>
int main(){
    int a[] = {2,1,0};
    int *b = a; // b points to the first element in a
    unsigned long c = (unsigned long)a;//long
    for (int i=0; i<3; i++){
        printf("%d,%d,%d,%d,%d\n",a[i],*(b+i),*(a+i),b[i],
						*((int *)(c+i*sizeof(int))));
    }
}
