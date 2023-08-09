#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("enter your grade");
    scanf("%c", &grade);
    if(grade=='A'){
      printf("WOW PERFECT");
    }
    else if(grade=='B')
    {
      printf("excelllent");
    }
    else if(grade=='C')
    {
      printf("its ok not bad");
    }
    else if(grade=='D')
    {
      printf("its absolutrly bad");
    }
    else if(grade=='F')
    {
      printf("oops you are field");
    }
    else
            {
            printf("sorry thats not valid grade");
         }

    return 0;
}
