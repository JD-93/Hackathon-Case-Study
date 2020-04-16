
#include <iostream>
#include <string>
using namespace std;
#include "eligibility.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

#ifndef GET_ELIGIBILYT_OBJ_H_
#define GET_ELIGIBILYT_OBJ_H_



vector <eligibility> temp_eligibility ;

vector <eligibility> get_eligibilty_obj()
{
	ifstream in ;
	in.open("eligibilities.csv") ;

	eligibility s ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		s.setCourse(temp) ;

		getline(ss,temp,',') ;
		s.setEligibilitys(temp) ;

		temp_eligibility.push_back(s) ;
	}
	return temp_eligibility;
}




#endif /* GET_ELIGIBILYT_OBJ_H_ */
