#include <stdio.h>

int main() {
   	int no1=27, no2=57, no3=7;
	
	if(no1>no2)
	{
	  if(no1>no3)
	  {
	  printf("greater number=%d",no1);
	  }
      else	
      {
	  printf("greater number=%d",no3);
	  }
    }	  
    else
	{
		if(no2>no3)
		{
			printf("greater number=%d",no2);
		}
	    else
		{
			printf("greater number=%d",no3);
		}
	
	}
	
     return 0;	
}     