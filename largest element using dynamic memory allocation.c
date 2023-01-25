# include<stdio.h>
int main()
{
	int i,n,*data;
	printf("how many element you want to add:");
	scanf("%d",&n);
	data=(int*)calloc(n,sizeof(int));
	if(data==NULL)
	{
		printf("error!!! memory is not allocated");
		exit(0);
	}
	printf("\n");
	for(i=0;i<n;++i)
	{
		printf("enter number %d:",i+1);
		scanf("%d",data+1);
	}
	for(i=1;i<n;++i)
	{
		if(*data<*(data=i))
		*data=*(data+i);
	}
	printf("\nlargest element =%d",*data);
	return 0;
}
