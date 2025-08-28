
//Accept two numbers and divide them and display its remainder (use % )


#include<stdio.h>
int main()
{
  
 int a=0,b=0,c=0; 
  
  printf("Enter 1st number:");
  scanf("%d",&a);
  printf("Enter 2st number:");
  scanf("%d",&b);
 
  c=a%b;
  
  printf("remainder :%d",c);
  
 return 0;
 
}