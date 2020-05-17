#include <stdio.h>

//enter two numbers and if they are equals make an addition them, if the a is greater than b they will be multiplied, if b is greater then a divide them

int main(){

  int a;

  int b;

  int numbers;

  int x=a+b;

  int y=a*b;

  int z=a/b;


  printf("Enter the first number:");

  scanf("%i",&a);

  printf("Enter the second number:");

  scanf("%i",&b);

if (a==b)

{

   printf("%i",x);

}

else if (a>b)

{

  printf("%i",y);

}

else

{

  printf("%i",z);

}

  return 0;

}


