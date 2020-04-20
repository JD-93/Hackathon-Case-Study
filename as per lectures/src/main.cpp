
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


	vector<eligibility> eligibilities ;
	Add_Syst.load_eligibilities_csv(eligibilities) ;

	vector<capacity> capacities ;
	Add_Syst.load_capacities_csv(capacities) ;

	cout<<"size of capacities "<<capacities.size() <<endl ;
		for (size_t i=0 ; i<capacities.size() ; i++ ){
			capacities[i].display() ;
		}


	vector<course> courses ;
	Add_Syst.load_courses_csv(courses) ;

	cout<<"size of courses "<<courses.size() <<endl ;
	for (size_t i=0 ; i<courses.size() ; i++ ){
		courses[i].display() ;
	}

	vector <center> centers ;
	Add_Syst.load_centers_csv(centers) ;


	cout<<"size of centers "<<centers.size() <<endl ;
	for (size_t i=0 ; i<centers.size() ; i++ ){
		centers[i].display() ;
	}

	Add_Syst.link_capacity_center(courses,capacities,centers) ;
	cout<<"\n\n\nsize of centers "<<centers.size() <<endl ;
	for (size_t i=0 ; i<centers.size() ; i++ ){
		centers[i].display() ;
		centers[i].display_with_capacity_course() ;
	}


	Add_Syst.link_course_capacity(courses,capacities,centers) ;
	cout<<"\n\n\nsize of courses "<<courses.size() <<endl ;
	for (size_t i=0 ; i<centers.size() ; i++ ){
		courses[i].display() ;
		courses[i].display_with_capacity_course() ;
	}




	return 0 ;
}
