#include<stdio.h>
int add(int a,int b)
{
	printf("addition is : %d\n",a+b);
}
int sub(int a,int b)
{
	printf("subtraction is : %d\n",a-b);
}


int main()
{
	int a=2,b=4;
	add(a,b);
	sub(a,b);
}
	
