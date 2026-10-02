#include<stdio.h>
int main()
{
   int a=0,b=0 ;
   int c=0 ;
   float d=0;

   printf("Enter marks obtained in Maths:");
   scanf("%d",&a);
   printf("Enter marks obtained in English:");
   scanf("%d",&b);
   printf("Enter marks obtained in Science:");
   scanf("%d",&c);

  d= ((a+b+c)/300.0)*100;
  printf( "Percent of all the three subjects: %.2f%%" , d );

return 0;
}