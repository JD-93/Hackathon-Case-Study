/*
 * center.cpp
 *
 *  Created on: 19-Apr-2020
 *      Author: sunbeam
 */

#include "center.h"
#include <algorithm>

center::center() {
	// TODO Auto-generated constructor stub

}

center::~center() {
	// TODO Auto-generated destructor stub
}

void center::display() {
	cout<<ceter_id <<","<< ceter_name<<","<< cent_addr<<","<< coordinator<<","<<password<<endl  ;
}

void center::display_with_capacity_course() {
	map<int,string> :: iterator itr = center_map.begin() ;

	while(itr != center_map.end()){
		cout<<"\t" ;
		cout<<itr->first<<"\t" ;
		cout<<itr->second ;
		cout<<endl ;
		itr++ ;
	}
}
