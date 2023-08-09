#include <stdio.h>
#include <ctype.h>

int main()
{
  char unit;
  float temp;

   printf("\nIs a temperature in (F) or (C)?:");
   scanf("%c", &unit);
   unit = toupper(unit);

   if(unit=='C')
   {
    printf("enter the celcius temp ");
    scanf("%f", &temp);
    temp = (temp * 9/5) + 32;
    printf("the temp in ferhanit is: %.1f",temp);
   }
   else if(unit=='F')
   {
     printf("enter the ferhanit temp ");
    scanf("%f", &temp);
    temp = ((temp - 32 ) *5)/9;
     printf("the temp in celcious is: %.1f",temp);
   }
   else{
   printf("\n %c is not valid unit measurment", unit);
   }
    return 0;
}
