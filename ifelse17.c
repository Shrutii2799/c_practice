#include<stdio.h>

int main()
{
	char ch;
    
	printf("Enter ch :");
	scanf("%c",&ch);
     
	if( ch >= 'a' && ch <= 'z')
	{
	    ch= ch - 32;
		printf("Changed to its uppercase = %c",ch);
		
	}
	    
     else
     {
        if( ch>= 'A' && ch<= 'Z')
	    {
	        ch= ch+ 32;
	    	printf("Changed to its lowercase = %c",ch);
		
	    }     
     }
	return 0;	
	}