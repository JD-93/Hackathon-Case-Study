#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_MENU_H_
#define STUDENT_MENU_H_

enum {Exit3,list_courses_as_per_eligi,list_center_addr,
		allocated_center_course,payment,give_pref};

int student_menu()
{
	int choice ;
	cout<<endl;
	cout<<"0. Exit "<<endl ;
	cout<<"1. list courses as per eligibility"<<endl ;
	cout<<"2. list centers and address as per eligibility"<<endl ;
	cout<<"3. see allocated center and course "<<endl ;
	cout<<"4. update payment details"<<endl ;
	cout<<"5. give preferences "<<endl;
	cout<<"\nEnter choice :" ;
	cin>>choice;
	return choice ;

}


#endif /* STUDENT_MENU_H_ */
