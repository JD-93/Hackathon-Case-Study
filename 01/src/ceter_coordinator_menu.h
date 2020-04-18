#include <iostream>
using namespace std;


#ifndef CETER_COORDINATOR_MENU_H_
#define CETER_COORDINATOR_MENU_H_

enum {Exit2,list_student,list_course,report_status,list_PRN} ;

int center_cordinator_menu()
{
	int choice ;
	cout<<"0. Exit "<<endl ;
	cout<<"1. List students (allocated to that center)"<<endl ;
	cout<<"2. List courses (of that center)"<<endl ;
	cout<<"3. Update reported status" <<endl ;
	cout<<"4. list with prn no "<<endl;
	cout<<"\nEnter choice : ";
	cin>>choice ;
	return choice ;
}



#endif /* CETER_COORDINATOR_MENU_H_ */
