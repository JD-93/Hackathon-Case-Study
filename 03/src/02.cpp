
#include <iostream>
#include <stdio.h>
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
#include "menu_operation.h"

vector <students> stu = get_stu_obj() ;
vector <course_eli> course  = get_course_obj() ;
vector<center> center = get_center_obj() ;
vector <capacities> capacities = get_capacity_obj() ;
vector<eligibility> eligiblities = get_eligibilty_obj() ;
vector<preferences> pref = get_prefrences_obj() ;
#include "hard_work.h"

int main()
{
	int choice ;
	while((choice=menu_choice())!= EXIT){
/* you have login as each member as login is start point of flow of case  */
		switch (choice) {
			case Student:
			{
				cout<<"Log in as student : \n" ;
				string formno,name ;
				cout<<"\nform no : ";
				cin>>formno ;
				cout<<"name : " ;
				cin>>name ;
				for(size_t i=0 ; i<stu.size() ; i++ ){
					if ((stu[i].getFormNo()==formno)&&(stu[i].getName()==name)){

						while((choice = student_menu())!= Exit3){
							switch (choice) {
								case list_courses_as_per_eligi:
								{
									for (int j=0 ; j<eligiblities.size();j++ ){
										if (eligiblities[j].getEligibilitys()==stu[i].getDegree()){
											cout<<eligiblities[j].getCourse() <<endl ;
										}
									}
								}
									break;

								case list_center_addr:
								{
									for (size_t k=0 ; k<eligiblities.size();k++ ){
										if (eligiblities[k].getEligibilitys()==stu[i].getDegree()){
											for (size_t l=0 ; l<capacities.size(); l++ ){
												if (capacities[l].getCourseName()==eligiblities[k].getCourse()){

													cout<<eligiblities[k].getCourse()<<"\t\t"<<capacities[l].getCenterId() <<endl ;
												}

											}



										}
									}

								}
								break ;

								default:
									break;
							}



						}


					}
				}
			}
				break;

			case Admin :
			{	cout<<"Log in as Admin : \n" ;
				string username, password ;
				cout<<"\nusername : ";
				cin>>username ;
				cout<<"password : " ;
				cin>>password ;
				if ((username == "admin")&&(password == "admin")){
					cout<<"Log in access granted : "<<endl ;
				while((choice=admin_menu())!= Exit1){
					switch (choice) {
						case allocate_round_1:
							first_round() ;
							break;

						case list_allocated_stu :
						{
							for (size_t i=0 ; i<stu.size() ; i++ ){
								if (stu[i].getAllocCentId() != "NA"){
									cout<<stu[i].getFormNo()<<"\t"
									<<stu[i].getName()<<"\t"
									<<stu[i].getAllocCentId()<<"\t"
									<<stu[i].getAllocCourse()<<endl ;
								}
							}
						}
							break ;

						case list_all_stu :
						{
							for (size_t i=0 ; i<stu.size() ; i++ ){
									cout<<stu[i].getFormNo()<<"\t"
											<<stu[i].getName()<<endl ;
							}
						}
							break ;

						case list_course_eligibility :
						{
							for (size_t i=0 ; i<eligiblities.size() ; i++ ){
								cout<<eligiblities[i].getCourse()<<"\t\t"
										<<eligiblities[i].getEligibilitys()<<endl ;
							}
						}
						break ;

						case list_center_capacity:
						{
							for (size_t i=0 ; i<capacities.size() ; i++ ){
								cout<<capacities[i].getCenterId()<<"\t\t"
										<<capacities[i].getCourseName()<<"\t\t"
										<<capacities[i].getMaxCapacity()<<endl ;
							}
						}
						break ;

						default:
							break;

						case update_rank :
						{
							cout<<"Enter form no : " ;
							string frm_no ;
							cin>>frm_no ;
							for (size_t i=0 ; i<stu.size() ; i++ ){
								if (stu[i].getFormNo()==frm_no){
									stu[i].display() ;
									string rankA, rankB, rankC ;
									cout<<"Enter rank A to change : " ;
									cin>>rankA ;
									cout<<"Enter rank B to change : " ;
									cin>>rankB ;
									cout<<"Enter rank A to change : " ;
									cin>>rankB ;
									stu[i].setRankA(rankA) ;
									stu[i].setRankB(rankB) ;
									stu[i].setRankC(rankC) ;
									stu[i].display() ;
								}
							}
						}
						break ;
					}
				}

			}else
				cout<<"Invalid ID password"<<endl ;
			}

				break ;

			case Center_coordinator :
			{	cout<<"Log in as center coordinator : \n" ;
				string username1,fname,lname ;
				cout<<"first name : " ;
				cin>>fname ;
				cout<<"last name :" ;
				cin>>lname ;
				username1=fname+" "+lname ;
				string password1 ;
				cout<<"password : " ;
				cin>>password1 ;
				for (size_t i=0 ; i<center.size() ; i++ ){
					if ((username1==center[i].getCoordinator())&&(password1==center[i].getPassword())){
							while((choice=center_cordinator_menu())!= Exit2){
								switch (choice) {
									case list_student:
									{
										for (size_t j=0 ; j<stu.size() ; j++ ){
											if (stu[j].getAllocCentId()==center[i].getCenterId()){
												cout<<stu[j].getFormNo() <<"\t\t"
														<<stu[j].getName()<<"\t\t"
														<<stu[j].getAllocCourse()<<"\t\t"
														<<stu[j].getAllocCentId()<<endl ;
											}
										}
									}
										break;

									case list_course :
									{
										for (size_t k=0 ; k<capacities.size(); k++ ){
											if (capacities[k].getCenterId() == center[i].getCenterId()){
												cout<<capacities[k].getCourseName()<<endl ;

											}
										}
									}
									break ;
									default:
										break;
								}
							}
							}
					}
				}


				break ;


			default:
				break;
		}
	}




}
