//EXCERCISE 13-1
//Write a program that uses pointers to set each element of an array to zero

#include <stdio.h>

#define NUM 11 // The size of the array

int main(){

  int numbers[NUM] = {1,2,3,4,5,6,7,8,9,10,11}; // Variable array of numbers

  int *n_num; // Pointer Var

  int n;

  for(n_num = &numbers[0];n_num < &numbers[NUM];n_num++){ // A bucle for to check if my var reach the total size of the array (11).

    *n_num = 0; // It wil make the output print for each var = 0
  }

  for(n=0;n<NUM;n++){

    printf("The number [%i] is: %i\n",n,numbers[n]); //the numbers will start counting from 0 to 10
  }

  return 0;
}
