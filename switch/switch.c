#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("enter your grade");
    scanf("%c", &grade);
    switch(grade)
    {
     case 'A':
     printf("perfect");
     break;
      case 'B':
           printf("you did good");
            break;
      case 'C':
            printf("you did ok");
            break;
      case 'D':
            printf("at least it's not enough");
            break;
      case 'F':
            printf("you field");
            break;
      default:
             printf("please enter only valid grade THOSE VALID HRADES ARE A,B,C,D,E, OR F ");
    }
    return 0;
}
