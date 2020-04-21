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
#include <algorithm>
#include <fstream>
#include <sstream>

#include "student.h"
#include "preference.h"
#include "course.h"
#include "eligibility.h"
#include "capacity.h"
#include "center.h"
#include  "degree.h"

class Admission_System {

public:
	Admission_System();
	~Admission_System();


public : // creating vector of classes to store data from csv
	// classes are declared seperately
	vector<student> students ;
	vector<preference> preferences ;
	vector<eligibility> eligibilities ;
	vector<capacity> capacities ;
	vector <center> centers ;
	vector<degree>degrees ;
	vector<course> courses ;
	//-------------------------------------------------------------------------------------------------

public: // loading and linking data from csv files

	void load_students_csv(vector<student>&students) ;
	void load_preference_csv(vector<preference>&preferences) ;
	void link_stu_pref(vector<student> &students, vector<preference>&preferences) ;

	void load_courses_csv(vector<course> &courses) ;
	void load_eligibilities_csv(vector<eligibility> &eligibilities) ;
	void load_capacities_csv(vector<capacity> &capacities) ;
	void load_centers_csv(vector <center> &centers) ;


	/*
	 *  map<capacity,course> center_map ;
	 *  map<int,string> center_map ;
	 *  key : capacity index
	 *  value : course_id
	 */
	//    center -- capacity -- center
	// link center and capacity
	void link_capacity_center(vector<course>&courses,vector<capacity>&capaciies,
			vector<center>&centers) ;

	/*
	 *  map<capacity,center> course_map ;
	 *  map<int,string> course_map ;
	 *  key : capacity index
	 *  value : center_id
	 */
	//    center -- capacity -- center
	// link course and capacity
	void link_course_capacity(vector<course>&courses,vector<capacity>&capaciies,
			vector<center>&centers) ;

	void load_degree_csv(vector<degree> &degrees) ;
	//--------------------------------------------------------------------------------------------------------


	bool static sort_by_A (student a,student b)
	{
		int rank_a = stoi ( a.rank_A  );
		int rank_b = stoi ( b.rank_A ) ;
		return (rank_a < rank_b);
	}

	bool static sort_by_B (student a,student b)
	{

		int rank_a = stoi ( a.rank_B  );
		int rank_b = stoi ( b.rank_B ) ;
		return (rank_a < rank_b);
	}

	bool static sort_by_C (student a,student b)
	{

		int rank_a = stoi ( a.rank_C );
		int rank_b = stoi ( b.rank_C ) ;
		return (rank_a < rank_b);
	}
	/*
	 * 	sort(Add_Syst.students.begin(),Add_Syst.students.end(),Add_Syst.sort_by_A) ;
	 * 	sort(Add_Syst.students.begin(),Add_Syst.students.end(),Add_Syst.sort_by_B) ;
	 * 	sort(Add_Syst.students.begin(),Add_Syst.students.end(),Add_Syst.sort_by_C) ;
	 */
	//-------------------------------------------------------------
};

extern Admission_System Add_Syst ;


#endif /* ADMISSIONSYSTEM_H_ */
