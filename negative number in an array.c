# include<stdio.h>
int main()
{
	int a[1000],i,n,c=0;
	printf("enter size of the array:");
	scanf("%d",&n);
	printf("enter elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if (a[i]<0)
		c++;
	}
	printf("count of negative numbers in array:%d",c);
	return 0;
	
}
