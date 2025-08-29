/* Accept variables and calculate and display:
   1) Area and parameter of square   (side = 7 cm)
   2) Area and parameter of rectangle(length = 7cm, width = 3cm)
   2) Area and parameter of triangle (s1 = 20cm,s2 = 20cm,base = 32cm, height = 12cm)
   3) Area and cicumference of Circle   (diameter = 8cm) 
*/

#include<stdio.h>

int main(void)
{
	
int a=0, b=0, c=0, d=0,h=0,i=0,j=0,k=0,l=0,n=0,o=0,p=0,e=0,f=0,g=0,m=0;
      printf("Enter side: ");
      scanf("%d",&a);
       
	   
	  b=a*a;
	  c=a*a;
	  printf("\n Area of square is:%d \n",b);
	  printf("\n Perimeter of square is:%d \n",c );
			
				 
      printf("\n Enter length: \n ");
      scanf("%d",&d);
      printf("\n Enter width: \n ");
      scanf("%d",&e);
      
	  
	  f=d*e;
      g=d*e;
	 printf("\n Area of Rectangangle is:%d \n",b );
	 printf("\n AreaPerimeter of Rectangangle is:%d \n",c );
				 
				 
				 		 
      printf("\n a1:\n ");
      scanf("%d",&h);
      printf("\n a2:\n ");
      scanf("%d",&i);
      printf("\na3: \n");
      scanf("%d",&j);
	  
	  k=0.5*(h+i+j);
	 printf("\nArea of triangle is:%d \n",k);
				 
	 l=h+i+j;
	 printf("\nPerimeter of triangle is:%d\n",l);
	 
	 			 		 
      printf("\nradius:\n ");
      scanf("%d",&m);
      
	  n=3.14*m*m;
	 printf("\nArea of circle is:%d\n",n);
	 
	 o= 2*3.14*m;
			 
     printf("\nArea of circle is:%d\n",o);
				 
				 
				 
				 
				 
				 
	return 0;
}
