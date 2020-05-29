//Write a program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: "); //The user will enter the Char that is going to be check
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) // if the Char given is a letter 
    {
        printf("'%c' is alphabet.", ch); 
    }
    else if(ch >= '0' && ch <= '9') // If the char is not an alfabet, check if it is a digit between 0-9
    {
        printf("'%c' is digit.", ch);
    }
    else // if it is none of above, it is a special character.
    {
        printf("'%c' is special character.", ch); 
    }

    return 0;
}
