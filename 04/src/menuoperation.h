#include <iostream>
using namespace std;

#include "student_menu.h"
#ifndef MENUOPERATION_H_
#define MENUOPERATION_H_

enum operation
{EXIT,Student,Admin,Center_coordinator};

int menuoperation()
{
	int choice ;
	cout<<endl ;
	cout<<"0. EXIT" <<endl ;
	cout<<"1. Student" <<endl ;
	cout<<"2. Admin" <<endl ;
	cout<<"3. Center_coordinator" <<endl ;
	cout<<"Enter choice "  ;
	cin>>choice ;
	return choice ;
}



#endif /* MENUOPERATION_H_ */
