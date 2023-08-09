#include <stdio.h>
#include <stdlib.h>
void birthday(char x[], int y)
{
  printf("\n happy birth day dear %s", x);
     printf("\n you are %d years old", y);
}


int main()
{
    char name[]= "safu";
    int age = 22;
    birthday(name, age);
    return 0;
}
