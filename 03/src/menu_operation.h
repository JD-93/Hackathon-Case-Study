#include <iostream>
#include <string>
using namespace std;
#include "admin_menu.h"
#include "ceter_coordinator_menu.h"
#include "student_menu.h"

#ifndef MENU_OPERATION_H_
#define MENU_OPERATION_H_

enum {EXIT,Student,Admin,Center_coordinator} ;

int menu_choice()
{
	int choice ;

	cout<<"0. EXIT"<<endl ;
	cout<<"1. STUDENT"<<endl ;
	cout<<"2. ADMIN"<<endl ;
	cout<<"3. CENTER COORDINATOR"<<endl ;
	cout<<"\nEnter choice : ";
	cin>>choice ;
	return choice ;
}


#endif /* MENU_OPERATION_H_ */
