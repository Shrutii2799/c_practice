//*Accept 4 subjects marks  calculate its percentage and display its grades
#include<stdio.h>

int main()
{
	int maths=92, bio=94, chem=96, phy=98;
	double per = 0.0;
	char grade;
	
	per= ((maths+bio+chem+phy)/400.0)*100;
	
	if(per>=90 && per<=100)
	      printf("grade = A");
		  
		else if(per>=80 && per<=90)
		   printf("grade = B");

        else if(per>=70 && per<=80)
		    printf("grade = C");
			
		else if(per>=60 && per<=70)
		    printf("grade = D");
        else 
		    printf(" No grade");
			
		
    return 0;	
}