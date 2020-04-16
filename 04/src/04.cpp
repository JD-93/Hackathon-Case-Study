
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include "menuoperation.h"
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
#include "customized_sortin_and_extra_algo_for_vector.h"

int main() {



	vector <students> stu = get_stu_obj() ;
	vector <course_eli> course = get_course_obj() ;
	vector<center> center = get_center_obj() ;
	vector <capacities> capacities = get_capacity_obj() ;
	vector<eligibility> eligiblities = get_eligibilty_obj() ;
	vector<preferences> pref = get_prefrences_obj() ;


	// sort stundet by A,B,C rank ;
//	sort(stu.begin(),stu.end(),sort_by_A) ;   // ---> soritng is working perfectly

	//==================================================================

	vector<students>::iterator STU = stu.begin() ;
	vector<preferences>::iterator PREF = pref.begin() ;
	vector<capacity_class>::iterator CAPACITY = capacities.begin() ;
	vector<course_eli>::iterator COURSES = course.begin() ;
	vector<eligibility>::iterator ELIGIBLE = eligiblities.begin() ;

	//=========================================================================

	// sort by ranking of A
//	sort(stu.begin(),stu.end(),sort_by_A) ;

	int choice,student_choice,admin_choice ;
	while ((choice=menuoperation())!= EXIT ){

		switch (choice) {
		case Student:
			while ((student_choice = student_menu())!= Exit) {
				switch (student_choice) {

				case register_new:
				{
					students object ;
					object.accept() ;
					cout<<"\n"<<endl ;
					object.display() ;
					stu.push_back(object) ;
					/* only added to stu vector not written on csv */
 				}
					break;

				case sign_in :
				{
					string username, password ;
					cout<<"Enter username : " ;
					cin>>username ;
					cout<<"Enter password : " ;
					cin>>password ;

					for (size_t i=0 ; i<stu.size() ; i++ ){
						if ((stu[i].getFormNo() == username)&&(stu[i].getName()==password)){
							cout<<endl ;
							cerr<<"\nYou are Logged in    :) "<<endl ;
						}
					}

				}

					break ;

				case list_courses :
				{
					cout<<"\n"<<endl ;
					for(size_t i=0 ; i<course.size(); i++ ){
						cout<<course[i].getCourseId()<<"\t"
								<<course[i].getCourseName() <<endl ;
					}
					cout<<"\n"<<endl ;
				}
					break ;

				case list_centers :
					break ;

				case give_preferences :
					break ;

				case see_allocation :
					break ;

				case payment :
					break ;

				default:
					cerr<<"Enter correct choice for student menu..."<<endl ;
					break;
				}
			}
			break;

		case Admin:
			break ;

		case Center_coordinator:
			break ;

		default:
			cerr<<"\n\nEnter valid choice...\n"<<endl ;
			break;
		}
	}

	cout<<"\n\n\nTHANKS FOR USING PROGRAM"<<endl ;
	cout<<"========================"<<endl ;
//	return 0;



}

