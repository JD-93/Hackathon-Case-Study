#include <iostream>
#include <string>
using namespace std;
#include "counterforseats.h"
#include <vector>
#include <fstream>


#ifndef GET_COURSE_INST_OBJ_H_
#define GET_COURSE_INST_OBJ_H_


vector <counter_for_seats> vect_s1 ;

vector <counter_for_seats>  get_obj_course_inst()
{

	ifstream in ;
	in.open("capacities.csv") ;

	counter_for_seats s ;
	string line ;


	while(getline(in,line)){
		stringstream ss(line) ;
		string temp ;
		int no ;

		getline(ss,temp,',') ;
		s.setId(temp) ;

		getline(ss,temp,',') ;
		s.setCourse(temp) ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.capacity = no ;






		vect_s1.push_back(s) ;
//		cout<<vect_s.size()<<"\n";
	}
	return vect_s1 ;
}



#endif /* GET_COURSE_INST_OBJ_H_ */
