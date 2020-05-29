// Write a program to find maximum between three numbers.

#include <stdio.h>

int main()
{
    int num1, num2, num3, max; //three var for the three num

    printf("Enter three numbers: "); // Enter three num
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2) // Check if the first num is greater than the second num.
    {
        if(num1 > num3)	// Check if num one is greater than num three.
        {

            max = num1; //If num one is greater than num two and three, then num one is the max.
        }
        else
        {
            max = num3; //If num one is greater than num two but num one is not greater than num 3, num one is not the greater
        }
    }
    else
    {
        if(num2 > num3) // Check if num two is greater than num three
        {
            max = num2; // if num two is greater than num three, num two is the max
        }
        else
        {
            max = num3; //If num one is not greater than num two and num two is not greater than num three, three is the max num
        }
    }
    printf("Maximum among all three numbers = %d", max); // print the max num

    return 0;
}


