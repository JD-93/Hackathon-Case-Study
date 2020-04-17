
#include <iostream>
#include <string>
using namespace std;
#include "students.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

#ifndef GET_STUDENT_OBJECT_H_
#define GET_STUDENT_OBJECT_H_

vector <students> temp_stu ;

vector <students> get_stu_obj()
{
	ifstream in ;
	in.open("students.csv") ;

	students s ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		s.setFormNo(temp) ;

		getline(ss,temp,',') ;
		s.setName(temp) ;

		getline(ss,temp,',') ;
		s.setRankA(temp) ;

		getline(ss,temp,',') ;
		s.setRankB(temp) ;

		getline(ss,temp,',') ;
		s.setRankC(temp) ;

		getline(ss,temp,',') ;
		s.setDegree(temp) ;

		getline(ss,temp,',') ;
		s.setPercentage(temp) ;

		getline(ss,temp,',') ;
		s.setAllocPref("NA") ;

		getline(ss,temp,',') ;
		s.setAllocCourse("NA") ;

		getline(ss,temp,',') ;
		s.setAllocCentId("NA") ;

		getline(ss,temp,',') ;
		s.setPayment("NA") ;

		getline(ss,temp,',') ;
		s.setReportCenter("NA") ;

		getline(ss,temp,',') ;
		s.setPrn("NA") ;

		temp_stu.push_back(s) ;
	}

	return temp_stu ;
}




#endif /* GET_STUDENT_OBJECT_H_ */
