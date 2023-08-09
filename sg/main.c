#include <stdio.h>
#include <stdlib.h>

int main()
{
   float temp =35;

    printf("\n enter the moment tempereture\n");
      scanf("\n%fl", &temp);
   if(temp == 30||temp<= 25){
    printf("\n the tempreture is good");

}
   else {
     printf("\n the tempreture is is bad");
   }
    return 0;
}
