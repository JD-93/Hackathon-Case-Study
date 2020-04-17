#include <iostream>
using namespace std;
#include <string>
#include "course.h"
#include <vector>
#include <fstream>

#ifndef GET_COURSE_OBJECT_H_
#define GET_COURSE_OBJECT_H_



vector <course> temp_course ;

vector <course> get_course_obj()
{
	ifstream in ;
	in.open("courses.csv") ;

	course s ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		s.setCourseId(temp) ;

		getline(ss,temp,',') ;
		s.setCourseName(temp) ;

		getline(ss,temp,',') ;
		s.setFee(temp) ;


		getline(ss,temp,',') ;
		s.setCcatSection(temp) ;

		temp_course.push_back(s) ;
	}

	return temp_course ;
}



#endif /* GET_COURSE_OBJECT_H_ */
