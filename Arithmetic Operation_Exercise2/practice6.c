#include<stdio.h>

int main()
{
	int a=0,b=0,c=0,d=0;

	printf("Enter number:");
	scanf("%d",&a);
	
	
	b=a/10;
	c=a%10;
	
	d=(c*10+b);
	
	printf("REVERSE IS=%d",d);
	
	return 0;

}
