// Write a program to check whether a number is even or odd.

#include<stdio.h>

int main() {
    int num;
    printf("Enter an integer: "); // The user enters an integer number to be checked
    scanf("%d", &num);

    if(num % 2 == 0) // Check if the numerber is divisible by 2 
        printf("%d is even.", num);
    else  // if it is not it is a odd num
        printf("%d is odd.", num);
    
    return 0;
}
