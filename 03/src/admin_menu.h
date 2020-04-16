#include <iostream>
using namespace std;


#ifndef ADMIN_MENU_H_
#define ADMIN_MENU_H_

enum{Exit1,allocate_round_1,list_allocated_stu,list_all_stu,list_course_eligibility,
		list_center_capacity,update_rank} ;


int admin_menu()
{
	cout<<"0. Exit"<<endl ;
	cout<<"1. Allocate centers (Round 1)"<<endl ;
	cout<<"2. List allocated students"<<endl ;
	cout<<"3. list all students appeared for CCAT  "<<endl ;
	cout<<"4. List courses and eligibility "<<endl ;
	cout<<"5. list center and capacity"<<endl ;
	cout<<"6. update student ranks" ;
	cout<<"\nEnter choice : " ;
	int choice ;
	cin>>choice ;
	return choice ;
}



#endif /* ADMIN_MENU_H_ */
