#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  int delt;
  float x1, x2;
  // correct input from the user
  printf("Add the cooficient of quadratic equation: ");
  scanf("%d %d %d\n", &a, &b, &c);
  // calculate Delta
  delt = b * b - 4 * a * c;
  if (delt > 0) {
    printf("delt :%i\n", delt);
    x1 = (-b - sqrt(b ^ 2 - 4 * a * c)) / (2 * a);
    x2 = (-b + sqrt(b ^ 2 - 4 * a * c)) / (2 * a);
    printf("x1=%f x2=%f", x1, x2);
    return 0;
  } else if (delt == 0) {
    printf("delta %i", delt);
    x1 = (-b + (sqrt(delt))) / (2 * a);
    printf("x1 is equal to x2 %d\t",x1);
    return 0;
    printf("x=%f", x1);
  } else {
    printf("delta %d", delt);
    printf("the equation has two complex roots.");
    return 0;
  }
  return 0;
}