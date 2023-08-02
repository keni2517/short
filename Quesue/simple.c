#include<stdio.h>
#define n 5
int f=-1,r=-1;
int a[n];
int display()
{
    int i;
    if(f<0)
       printf("Queue is empty:\n");
    else
    {
    for(i=f;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
    }
    printf("\n");
}
int intsert(int val)
{
    if(r>=n-1)
        printf("Queue is full\n ");
    else if(r<0)
    {
        f = r =0;
        a[r]=val;
    }
    else   
    {
        r++;
        a[r]=val;
    }
}
int delet()
{
    if(f<0)
        printf("Queue is empty:\n");
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        ++f;
    }
}
int main()
{
    int ch,m;
	printf("1.insert\n");
	printf("2.delet\n");
    printf("3.display\n");
	printf("4.exit\n");
    while(ch!=4)
	{
		printf("enter choise:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			printf("enter element:");
			scanf("%d",&m);
			intsert(m);
			break;
		case 2:
			delet();
			break;
        case 3:
			display();
			break;
		case 4:
			printf("exit");
			break;
		default:
			printf("wrong choice");
		}
	};
}