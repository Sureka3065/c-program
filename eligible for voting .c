# include<stdio.h>
int main()
{
	int age,n;
	printf("enter the age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligible to vote");
	}
	else
	{
		printf("you are not eligible for vote");
		n=18-age;
		printf("\n you are allowed to vote after %d years",n);
	}
	return 0;
}
