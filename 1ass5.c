
//Accept p(principal amount), n(number of years ), r(rate) and calculate its (SI)simple interest 


#include<stdio.h>
int main()
{

int a=0, b=0, c=0, d=0;
      printf("Enter principal amount p: ");
      scanf("%d",&a);
      printf("Enter number of years n: ");
      scanf("%d",&b);
      printf("Enter rate: ");
      scanf("%d",&c);
	  
	  d=(a+b+c)/100;
	  
	  printf("Simple Interset=%d",d);
	  
	  
	return 0;
}