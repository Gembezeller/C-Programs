#include<stdio.h>
int main()
{
	int arr[5],i,max;
	printf("Enter the numbers \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<5;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	printf("max%d",max);
}
