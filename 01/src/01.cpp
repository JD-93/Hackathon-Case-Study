
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
#include "hard_work_2.h"

#include "round_1_csv_creator.h"
#include "round_2_csv_creator.h"
#include "final_csv_creator.h"
int main()
{
	int choice ;
	while((choice=menu_choice())!= EXIT){
/* you have login as each member as login is start point of flow of case  */
		switch (choice) {
			case Student:
			{
				cout<<"New user  OR  Existing user   (N/E) " ;
				char ch ;
				cin>>ch ;
				if ((ch=='N')||(ch=='n')){

					students obj ;
					obj.accept() ;
					//obj.display() ;
					stu.push_back(obj) ;
				}
				else
				{
					cout<<"Log in as student : \n" ;
					string formno,name ;
					cout<<"\n form no : ";
					cin>>formno ;
					cout<<"name : " ;
					cin>>name ;
					for(size_t i=0 ; i<stu.size() ; i++ ){
						if ((stu[i].getFormNo()==formno)&&(stu[i].getName()==name)){

							while((choice = student_menu())!= Exit3){
								switch (choice) {
								case list_courses_as_per_eligi:
								{
									for (size_t j=0 ; j<eligiblities.size();j++ ){
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

								case allocated_center_course :
								{
									cout<<"allocated center : "<<stu[i].getAllocCentId()<<"\t\t"
											<<"allocated course : "<<stu[i].getAllocCourse()<<endl ;
								}
								break;

								case payment :
								{
									cout<<"allocated center : "<<stu[i].getAllocCentId()<<"\t\t"
											<<"allocated course : "<<stu[i].getAllocCourse()<<endl ;
									if (stu[i].getAllocCentId() == "NA")
									{
										cout<<"No course alloted" ;
									}
									else
									{
										cout<<"proceed for payment of rs 11800 is updated \n\n\n";
										stu[i].setPayment("11800") ;
									}
								}
								break ;

								case give_pref :
								{
									preferences p ;
									p.accept() ;
									p.display() ;

									for (size_t z=0 ; z < eligiblities.size(); z++ ){
										if (p.getCourseName()==eligiblities[z].getCourse()){
											if (eligiblities[z].getEligibilitys()==stu[i].getDegree()){
												cout<<"OK" ;
												pref.push_back(p) ;
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
							/* create round 1 student csv file */
							round_1_csv_students() ;
							/* create round 1 capacity csv file */
							round_1_csv_capacity();
							break;

						case allocate_round_2 :
							second_round() ;
							/* create round 2 student csv file */
							round_2_csv_students() ;
							/* create round 2 capacity csv file */
							round_2_csv_capacity();
							break ;

						case list_allocated_stu :
						{
							for (size_t i=0 ; i<stu.size() ; i++ ){
								if (stu[i].getAllocCentId() != "NA"){
									if (stu[i].getPayment() != "NOT PAID IN 1st ROUND"){


									cout<<stu[i].getFormNo()<<"\t"
									<<stu[i].getName()<<"\t"
									<<stu[i].getAllocCentId()<<"\t"
									<<stu[i].getAllocCourse()<<endl ;
									}
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

						case list_of_paid_std :
						{
							for (size_t i=0 ; i<stu.size() ; i++ ){
								if (stu[i].getPayment()=="11800")
									stu[i].display() ;
							}
						}
						break ;



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

						case list_reported :
						{
							for (size_t y=0 ; y<stu.size() ; y++ ){
								if (stu[y].getReportCenter() == "REPORTED"){
									cout<<stu[y].getName()<<"\t\t"
											<<stu[y].getAllocCentId()<<"\t\t"
											<<stu[y].getAllocCourse()<<"\t\t"
											<<stu[y].getReportCenter()<<endl ;
								}
							}
						}
						break ;

						case generate_PRN :
						{
							for (size_t m=0 ; m<stu.size() ; m++ ){
								if (stu[m].getReportCenter() == "REPORTED"){
									if (stu[m].getPayment()!= "NOT PAID IN 1st ROUND"){
									int temp = rand() ;
									stu[m].setPrn(to_string(temp)) ;
									}
								}
							}
							cout<<"\nPRN generated sucessfully\n"<<endl ;
						}
						break ;

						case lis_all_PRN :
						{
							for (size_t n=0 ; n<stu.size() ; n++ ){
								if (stu[n].getPrn() != "NA"){
									if (stu[n].getPrn() != "NULL"){
									cout<<stu[n].getFormNo()<<"\t\t"
											<<stu[n].getName()<<"\t\t"
											<<stu[n].getPrn()<<endl ;
									}
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
				cout<<"coordinator name : " ;
				char degrees[20] ;
				scanf(" %[^\n]s",&degrees);
				string username1(degrees) ;


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
												if (stu[j].getPayment()!= "NOT PAID IN 1st ROUND"){
												cout<<stu[j].getFormNo() <<"\t\t"
														<<stu[j].getName()<<"\t\t"
														<<stu[j].getAllocCourse()<<"\t\t"
														<<stu[j].getAllocCentId()<<endl ;
												}
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

									case report_status :
									{
										for (size_t x=0 ; x<stu.size(); x++) {
											if (stu[x].getAllocCentId()==center[i].getCenterId()){
												if (stu[x].getReportCenter() != "NOT REPORTED"){
												stu[x].setReportCenter("REPORTED") ;
												}
											}
										}
									}
									break ;

									case list_PRN :
									{
										for (size_t q=0 ; q<stu.size(); q++) {
											if (stu[q].getAllocCentId()==center[i].getCenterId()){
												if (stu[q].getPayment()!= "NOT PAID IN 1st ROUND"){
												cout<<stu[q].getFormNo()<<"\t\t"
														<<stu[q].getName()<<"\t\t"
														<<stu[q].getPrn()<<endl ;
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


				break ;


			default:
				break;
		}
	}
		/* create final csv file for students nad capacities */
		final_csv_students() ;
		final_csv_capacity() ;

	cout<<"\n\n\n\nTHANKS FOR USING PROGRAM"<<endl ;
	cout<<"========================="<<endl ;
	return 0 ;         //---> never forget :)

}
