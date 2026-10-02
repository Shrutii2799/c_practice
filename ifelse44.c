//Accept a lower case  character and convert  it to the upper  case 

#include<stdio.h>

int main()

{


    char ch=0;
	
	printf("Enter ch :");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' )
    {
	      ch= ch-32; 
          printf("lower case to upper case: %c",ch );
    }	 

	return 0;
}

