#include<stdio.h>
int square(int num)
{
	return (num*num);
}
int main()
{
	int num,s;
	printf("enter the number:");
	scanf("%d",&num);
	s=num*num;
	printf("the square of %d is %d",num,s);
	return 0;
}

