
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
#include <vector>
#include <map>

#include "emp.h"
#include "dept.h"
#include "invitation.h"
#include "meeting.h"
#include "EmpSystem.h"


int main()
{

	vector <dept> depts ;
	vector<invitation>invitations ;
	vector<meeting>meetings ;

	load_dept_cvs(depts) ;
	load_emp_csv(depts) ;
	load_invitaion_csv(invitations) ;
	load_meeting_csv(meetings,invitations) ;


/*
	vector <dept> depts ;
	load_dept_cvs(depts) ;
	load_emp_csv(depts) ;
	cout<<"size of depts : "<<depts.size()<<endl ;
	for (size_t i=0 ; i<depts.size() ; i++ )
		depts[i].display() ;


	save_emp_csv(depts) ;
	save_dept_csv(depts) ;
*/
/*

	cout<<"size of invitations : "<<invitations.size()<<endl ;
	for (size_t i=0 ; i<invitations.size() ; i++ )
		invitations[i].display() ;

 */
/*
	cout<<"size of meetings : "<<meetings.size()<<endl ;
	for (size_t i=0 ; i<meetings.size() ; i++ )
		meetings[i].display() ;
*/


	for (size_t i=0 ; i<meetings.size() ; i++ ){
		meetings[i].display() ;
		meetings[i].display_invitaions(invitations) ;
	}

	return 0 ;
}
