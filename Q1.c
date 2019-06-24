#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100], n, e, p, i;
    printf("\nEnter the number of elements(max 100)");
    scanf("%d",&n);
    printf("\nEnter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(n==100)
    {
        printf("\nArray is full\n");
        exit(0);
    }
    printf("\nEnter the position you want to add new element ");
    scanf("%d",&p);
    if(p>n)
    {
        printf("\nInvalid\n");
        exit(0);
    }
    printf("\nEnter the element :");
    scanf("%d",&e);
    printf("\nArray : ");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
    if(p==n)
    {
        a[n]=e;
        n++;
    }
    else
    {
        for(i=n-1;i>=p;i--)
            a[i+1]=a[i];
        a[p]=e;
        n++;
    }
    printf("\nNew array:");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
    printf("\n");
}