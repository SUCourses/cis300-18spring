#include <stdio.h>  /* for printf */
// https://en.wikipedia.org/wiki/Function_pointer
double cm_to_inches(double cm) {
  return cm / 2.54;
}
int main(void) {
  double (*func1)(double) = cm_to_inches;
  printf("%f, %f\n", cm_to_inches(15.0), func1(15.0));
  return 0;
}
