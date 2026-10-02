//Accept a character and display whether it is in Capital or small case

#include<stdio.h>

int main()
{

    char ch=0;
	
	printf("Enter ch :");
	scanf("%c",&ch);
	
	if (ch>='a' && ch<='z' )
	{
          printf("small case");
	}
	 else if(ch>='A' && ch<='Z' )
    {
          printf("capital case");
    }	 
    else
    {
         printf("some other symbol is there");
    }
	return 0;
}