
#include <iostream>
using namespace std;
#include <vector>
#include "students.h"
#include "get_student_object.h"
#include "course.h"
#include "get_course_object.h"
#include "center.h"
#include "get_center_object.h"
#include "capacities.h"
#include "get_capacities_obj.h"
#include "eligibility.h"
#include "get_eligibilyt_obj.h"
#include "preferences.h"
#include "get_preference_obj.h"
int main() {




	vector <students> stu = get_stu_obj() ;
	for (int i=0 ; i<stu.size(); i++ ){
		stu[i].display() ;
	}

/*
	vector <course> course  = get_course_obj() ;
	for (int i=0 ; i<course.size() ; i++ ){
		course[i].display() ;
	}

	vector<center> center = get_center_obj() ;
	for (int i=0 ; i<center.size() ; i++ ){
		center[i].display() ;
	}
*/
/*


	vector <capacities> capacities = get_capacity_obj() ;
	for (int i= 0 ; i<capacities.size(); i++ ){
		capacities[i].display() ;
	}

*/
/*

	vector<eligibility> eligiblities = get_eligibilty_obj() ;
	for (int i= 0 ; i<eligiblities.size(); i++ ){
		eligiblities[i].display() ;
	}
*/
/*
	vector<preferences> pref = get_prefrences_obj() ;
	for (int i= 0 ; i<pref.size() ;i++) {
		pref[i].display() ;
	}

*/
}
