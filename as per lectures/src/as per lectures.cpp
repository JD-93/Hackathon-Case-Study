
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <fstream>
#include <sstream>
#include "student.h"
#include "preference.h"

void load_students_csv(vector<student>&students)
{
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
void load_preference_csv(vector<preference>&preferences)
{
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
void link_stu_pref(vector<student> &students, vector<preference>&preferences)
{
	for (size_t i=0 ; i<preferences.size() ; i++ ){
		for (size_t j=0 ; j<students.size() ; j++){
			if (students[j].form_no == preferences[i].form_no){
				students[j].stu_pref.push_back(preferences[i]) ;
			}
		}
	}
}
int main() {


	vector<student> students ;
	load_students_csv(students);
/*
	cout<<"size of students vector : "<<students.size()<<endl ;
	for (size_t i=0 ; i<students.size() ; i++ ){
		students[i].display() ;
	}
*/

	vector<preference> preferences ;
	load_preference_csv(preferences) ;
/*
	cout<<"size of preferences vector : "<<preferences.size()<<endl ;
	for (size_t i=0 ; i<preferences.size() ; i++ ){
		preferences[i].display() ;
	}
*/

	/* now separate function for linking all prefrence with student
	 * verified by individual roll_no
	 * after this student will have its all preferences in itself
	 */

	link_stu_pref(students,preferences) ;
	for (size_t i=0 ; i<students.size() ; i++ ){
		students[i].display() ;
	}



	return 0;
}
/*for (size_t j=0 ; j<students.size() ; j++ ) {
				if (students[j].form_no == p.form_no ){
					students[j].stu_pref.push_back(p) ;
				}
			}*/
