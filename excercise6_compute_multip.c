//Enter a number wich you want to be multiplicated from 1 to 50

#include <stdio.h>

int main(void)
{
   int t,n;
   printf("Please enter the number which you want to be calculated: \n");
   scanf("%d",&n);

        for(t=1;t<=50;t++)
        {
            printf("%d X %d = %d \n",n,t,n*t);
        }

return 0;
}

