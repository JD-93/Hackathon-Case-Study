

#ifndef STUDENT_MENU_H_
#define STUDENT_MENU_H_


typedef enum student_operation
{Exit,register_new,sign_in,list_courses,list_centers,give_preferences,see_allocation,payment}MENUOPERATIONS;



int student_menu()
{
	int choice ;
	cout<<endl ;
	cout<<"0. Exit" <<endl ;
	cout<<"1. regiter new student" <<endl ;
	cout<<"2. sign in" <<endl ;
	cout<<"3. list  courses" <<endl ;
	cout<<"4. list of centers" <<endl ;
	cout<<"5. give preferences " <<endl ;
	cout<<"6. see seat allocation" <<endl ;
	cout<<"7. update payment" <<endl ;
	cout<<"Enter choice "  ;
	cin>>choice ;
	return choice ;
}


#endif /* STUDENT_MENU_H_ */
