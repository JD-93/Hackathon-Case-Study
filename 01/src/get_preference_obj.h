#include <iostream>
#include <string>
using namespace std;
#include "preferences.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>


#ifndef GET_PREFERENCE_OBJ_H_
#define GET_PREFERENCE_OBJ_H_



vector <preferences> temp_preferences ;

vector <preferences> get_prefrences_obj()
{
	ifstream in ;
	in.open("preferences.csv") ;

	preferences s ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		s.setFormNo(temp) ;

		getline(ss,temp,',') ;
		s.setPrefNo(temp) ;

		getline(ss,temp,',') ;
		s.setCourseName(temp) ;

		getline(ss,temp,',') ;
		s.setCenterId(temp) ;

		temp_preferences.push_back(s) ;
	}
	return temp_preferences;
}






#endif /* GET_PREFERENCE_OBJ_H_ */
