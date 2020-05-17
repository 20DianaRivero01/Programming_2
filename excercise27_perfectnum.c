//Enter a number and check if it is a perfect number or not

#include <stdio.h>

int main(void)
{
	int p,i,sum;
  	int mn,mx;

  	printf("Writte a number:\n");
 	scanf("%d",&p);
    	sum = 0;
 	printf("The positive divisor  : ");
    		for (i=1;i<p;i++)
      		{
      			if(p%i==0)
         		{
         			sum=sum+i;
         			printf("%d",i);
         		}
      	 	}
		printf("The sum of the divisor is: %d\n",sum);
    		if(sum==p)
      		printf("The number is perfect. \n");
    			else
      			printf("The number is not perfect.\n");
return 0;
}

