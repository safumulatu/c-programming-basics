#include <stdio.h>
#include <math.h>
int main()
{
   const double PI = 3.14159;
   double radious;
   double circumference;

   printf("\n enter the radius of circle:");
   scanf("%lf",&radious);
   circumference = 2* PI* radious;
   printf("circumference is : %lf" ,circumference);


   return 0;

}
