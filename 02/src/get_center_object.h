#include <iostream>
using namespace std;
#include <string>
#include "center.h"
#include <vector>
#include <fstream>

#ifndef GET_CENTER_OBJECT_H_
#define GET_CENTER_OBJECT_H_



vector <center> temp_center ;

vector <center> get_center_obj()
{
	ifstream in ;
	in.open("centers.csv") ;

	center s ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		s.setCenterId(temp) ;

		getline(ss,temp,',') ;
		s.setCenterName(temp) ;

		getline(ss,temp,',') ;
		s.setCenterAddr(temp) ;


		getline(ss,temp,',') ;
		s.setCoordinator(temp) ;

		getline(ss,temp,',') ;
		s.setPassword(temp) ;

		temp_center.push_back(s) ;
	}

	return temp_center ;
}





#endif /* GET_CENTER_OBJECT_H_ */
