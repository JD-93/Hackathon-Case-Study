
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
#include "customized_sortin_and_extra_algo_for_vector.h"
int main() {

	vector <students> stu = get_stu_obj() ;
	vector <course_eli> course  = get_course_obj() ;
	vector<center> center = get_center_obj() ;
	vector <capacities> capacities = get_capacity_obj() ;
	vector<eligibility> eligiblities = get_eligibilty_obj() ;
	vector<preferences> pref = get_prefrences_obj() ;

//==================================================================
	vector<students>::iterator STU = stu.begin() ;
	vector<preferences>::iterator PREF = pref.begin() ;
	vector<capacity_class>::iterator CAPACITY = capacities.begin() ;
	vector<course_eli>::iterator COURSES = course.begin() ;
	vector<eligibility>::iterator ELIGIBLE = eligiblities.begin() ;
//=========================================================================

	// sort by ranking of A
	sort(stu.begin(),stu.end(),sort_by_A) ;


	int counter =0 ;
	int cycle = 1 ;

		while ((STU != stu.end())&& STU->getAllocCentId()=="NA") {

			PREF = pref.begin() ;
			while(PREF != pref.end()){

				if (PREF->getPrefNo()==to_string(cycle)){
					if(STU->getFormNo()==PREF->getFormNo()){

						ELIGIBLE = eligiblities.begin() ;
						while(ELIGIBLE != eligiblities.end()){

							if (ELIGIBLE->getCourse()==PREF->getCourseName()){
								if (ELIGIBLE->getEligibilitys()==STU->getDegree()){


									COURSES = course.begin() ;
									while(COURSES != course.end()){
									if (COURSES->getCcatSection()=="A") {
										if (PREF->getCourseName()==COURSES->getCourseName()){

											CAPACITY = capacities.begin() ;
											while (CAPACITY != capacities.end()){

												if (PREF->getCenterId()==CAPACITY->getCenterId()){
													if (PREF->getCourseName()==CAPACITY->getCourseName()){

														if (CAPACITY->getFilledCapacity() != CAPACITY->getMaxCapacity()){

												STU->display() ;
												cout<<"selected course : "<<PREF->getCourseName()<<endl ;
												cout<<"selected pref : "<<PREF->getPrefNo()<<endl ;
												cout<<"studnt branch : "<<STU->getDegree()<<endl;
												cout<<"Eligible banch : "<<ELIGIBLE->getEligibilitys()<<endl ;
												cout<<"CCAT section : "<<COURSES->getCcatSection()<<endl ;
												cout<<"ceter id : "<<CAPACITY->getCenterId()<<endl;
												cout<<"course name : "<<CAPACITY->getCourseName() <<endl;
												cout<<"\n\n\n\n"<<endl;
												counter++ ;


												if (CAPACITY->getFilledCapacity()=="NA")
													CAPACITY->setFilledCapacity("0") ;


												CAPACITY->setFilledCapacity(to_string(1+stoi(CAPACITY->getFilledCapacity()))) ;

														}
													}
												}
												CAPACITY++ ;
											}

										}
									}
									COURSES++ ;
									}
								}
							}

						ELIGIBLE++ ;
						}

					}
				}
				PREF++ ;
			}
			STU++ ;
		}





















/*
only for student and prefrences table
	int counter =0 ;
	int cycle = 1 ;

	while ((STU != stu.end())&& STU->getAllocCentId()=="NA") {

		PREF = pref.begin() ;
		while(PREF != pref.end()){

			if (PREF->getPrefNo()==to_string(cycle)){
				if(STU->getFormNo()==PREF->getFormNo()){



					STU->display() ;
					cout<<"selected course : "<<PREF->getCourseName()<<"\n\n\n\n"<<endl ;
					counter++ ;


				}
			}
			PREF++ ;
		}
		STU++ ;
	}

*/






	for (size_t i= 0 ; i<capacities.size(); i++ ){
		if (capacities[i].getCourseName() == "PG-DGI")
		capacities[i].display() ;
	}
	/*
	for (size_t i=0 ; i<stu.size(); i++ ){
		stu[i].display() ;
	}

*/


cout<<"\n\n\ncount is "<<counter <<endl ;
	return 0 ;
}
