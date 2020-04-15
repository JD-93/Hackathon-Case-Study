
#include <iostream>
using namespace std;
#include <string>
#include "menuoperation.h"
#include "students.h"
#include "Center.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
int main() {

	int choice,admin_choice ;
	vector <students> vect_student ;
	vector <Center> vect_center ;

		while ((choice=menuoperation())!= EXIT ){

		switch (choice) {
			case Student:
				break;

			case Admin:
				{
					admin_choice = admin_menu() ;
					switch (admin_choice) {
						case Exit:
							cout<<"Admin exited "<<endl ;
							break;

						case list_stu :
						{
							ifstream in ;
							in.open("students.csv") ;

							students s ;
							string line ;

							while(getline(in,line)){
								stringstream ss(line) ;
								string form ;
								getline(ss,form,',') ;
								int no = stoi(form) ;
								string name ;
								getline(ss,name,',') ;
								s.setFormNo(no) ;
								s.setName(name) ;
								cout<<no<<"\t"<<name<<endl ;
								vect_student.push_back(s) ;
							}
							in.close() ;						}
							break ;

						case list_course :
							{
								ifstream in ;
								in.open("eligibilities.csv") ;
								string line ;
								cout<<"   Course \t\t Eligibility"<<endl ;
								cout<<"======================================="<<endl ;

								while (getline(in,line)){
									stringstream ss(line) ;
									string temp ;
									getline(ss,temp,',') ;
									cout<<temp ;
									getline(ss,temp,',') ;
									cout<<"\t\t"<<temp <<endl ;
								}
								in.close() ;
							}
							break ;

						case center_cap :
						{
							ifstream in ;
							in.open("capacities.csv") ;
							string line ;
							cout<<"   center \t\t capacities"<<endl ;
							cout<<"======================================="<<endl ;

							while (getline(in,line)){
								stringstream ss(line) ;
								string temp ;
								getline(ss,temp,',') ;
								cout<<temp ;
								getline(ss,temp,',') ;
								cout<<temp ;
								getline(ss,temp,',') ;
								cout<<"\t\t"<<temp <<endl ;
							}
							in.close() ;

						}
						break ;

						default:
							cerr<<"\n\nEnter valid choice for admin menu ... "<<endl ;
							break;
					}
				}
				break ;

			case Center_coordinator:
				break ;

			default:
				cerr<<"\n\nEnter valid choice...\n"<<endl ;
				break;
		}
	}

		/*

		for (int i=0 ; i<vect_student.size() ; i++ ){
			cout<<vect_student[i].getName()<<"\t"<<vect_student[i].getFormNo()<<vect_student[i].getAllocCourse()<<endl ;
		}
*/


	cout<<"\n\n\nTHANKS FOR USING PROGRAM"<<endl ;
	cout<<"========================"<<endl ;
	return 0;
}

