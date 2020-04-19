/*
 * meeting.h
 *
 *  Created on: 18-Apr-2020
 *      Author: sunbeam
 */

#ifndef MEETING_H_
#define MEETING_H_

#include <map>
#include <string>
#include <vector>
using namespace std;
#include <iostream>
#include "emp.h"
#include "invitation.h"


class meeting
{
	public :
	string meeting_no , subject, venue, datetime ;
	map <int,size_t > emp_invites ; // key:empno &  value : index of invitation
	void display()
	{
		cout<<meeting_no<<","<<subject<<","<<venue<<","<<datetime<<endl ;
	}
	void display_invitaions (vector<invitation>&invitations)
	{
		map<int,size_t>::iterator itr = emp_invites.begin() ;
		while(itr != emp_invites.end()){
			invitations[itr->second].display() ;
			itr++ ;
		}
	}
};


#endif /* MEETING_H_ */
