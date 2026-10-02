#include <stdio.h>
int main()
{
  int a=0,b=0,c=0;
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter b:");
  scanf("%d",&b);
  printf("Enter c:");
  scanf("%d",&c);
  
 //1st if 
 if(a>b && a>c)
 {
	 printf(" a is Greatest ");
	 //if within the 1st if
	 if(b<c)
     {
		 printf(" b is smallest ");
	 }
	 else
	 {
		 printf(" c is smallest ");
	
	 }
 }	 
 //else of 1st if(1st else)
 else
 { 
		//if within the 1st else
      if( b>a && b>c)
      {
	  printf(" b is largest ");
	   if(a<c)
		{
			printf(" a is smallest ");
		}			
		
	  else
		{
			printf(" c is smallest ");	
		}
	  }
	   
	//else within the 1st else 
      else
	  {
		  printf(" c is greatest ");
		  if(a<b)
	  {
		  printf(" a is smallest ");
	  }
		 else
		{
			printf(" b is smallest ");
		}
	  }	
 }
 
return 0; 

}  