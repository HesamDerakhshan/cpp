//-----------------------------------------------------
//  Exercise of learning c++ course                       
//  Course teacher:  Mr. Shirafkan                         
//  Chapter:         structure 
//  Date:            01/10/2021
//  Copyleft H. E. Derakhshan 2020, All lefts reserved!                                        
//-----------------------------------------------------
// Course title: structure
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <string.h>
using namespace std;
//-----------------------------------------------------


struct student{
   char  name[20] ;
   int   grade[3] ;
   int   student_number[1];
};
int main()
{	
	struct student s;
	
	strcpy(s.name ,"Hesam");  // copy string "Hesam"  to s.name
	
	s.grade[0] = 20;
    s.grade[1] = 17;
    s.grade[2] = 18;
    
    s.student_number[0] = 971141;
	cout <<"name  : "  << s.name <<endl;
	cout <<"student number  : "  << s.student_number[0] <<endl;
	
	cout<<"grade : ";
	for(int k=0; k<=2; k++)
	   cout << s.grade[k] <<"  ";	

	return 0;
}

/*
int main()
{
	char   name[20] = "Ali shirafkan";
	int    grade[3] = { 20, 17, 18};

	cout <<"name  : "  << name<<endl;
	
	cout<<"grade : ";
	for(int k=0; k<=2; k++)
	   cout << grade[k] <<"  ";
	   
  getch();
}
*/
