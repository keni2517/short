#include<stdio.h>
#define n 5
int f=-1,r=-1;
int a[n];
int display()
{
    int i=f;
    if(f<0)
    {
        printf("Queue is empty..");
    }
    else
    {
        do
        {
            printf("%d  ",a[i]);
            i=(i+1)%n;
        }while(i<r);
            printf("%d  ",a[i]);
    }
}
int insert(int val)
{
    if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
    else if((r+1)%n==f)
        printf("Queue is full....\n");
    else
    {
        r=(r+1)%n;
        a[r]=val;
    }
}
int delet()
{
    if(f<0)
        printf("Queue is empty....\n");
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        f=(f+1)%n;
    }
}
int main()
{
    int ch,m;
	printf("1.insert\n");
	printf("2.delet\n");
    printf("3.Display");
    printf("4.exit\n");
	while(ch!=4)
    {
		printf("\nenter choise:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			printf("enter element:");
			scanf("%d",&m);
			insert(m);
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
        }
    }
}