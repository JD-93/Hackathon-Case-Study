
#include "AdmissionSystem.h"


int main() {


	vector<student> students ;
	Add_Syst.load_students_csv(students);

	vector<preference> preferences ;
	Add_Syst.load_preference_csv(preferences) ;

	/* now separate function for linking all preference with student
	 * verified by individual roll_no
	 * after this student will have its all preferences in itself
	 */

	Add_Syst.link_stu_pref(students,preferences) ;
/*
	for (size_t i=0 ; i<students.size() ; i++ ){
		students[i].display() ;
	}
*/

	vector<course> courses ;
	Add_Syst.load_courses_csv(courses) ;
	cout<<"size of courses "<<courses.size() <<endl ;
		for (size_t i=0 ; i<courses.size() ; i++ ){
			courses[i].display() ;
		}


	vector<eligibility> eligibilities ;
	Add_Syst.load_eligibilities_csv(eligibilities) ;
	/*cout<<"size of eligibilities "<<eligibilities.size() <<endl ;
		for (size_t i=0 ; i<eligibilities.size() ; i++ ){
			eligibilities[i].display() ;
		}*/

	vector<capacity> capacities ;
	Add_Syst.load_capacities_csv(capacities) ;
	cout<<"size of capacities "<<capacities.size() <<endl ;
		for (size_t i=0 ; i<capacities.size() ; i++ ){
			capacities[i].display() ;
		}

	vector <center> centers ;
	Add_Syst.load_centers_csv(centers) ;
	cout<<"size of centers "<<centers.size() <<endl ;
	for (size_t i=0 ; i<centers.size() ; i++ ){
		centers[i].display() ;
	}






	return 0 ;
}
