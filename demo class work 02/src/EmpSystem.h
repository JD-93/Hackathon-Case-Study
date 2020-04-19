/*
 * EmpSystem.h
 *
 *  Created on: 18-Apr-2020
 *      Author: sunbeam
 */

#ifndef EMPSYSTEM_H_
#define EMPSYSTEM_H_


#include <map>
#include <string>
#include <vector>
#include <map>
using namespace std;
#include "dept.h"
#include "emp.h"
#include "meeting.h"
#include "invitation.h"






dept * find_dept(vector<dept>&depts,string deptno)
{
	for (size_t i=0 ; i<depts.size() ; i++ ){
		if (depts[i].dept_no == deptno)
			return &depts[i] ;
	}
	return NULL ;
}
void load_emp_csv(vector <dept> &depts)
{
	ifstream fin("emp.csv") ;
	string line ;

	while(getline(fin,line)){
		stringstream ss(line) ;

		string token[4] ;
		for (int i=0 ; i<4 ; i++ )
			getline(ss,token[i],',') ;

		emp obj ;
		obj.emp_no = token[0] ;
		obj.name = token[1] ;
		obj.sal = token[2] ;
		obj.dept_no = token[3] ;

		dept * d = find_dept(depts,obj.dept_no) ;
		d->emps.push_back(obj) ;

	}
}
void load_dept_cvs(vector <dept> &depts)
{
	ifstream fin("dept.csv") ;
	string line ;

	while(getline(fin,line)){
		stringstream ss(line) ;

		string token[3] ;
		for (int i=0 ; i<3 ; i++ )
			getline(ss,token[i],',') ;

		dept obj ;
		obj.dept_no = token[0] ;
		obj.dept_name = token[1] ;
		obj.city = token[2] ;

		depts.push_back(obj) ;

	}
}
void save_emp_csv(vector<dept> depts )
{
	ofstream outf ;
	outf.open("new_emp.csv") ;

	for (size_t i=0 ; i<depts.size() ; i++ ){
		for(size_t j=0 ; j< depts[i].emps.size() ; j++ ){
			outf<<depts[i].emps[j].emp_no<<","
					<<depts[i].emps[j].name<<","
					<<depts[i].emps[j].sal<<","
					<<depts[i].emps[j].dept_no<<endl ;
		}
	}
}
void save_dept_csv(vector<dept>depts)
{
	ofstream outf("new_dept.csv") ;

	for (size_t i=0 ; i<depts.size() ; i++ ){
		outf<<depts[i].dept_no<<","
				<<depts[i].dept_name<<","
				<<depts[i].city<<endl ;
	}
}

void load_invitaion_csv(vector<invitation>&invitations)
{
	ifstream fin("invitations.csv") ;
	string line ;

	while(getline(fin,line)){
		stringstream ss(line) ;

		string token[3] ;
		for (int i=0 ; i<3 ; i++ )
			getline(ss,token[i],',') ;

		invitation obj ;
		obj.emp_no = token[0] ;
		obj.meeting_no = token[1] ;
		obj.status = token[2] ;

		invitations.push_back(obj) ;
	}
}

void load_meeting_csv(vector <meeting> & meetings, vector <invitation> & invitaions)
{
	ifstream fin("meetings.csv") ;
	string line ;

	while(getline(fin,line)){
		stringstream ss(line) ;

		string token[4] ;
		for (int i=0 ; i<4 ; i++ )
			getline(ss,token[i],',') ;

		meeting obj ;
		obj.meeting_no = token[0] ;
		obj.subject = token[1] ;
		obj.venue = token[2] ;
		obj.datetime = token[3] ;

		for (size_t j=0 ; j<invitaions.size() ; j++ ){
			if (invitaions[j].meeting_no == obj.meeting_no ){
				//key : empno
				// val : index of invitaion
				obj.emp_invites[stoi(invitaions[j].emp_no)] =  (int)j ;
			}
		}
		meetings.push_back(obj) ;
	}
}



#endif /* EMPSYSTEM_H_ */
