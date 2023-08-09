#include <stdio.h>
#include <math.h>
int main()
{
   const double PI = 3.14159;
   double radious;
   double circumference;
   double area;
   area= PI * radious * radious;
   printf("\n  enter the radius of circle:");
   scanf("\n %lf",&radious);
   circumference = 2* PI* radious;
   printf("\n  circumference is : %lf" ,circumference);
   printf( "\n area is : %d" ,area);
   return 0;

}
