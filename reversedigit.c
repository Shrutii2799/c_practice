#include<stdio.h>
int main()
{
  int a=0 , year= 0;

  printf("Enter month(1-12):");
  scanf("%d",&a);
  if( a>=1 && a<=12)
  {
    if(a==1|| a==3 || a==5|| a==7|| a==8|| a==10|| a==12)
    {
      printf( "31 DAYS");
    }
    else
    {
      if(a==2)
      {
      printf("Enter year:");
		  scanf("%d",&year);
       if((year % 4 == 0)||(year % 400 == 0 && year % 100!= 0))
       {
         printf("29 days");
       }
       else
       {
         printf("28 days");
       }
      }
      else
      {
        printf( "30 DAYS");

      }
       
    }
  }
  else
  {
    printf("Invalid input");

  }
  return 0;
}
