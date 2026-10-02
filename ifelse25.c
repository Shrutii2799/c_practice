#include<stdio.h>

int main()
{
	int no1=836, no2=0, c=0, a=0, b=0;
	
	no2=no1/10 ;//83
	c=no1%10 ;//6
	a=no2/10; //8
	b=no2%10 ;//3
	
	
	if(a>b && a>c)
	{
	  printf("%d",a);
	  
	  if(b>c)
	  {
	  printf("%d%d",b,c);
	  }
	  else
	  {
	  printf("%d%d",c,b);
	  }
	}
	
	else if(b>a && b>c)
	{
	 printf("%d",b);
	 
	 if(a<c)
	 {
	 printf("%d%d",a,c);
	 }
	 else
	 {
	 printf("%d%d",c,a);
	 }
	}
	
	else
	{
      printf("%d",c);
	  
	  if(a<b)
	  {
	  printf("%d%d",a,b);
	  }
	  else
	  {
	  printf("%d%d",b,a);
	  }
	}
	return 0;
	
}
	
	
	   
	  