#include<stdio.h>
void main()
{
	char a[5];
	int i=0,ps,ns=0;
	printf("enter the string");
	scanf("%s",&a);
	printf("state transversing sequence \t");
	for(int i=0;i<5;i++)
	{
		ps=ns;
		if(ps==0)
		{
			if(a[i]=='0')
			{
				printf("%d",ps);
				ns=1;
			}
			else 
			{
				printf("%d",ps);
				ns=2;
			}
		}
		else if(ps==1)
		{
			if(a[i]=='0')
			{
				printf("%d",ps);
				ns=1;
			}
			else 
			{
				printf("%d",ps);
				ns=2;
			}
		}
		else if(ps==2)
		{
			if(a[i]=='0')
			{
				printf("%d",ps);
				ns=3;
			}
			else 
			{
				printf("%d",ps);
				ns=1;
			}
		}
		else if(ps==3)
		{
			if(a[i]=='0')
			{
				printf("%d",ps);
				ns=2;
			}
			else 
			{
				printf("%d",ps);
				ns=3;
			}
		}
	}
	printf("%d",ns);
	if(ns==1)
	{
		printf("\n accepted");
	}
	else{
		printf(" \n rejected");
	}
}
