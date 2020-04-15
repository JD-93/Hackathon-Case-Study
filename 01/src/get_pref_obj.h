#include <iostream>
#include <string>
using namespace std;
#include "preferences.h"
#include <vector>
#include <fstream>
#include "Center.h"
extern vector <Center> vect_center ;

#ifndef GET_PREF_OBJ_H_
#define GET_PREF_OBJ_H_


vector <preferences> vect_pref ;

vector <preferences>  get_obj_pref()
{

	ifstream in ;
	in.open("preferences.csv") ;

	preferences s ;
	string line ;


	while(getline(in,line)){
		stringstream ss(line) ;
		string temp ;
		int no ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.setFromNo(no) ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.setPrefNo(no) ;

		getline(ss,temp,',') ;
		s.setCourseName(temp) ;

		getline(ss,temp,',') ;
		s.setCourseId(temp) ;


		vect_pref.push_back(s) ;
//		cout<<vect_pref.size()<<"\n";
	}
	return vect_pref ;
}



#endif /* GET_PREF_OBJ_H_ */
