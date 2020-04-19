
#include "AdmissionSystem.h"

Admission_System Add_Syst ;

Admission_System::Admission_System() {
	// TODO Auto-generated constructor stub

}

Admission_System::~Admission_System() {
	// TODO Auto-generated destructor stub
}

void Admission_System::load_students_csv(vector<student> &students) {
	ifstream in ;
	in.open("students.csv") ;

	student s ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		s.form_no = temp ;

		getline(ss,temp,',') ;
		s.name= temp ;

		getline(ss,temp,',') ;
		s.rank_A= temp ;

		getline(ss,temp,',') ;
		s.rank_B= temp ;

		getline(ss,temp,',') ;
		s.rank_C= temp ;

		getline(ss,temp,',') ;
		s.degree= temp ;

		getline(ss,temp,',') ;
		s.percentage= temp ;

		getline(ss,temp,',') ;
		s.alloc_pref= "NA" ;

		getline(ss,temp,',') ;
		s.alloc_course= "NA" ;

		getline(ss,temp,',') ;
		s.alloc_cent_id= "NA" ;

		getline(ss,temp,',') ;
		s.payment= "NA" ;

		getline(ss,temp,',') ;
		s.report_center= "NA" ;

		getline(ss,temp,',') ;
		s.prn= "NA" ;

		students.push_back(s) ;
	}
}

void Admission_System::load_preference_csv(vector<preference> &preferences) {
	ifstream in ;
	in.open("preferences.csv") ;

	preference p ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		p.form_no = temp ;

		getline(ss,temp,',') ;
		p.pref_no= temp ;

		getline(ss,temp,',') ;
		p.course_name= temp ;

		getline(ss,temp,',') ;
		p.center_id= temp ;


		preferences.push_back(p) ;

	}
}

void Admission_System::link_stu_pref(vector<student> &students,vector<preference> &preferences) {
	for (size_t i=0 ; i<preferences.size() ; i++ ){
		for (size_t j=0 ; j<students.size() ; j++){
			if (students[j].form_no == preferences[i].form_no){
				students[j].stu_pref.push_back(preferences[i]) ;
			}
		}
	}
}

void Admission_System::load_courses_csv(vector<course> &courses) {
	ifstream in ;
	in.open("courses.csv") ;

	course c ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;

		string temp ;


		getline(ss,temp,',') ;
		c.course_id = temp ;

		getline(ss,temp,',') ;
		c.course_name = temp ;

		getline(ss,temp,',') ;
		c.fee = temp ;

		getline(ss,temp,',') ;
		c.ccat_section = temp ;

		courses.push_back(c) ;
	}

}

void Admission_System::load_eligibilities_csv(vector<eligibility> &eligibilities) {
	ifstream in ;
	in.open("eligibilities.csv") ;

	eligibility e ;
	string line ;

	while(getline(in,line)) {
		stringstream ss(line) ;


		string temp ;
		getline(ss,temp,',') ;
		e.course = temp ;

		getline(ss,temp,',') ;
		e.eligible_branch = temp ;

		getline(ss,temp,',') ;
		e.min_marks = temp ;

		eligibilities.push_back(e) ;
	}
}

void Admission_System::load_capacities_csv(vector<capacity> &capacities) {
	ifstream in ;
	in.open("capacities.csv") ;

	capacity c ;
	string line ;
	while(getline(in,line)){
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		c.cent_id = temp ;

		getline(ss,temp,',') ;
		c.course_name = temp ;

		getline(ss,temp,',') ;
		c.max_cap = temp ;

		getline(ss,temp,',') ;
		c.filled_cap = temp ;

		capacities.push_back(c) ;
	}
}

void Admission_System::load_centers_csv(vector<center> &centers) {
	ifstream in ;
	in.open("centers.csv") ;

	center c ;
	string line ;
	while(getline(in,line)){
		stringstream ss(line) ;

		string temp ;

		getline(ss,temp,',') ;
		c.ceter_id = temp ;

		getline(ss,temp,',') ;
		c.ceter_name = temp ;

		getline(ss,temp,',') ;
		c.cent_addr = temp ;

		getline(ss,temp,',') ;
		c.coordinator = temp ;

		getline(ss,temp,',') ;
		c.password = temp ;

		centers.push_back(c) ;
	}
}
