#include <iostream>
using namespace std;

#ifndef ADMIN_H_
#define ADMIN_H_

enum Admin{Exit,list_stu,list_course,center_cap} ;


int admin_menu()
{

	int admin_choice ;
	cout<<"0. Exit from menu"<<endl ;
	cout<<"1. list students" <<endl ;
	cout<<"2. list courses and eligibility"<<endl ;
	cout<<"3. list center and capacity "<<endl ;
	cout<<"Enter choice "  ;
	cin>>admin_choice ;
	return admin_choice ;

}

#endif /* ADMIN_H_ */
