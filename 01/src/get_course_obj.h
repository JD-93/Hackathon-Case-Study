
#include <iostream>
#include <string>
using namespace std;
#include "courses.h"
#include <vector>
#include <fstream>

#ifndef GET_COURSE_OBJ_H_
#define GET_COURSE_OBJ_H_

vector <courses> vect_cou ;

vector <courses> get_obj_course()
{
	ifstream in ;
		in.open("courses.csv") ;

		courses s ;
		string line ;


		while(getline(in,line)){
			stringstream ss(line) ;
			string temp ;
			int no ;

			getline(ss,temp,',') ;
			int id = stoi(temp) ;
			s.setId(id) ;

			getline(ss,temp,',') ;
			s.setName(temp) ;

			getline(ss,temp,',') ;
			s.setFee(temp) ;

			getline(ss,temp,',') ;
			s.setSection(temp) ;


			vect_cou.push_back(s) ;
	//		cout<<vect_s.size()<<"\n";
		}
		return vect_cou ;
}







#endif /* GET_COURSE_OBJ_H_ */
