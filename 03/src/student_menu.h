#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_MENU_H_
#define STUDENT_MENU_H_

enum {Exit3,list_courses_as_per_eligi,list_center_addr};

int student_menu()
{
	int choice ;
	cout<<"0. Exit "<<endl ;
	cout<<"1. list courses as per eligibility"<<endl ;
	cout<<"2. list centers and address as per eligibility"<<endl ;

	cout<<"\nEnter choice :" ;
	cin>>choice;
	return choice ;

}


#endif /* STUDENT_MENU_H_ */