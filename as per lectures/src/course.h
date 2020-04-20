
#ifndef COURSE_H_
#define COURSE_H_

#include <iostream>
#include <string>
using namespace std;
#include <map>
#include <algorithm>
#include <vector>
#include "eligibility.h"

class course {
public :
	string course_id, course_name, fee, ccat_section ;

	/*
	 *  map<capacity,center> course_map ;
	 *  map<int,string> course_map ;
	 *  key : capacity index
	 *  value : center_id
	 */
	//    center -- capacity -- center
	// link course and capacity
	map<int,string> course_map ;

public:
	course();
	~course();

	void display() ;
	void display_with_capacity_course() ;
};

#endif /* COURSE_H_ */
