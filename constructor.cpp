#include<iostream>
#include <cstring>
using namespace std;

class student
{
   char name[20];
   int age;
   int marks;
   
   public:
   student()
   {
   strcpy(name,"shruti");
   age=18;
   marks=99;
   }
   
   void show()
   {
   cout<<"name "<<name<<endl;
   cout<<"age "<<age<<endl;
   cout<<"marks "<<marks<<endl;
   }
  
} ; 
   int main()
{
   student s;
   s.show();
   return 0;
}

