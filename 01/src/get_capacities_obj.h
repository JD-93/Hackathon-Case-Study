
#include <iostream>
#include <string>
using namespace std;
#include "capacities.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

#ifndef GET_CAPACITIES_OBJ_H_
#define GET_CAPACITIES_OBJ_H_


vector <capacities> temp_capacity ;

vector <capacities> get_capacity_obj()
{
	ifstream in ;
	in.open("capacities.csv") ;

	capacities s ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		s.setCenterId(temp) ;

		getline(ss,temp,',') ;
		s.setCourseName(temp) ;

		getline(ss,temp,',') ;
		s.setMaxCapacity(temp) ;


		getline(ss,temp,',') ;
		s.setFilledCapacity(temp) ;

		temp_capacity.push_back(s) ;
	}
	return temp_capacity;
}





#endif /* GET_CAPACITIES_OBJ_H_ */
