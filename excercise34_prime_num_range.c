//Print the prime numbers wich are between a range of num

#include <stdio.h>

int main(void)
{
    int num,i,ctr,sn,en;  //sn:starting number-en:ending number

        printf("Writte the starting number of the range:\n ");
        scanf("%d",&sn);

        printf("Writte the ending number of range:\n ");
        scanf("%d",&en);

        printf("The prime numbers between %d and %d are:\n",sn,en);

            for(num = sn;num<=en;num++)
            {
            ctr = 0;

                for(i=2;i<=num/2;i++)
                {
                    if(num%i==0){
                    ctr++;
                    break;
                }
            }
                    if(ctr==0 && num!= 1)
                    printf("%d\n",num);
    }
    return 0;
}
