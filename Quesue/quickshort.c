#include<stdio.h>
#include<stdlib.h>
int n;
void print(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
void quickshort(int a[],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        print(a);
        pivot=first;
        i=first,j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
            i++;
            while(a[j]>a[pivot])
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[i]=temp;
            }
            temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;
            quickshort(a,first,j-1);
            quickshort(a,j+1,last);
        }
    }
}
int main()
{
    int a[25],i;
    printf("how many element enter:");
    scanf("%d ",&n);
    for(i=0;i<n;i++)
        a[i]=rand()%100+1;
    quickshort(a,0,n-1);
    printf("\nAfter Quick sort:");
    print(a);
}