/*
 * student.cpp
 *
 *  Created on: 19-Apr-2020
 *      Author: sunbeam
 */

#include "student.h"

student::student() {
	// TODO Auto-generated constructor stub

}

student::~student() {
	// TODO Auto-generated destructor stub
}

void student::display() {
	cout<<form_no<<","<<name<<","<<rank_A<<","<<rank_B<<","<<rank_C<<","
			<<degree<<","<<percentage<<","<<alloc_pref<<","<<alloc_course<<","
			<<alloc_cent_id<<","<<payment<<","<<report_center<<","<<prn<<endl ;

	}


void student::display_with_preferences() {
	cout<<form_no<<","<<name<<","<<rank_A<<","<<rank_B<<","<<rank_C<<","
			<<degree<<","<<percentage<<","<<alloc_pref<<","<<alloc_course<<","
			<<alloc_cent_id<<","<<payment<<","<<report_center<<","<<prn<<endl ;

	for (size_t i=0 ; i<stu_pref.size(); i++ ){
		cout<<"\t" ;
		stu_pref[i].display() ;

	}
}
