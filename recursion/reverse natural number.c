#include<stdio.h>
void main()
{
	void nat(int);
	int a;
	printf("enter the number");
	scnaf("%d",&a);
	nat(a);
	
}
void nat(int n)
{

	if(n>0)
	{
		printf("%d",n);
		nat(n-1);
	}
	else
	{
		printf(" ");;
	}
}
