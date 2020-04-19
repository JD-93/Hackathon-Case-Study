/*
 * AdmissionSystem.h
 *
 *  Created on: 19-Apr-2020
 *      Author: sunbeam
 */

#ifndef ADMISSIONSYSTEM_H_
#define ADMISSIONSYSTEM_H_

#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <fstream>
#include <sstream>

#include "student.h"
#include "preference.h"
#include "course.h"
#include "eligibility.h"
#include "capacity.h"
#include "center.h"

class Admission_System {

public:
	Admission_System();
	~Admission_System();

	void load_students_csv(vector<student>&students) ;
	void load_preference_csv(vector<preference>&preferences) ;
	void link_stu_pref(vector<student> &students, vector<preference>&preferences) ;

	void load_courses_csv(vector<course> &courses) ;
	void load_eligibilities_csv(vector<eligibility> &eligibilities) ;
	void load_capacities_csv(vector<capacity> &capacities) ;
	void load_centers_csv(vector <center> &centers) ;


	/* linking of center and capacity
	 * map <string,string> center_map ;
			// key : course no
			// value : index of capacity    */
	void link_course_capacity_center(vector<center>&centers,vector<capacity>&capacities,
			 vector<course>&courses) ;

};

extern Admission_System Add_Syst ;


#endif /* ADMISSIONSYSTEM_H_ */
