#include <iostream>
using namespace std;

#ifndef ADMIN_H_
#define ADMIN_H_

enum Admin{Exit,Sign_in,list_course,center_cap,list_stu,update_rank,round_1} ;


int admin_menu()
{

	int admin_choice ;
	cout<<"0. Exit from menu"<<endl ;
	cout<<"1. Sign in " <<endl ;
	cout<<"2. list courses and eligibility"<<endl ;
	cout<<"3. list center and capacity "<<endl ;
	cout<<"4. list students" <<endl ;
	cout<<"5. Update student ranks"<<endl ;
	cout<<"6. Allocate centers (Round 1)"<<endl;
	cout<<"Enter choice "  ;
	cin>>admin_choice ;
	return admin_choice ;

}

#endif /* ADMIN_H_ */
