#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;
    printf("\n enter an operator(+, -, / *):");
    scanf("%c", &operator);
    printf("enter num 1");
    scanf("%lf", &num1);
    printf("enter num 2");
    scanf("%lf", &num2);
    switch(operator)
    {
        case '+':
          result= num1 + num2;
          printf("result:%lf", result);
          break;
        case '-':
          result= num1 - num2;
          printf("result:%lf", result);
          break;
       case '/':
          result= num1 / num2;
          printf("result:%lf", result);
          break;
       case '*':
          result= num1 * num2;
          printf("result:%lf", result);
          break;
      default:
         printf("syntax error",operator);
    }

    return 0;
}
