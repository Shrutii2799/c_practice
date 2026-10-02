//Accept sale amount and and display 5 % commition on sale greater then 40000

#include<stdio.h>

int main()
{
    int amount=0;

	printf("Enter amount :");
	scanf("%d",&amount);
	
	if(amount>40000)
	{
	amount=amount+ amount*(0.5);
	printf("amount= %d",amount);
	
	}
	
	else
	{
	printf("amount =%d",amount);
	}
	
	
	return 0;
}