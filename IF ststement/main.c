#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("enter your age", age);
    scanf("%d" ,&age);
    if(age >= 18)
    {
      printf("you are old enough to get married");
    }
   else if(age <0)
    {
      printf("oops hey brother are you mad what are you doing here");
    }
    else if(age ==0)
    {
      printf("you can't brther you were just born");
    }
    else
    {
      printf("you are not enough to get married");
    }
    return 0;
}
