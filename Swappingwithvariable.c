#include<stdio.h>
int main()
{
    int a=5,b=4;
	int c=0;
	c=a;
	a=b;
	b=c;
	printf("after swapping a=%d and b=%d\n",a,b);
	return 0;
}