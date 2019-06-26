// to find the prime numbers between a given range
#include<stdio.h>
int main()
{
    int a,b,i,j,c=0,arr[100],k=0;
    printf("\nEnter the lower limit ");
    scanf("%d",&a);
    printf("\nEnter the upper limit ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            arr[k++]=i;
        }
        c=0;
    }
    if(k==0)
    {
        printf("\nThere are no prime numbers");
    }
    else
    {
        printf("\nThe prime numbers are: ");
        for(i=0;i<k;i++)
        {
            printf(" %d",arr[i]);
        }
    }
    
}
