//Calculate the sum of the series x+xx+...n terms
#include<stdio.h>
int main(void)
{
	int n,i;
  	long sum=0;
	long int a=1;
  	printf("Writte the number of terms : ");
  	scanf("%d",&n);
  		for(i=1;i<=n;i++)
  		{
     			printf("%ld  ",a);
      			if (i<n)
      			{
          			printf("+ ");
                	}
     			sum=sum+a;
     			a=(a*10)+1;
  		}
  		printf("\nThe Sum is : %ld\n",sum);
return 0;
}

