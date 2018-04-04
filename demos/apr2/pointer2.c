#include<stdlib.h>

int main() {   
    int*    x;  // Allocate the pointers x and y
    int*    y;  // (but not the pointees)
    x = malloc(sizeof(int));    // Allocate an int pointee,
    // and set x to point to it
    *x = 42;    // Dereference x to store 42 in its pointee
    //*y = 13;    // CRASH -- y does not have a pointee yet
    y = x;      // Pointer assignment sets y to point to x's pointee
    *y = 13;    // Dereference y to store 13 in its (shared) pointee
		return 0;
}
