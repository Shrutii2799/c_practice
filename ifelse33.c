/*Accept a month (accept the month in integer, eg.January = 1,feb = 2....)
  and display number of days present in that month
  
  input : month = 3.
  output: days = 31.
  
*/

#include<stdio.h>

int main()
{
	int month, days = 0,year=0;
	
	printf("Enter month :");
	scanf("%d",&month);
	
    if(month==1)
	{
	    printf("days=31");
	}
	else if(month==2)
    {
	    printf("Enter year :");
		scanf("%d",&year);
		if((year%4==0 && year%100!=0) ||year%400==0){
	    printf("days=29");
		}
		else{
		printf("days=28");
		}
	}
	else if(month==3)
    {
	    printf("days=31");
	}
	else if(month==4)
    {
	    printf("days=30");
	}
	else if(month==5)
    {
	    printf("days=31");
	}
	else if(month==6)
    {
	    printf("days=30");
	}else if(month==7)
    {
	    printf("days=30");
	}else if(month==8)
    {
	    printf("days=31");
	}else if(month==9)
    {
	    printf("days=30");
	}else if(month==10)
    {
	    printf("days=31");
	}
	else if(month==11)
    {
	    printf("days=30");
	}
	else 
	{
	    printf("days=31");
	}
    return 0;   
}  

