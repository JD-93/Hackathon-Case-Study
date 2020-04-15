#include <iostream>
#include <string>
using namespace std;
#include "students.h"
#include <vector>
#include <fstream>

#ifndef GET_STUDENT_OBJECTS_H_
#define GET_STUDENT_OBJECTS_H_
vector <students> vect_s ;

vector <students>  get_obj()
{

	ifstream in ;
	in.open("students.csv") ;

	students s ;
	string line ;


	while(getline(in,line)){
		stringstream ss(line) ;
		string temp ;
		int no ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.setFormNo(no) ;

		getline(ss,temp,',') ;
		s.setName(temp) ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.setRankA(no) ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.setRankB(no) ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.setRankC(no) ;

		getline(ss,temp,',') ;
		s.setDegree(temp) ;

		getline(ss,temp,',') ;
		float no1 = stof(temp) ;
		s.setPercentage(no1) ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.setAllocPref(0) ;


		getline(ss,temp,',') ;
		s.setAllocCourse(temp) ;

		getline(ss,temp,',') ;
		s.setAllocCentId(0) ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.setPayment(no) ;

		getline(ss,temp,',') ;
		no = stoi(temp) ;
		s.setIsReported(no) ;

		getline(ss,temp,',') ;
		s.setPrn(temp) ;


		vect_s.push_back(s) ;
//		cout<<vect_s.size()<<"\n";
	}
	return vect_s ;
}



#endif /* GET_STUDENT_OBJECTS_H_ */
