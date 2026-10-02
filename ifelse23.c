#include<stdio.h>

int main()
{
    int no1= 836, no2=0,c=0,a=0,b=0;
    
    no2=no1/10;//83	
	
	a=no2/10 ;//8
	b=no2%10 ;//3
	c=no1%10 ;//6
	



if(a<b && a<c)
	  {
	    printf(" ");
		
		if(b<c)
		{
		 printf("sum =%d\n diff=%d",a+c,a-c);
		}
	    else
		{
		 printf("sum =%d\n diff=%d",a+b,a-b);
		}
	  }    
	  
  	else if(b<a && b<c)
	  {
	    printf(" ");
		
		if(a<c)
		{
		 printf("sum =%d\n diff=%d",b+c,b-c);
		}
	    else
		{
		 printf("sum =%d\n diff=%d",a+b,a-b);
	  }
	}	
	
		else 
	  {
	    printf("");
		
		if(b<a)
		{
		 printf("sum =%d\n diff=%d",a+c,a-c);
		}
	    else
		{
		 printf("sum =%d\n diff=%d",b+c,b-c);
		}
	  }	

		return 0 ;
	
	
}	
	
	
	   
	  