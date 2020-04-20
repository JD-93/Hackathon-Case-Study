/*
 * course.cpp
 *
 *  Created on: 19-Apr-2020
 *      Author: sunbeam
 */

#include "course.h"

course::course() {
	// TODO Auto-generated constructor stub

}

course::~course() {
	// TODO Auto-generated destructor stub
}

void course::display() {
	cout<<course_id<<","<<course_name<<","<< fee<<"," <<ccat_section<<endl;
}



/*
 *  map<capacity,center> course_map ;
 *  map<int,string> course_map ;
 *  key : capacity index
 *  value : center_id
 */
//    center -- capacity -- center
// link course and capacity
void course::display_with_capacity_course() {
	map<int,string> :: iterator itr =  course_map.begin() ;
	while(itr != course_map.end()){
		cout<<"\t" ;
		cout<<itr->first<<"\t" ;
		cout<<itr->second ;
		cout<<endl ;
		itr++ ;
	}
}
