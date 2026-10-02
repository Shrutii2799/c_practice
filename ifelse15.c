
  
#include<stdio.h>

int main()
{
	int no1=279, no2=0,c=0,a=0,b=0;	
	
	no2=no1/10; //27
	c=no1%10; //5
    a=no2/10; //2
	b=no2%10; //7
	
	if(a>b)
	  {
	    if(a>c)
		{
		printf("greater digit=%d",a);
		}
		else
		{
		printf("greater digit=%d",c);
		}
	  }
    else{
        if(c>b)
        {
		printf("greater digit=%d",c);
		}		
	    else
		{
		printf("greater digit=%d",b);
		}
	
	}
     return 0;	
}