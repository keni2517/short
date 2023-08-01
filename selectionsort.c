#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n];
int selectionshort()
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int i;
    for(i=0;i<n;i++)
        a[i]=rand()%30+1;
    printf("Random array:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    selectionshort();
    printf("\nSelection Array:\n");
     for(i=0;i<n;i++)
        printf("%d ",a[i]);
}