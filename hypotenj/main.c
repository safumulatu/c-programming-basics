#include <stdio.h>
#include <math.h>
int main(){
  double A;
  double B;
  double C;
  printf("enter side A:");
  scanf("%lf", &A);
  printf("enter side B:");
  scanf("%lf", &B);
  C= sqrt(A*A+ B*B);
  printf("side c: %lf", C);

  return 0;

}
