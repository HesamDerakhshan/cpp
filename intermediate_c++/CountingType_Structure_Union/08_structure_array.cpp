//-----------------------------------------------------
//  Exercise of learning c++ course                       
//  Course teacher:  Mr. Shirafkan                         
//  Chapter:         structure 
//  Date:            01/10/2021
//  Copyleft H. E. Derakhshan 2020, All lefts reserved!                                        
//-----------------------------------------------------
// Course title: array of  structure
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
}s[2];
int main()
{	
//	student s[2];

	
	strcpy(s[0].name ,"Hesam");  // copy string "Hesam"  to s.name
	strcpy(s[1].name ,"kimiya");  // copy string "kimiya"  to s.name
	
	s[0].grade[0] = 20;
    s[0].grade[1] = 17;
    s[0].grade[2] = 18;
	
	s[1].grade[0] = 20;
    s[1].grade[1] = 15;
    s[1].grade[2] = 14;
	
	    
    s[0].student_number[0] = 971141;
    s[1].student_number[0] = 971112;
    
    for(int i = 0; i < 2;i++){
		cout <<"name  : "  << s[i].name <<endl;
		cout <<"student number  : "  << s[i].student_number[0] <<endl;
	
		cout<<"grade : ";
		
		for(int k=0; k<=2; k++)
	   		cout << s[i].grade[k] <<"  ";
		cout << endl << endl;;
	}
	return 0;
}

