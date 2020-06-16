//EXERCISE 13-2
//Write a function that takes a single string as its argument and returns a pointer to the first nonwhite character in the string.

#include <stdio.h>
#include <ctype.h>

char *nonwhite(char *string);

char *nonwhite(char *string){ // Func will take the value of the str

int i;
for(i=0;i<sizeof(string);i++){ // For loop troght all the string characters
  if (string[i] != ' '){ // If the none with space fill the space
    return &string[i];
  }
}
 return &string[i];
}

int main(){
char string[] = " Practicing Strings";
printf("The first nonwhite character: %c\n",*nonwhite(string)); // output

return 0;
}
