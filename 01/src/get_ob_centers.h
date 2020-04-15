#include <iostream>
#include <string>
using namespace std;
#include "Center.h"
#include <vector>
#include <fstream>

#ifndef GET_OB_CENTERS_H_
#define GET_OB_CENTERS_H_

vector <Center> vect_c ;

vector <Center> get_obj_centers()
{
	ifstream in ;
		in.open("") ;

		Center s ;
		string line ;


		while(getline(in,line)){
			stringstream ss(line) ;
			string temp ;
			int no ;

			getline(ss,temp,',') ;
			s.setId(temp) ;

			getline(ss,temp,',') ;
			s.setName(temp) ;

			getline(ss,temp,',') ;
			s.setAddress(temp) ;

			getline(ss,temp,',') ;
			s.setCoordinator(temp) ;

			getline(ss,temp,',') ;
			s.setPassword(temp) ;




			vect_c.push_back(s) ;
	//		cout<<vect_s.size()<<"\n";
		}
		return vect_c ;
}




#endif /* GET_OB_CENTERS_H_ */
