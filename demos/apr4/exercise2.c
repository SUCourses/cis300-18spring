#include<stdio.h>
int main(){
    int a[] = {7,9,6};
    unsigned long long_index = (unsigned long)a; 
		for(int i=0; i<3; i++){
        printf("%d,",*(int *)(long_index));
				long_index += sizeof(int);// fill out XXX
    }
}
