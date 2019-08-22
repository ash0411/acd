#include<stdio.h>
void main()
{
	char a[5],i=0,ps,ns=0;
	printf("enter the string");
	scanf("%s",a);
	printf("state transversing sequence");
	for(int i=0;i<5;i++)
	{
		ps=ns;
		if(ps==0)
		{
			if(a[i]=='a')
			{
				printf("%d",ps);
				ns=1;
			}
			else 
			{
				printf("%d",ps);
				ns=0;
			}
		}
		else
		{
			if(a[i]=='a')
			{
				printf("%d",ps);
				ns=0;
			}
			else 
			{
				printf("%d",ps);
				ns=1;
			}
		}
	}
	printf("%d",ns);
	if(ns==0)
	{
		printf("\n rejected");
	}
	else{
		printf(" \n acepted");
	}
}
