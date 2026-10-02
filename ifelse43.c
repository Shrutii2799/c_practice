#include<stdio.h>

int main()
{


    char ch=0;
	
	printf("Enter ch :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z' )
    {
	      ch= ch+32; 
          printf("upper case to lower case: %c",ch );
    }	 

	return 0;
}