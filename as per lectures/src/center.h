

#ifndef CENTER_H_
#define CENTER_H_

#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <map>
#include "capacity.h"
#include "course.h"

extern vector<capacity> capacities ;

class center {
public :
	string ceter_id , ceter_name, cent_addr, coordinator,password ;
	/*
	 *  map<capacity,course> center_map ;
	 *  map<int,string> center_map ;
	 *  key : capacity index
	 *  value : course_id
	 */
	map<int,string> center_map ;

public:
	center();
	~center();

	void display() ;
	void display_with_capacity_course() ;

};

#endif /* CENTER_H_ */
