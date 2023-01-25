#include<stdio.h>
int main()
{
	int arr[10],n,i,sum=0,*p=arr;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=*p;
		*p++;
	}
	printf("sum=%d",sum);
	return 0;
}

