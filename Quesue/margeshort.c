#include<stdio.h>
#include<stdlib.h>
#define n 15
void merage(int a[],int l,int mid,int h)
{
    int b[20];
    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=h)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=h)
        b[k++]=a[j++];
    for(i=0;i<n;i++)
        a[i]=b[i];
}
int mergesort(int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merage(a,l,mid,h);
    }
}
int main()
{
    int a[n],i;
    for(i=0;i<n;i++)
        a[i]=rand()%99+1;
    printf("Befor shorting:\n");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
    mergesort(a,0,n-1);
    printf("\nAfter shotring:\n");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
}