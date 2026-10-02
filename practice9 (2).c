/* Accept variables and calculate and display:
   1) Area and parameter of square   (side = 7 cm)
   2) Area and parameter of rectangle(length = 7cm, width = 3cm)
   2) Area and parameter of triangle (s1 = 20cm,s2 = 20cm,base = 32cm, height = 12cm)
   3) Area and cicumference of Circle   (diameter = 8cm) 
*/

#include<stdio.h>

int main(void)
{
	
int a=0, b=0, c=0, d=0;
      printf("Enter side: ");
      scanf("%d",&a);
       
	   
	  b=a*a;
	  c=a*a;
	  printf("Area of square is:%d,b" );
	  printf("Perimeter of square is:%d,c" );
			
				 
      printf("Enter length: ");
      scanf("%d",&d);
      printf("Enter width: ");
      scanf("%d",&e);
      
	  
	  f=d*d;
      g=d*d;
	 printf("Area of Rectangangle is:%d,b" );
	 printf("Perimeter of Rectangangle is:%d,c" );
				 
				 
				 		 
      printf("a1: ");
      scanf("%d",&h);
      printf("a2: ");
      scanf("%d",&i);
      printf("a3: ");
      scanf("%d",&j);
	  
	  k=1/2(h+i+j);
	 printf("Area of triangle is:%d,k");
				 
	 l=h+i+j;
	 printf("Perimeter of triangle is:%d,l" );
	 
	 			 		 
      printf("radius: ");
      scanf("%d",&m);
      
	  n=3.14*m*m;
	 printf("Area of circle is:%d",n);
	 
	 o= 2*3.14*m;
			 
     printf("Area of circle is:%d",o);
				 
				 
				 
				 
				 
				 
	return 0;
}
