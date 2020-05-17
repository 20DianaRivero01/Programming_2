//Know if the person is underage, legal age or old

#include<stdio.h>


int main(void){

  int age;

  printf("Enter your age:");

  scanf("%i",&age);

if (age<18)

{

   printf("underage");

}

else if (age>18)

{

  printf("legal age");

}

else

{

  printf("old");

}

  return 0;

}
