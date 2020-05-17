//Introduce n number and then the program will make an addition of the numbers starting with one to n number

#include <stdio.h>

int main(void)
{
    int i,n,sum=0;

    printf("Please introduce the number of the terms:\n");
    scanf("%d",&n);
    printf("The first %d natural number/s is/are:\n",n);

        for(i=1;i<=n;i++)
        {
            printf("%d\n",i);
            sum+=i;
        }

	printf("The Sum of natural numbers for %d terms is: %d \n",n,sum);

return 0;
}
