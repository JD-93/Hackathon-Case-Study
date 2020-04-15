
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
#include "get_student_objects.h"
#include "get_ob_centers.h"
#include "courses.h"
#include "get_course_obj.h"

int main() {

	vector <students> vect_student ;
	vect_student = get_obj() ;

	struct less_than_key
	{
	    inline bool operator() (const students& struct1, const students& struct2)
	    {
	        return (struct1.getRankB() < struct2.getRankB());
	    }
	};
	sort(vect_student.begin(),vect_student.end(),less_than_key()) ;


	vector <Center> vect_center ;
	vect_center = get_obj_centers() ;

	vector <courses> vect_course ;
	vect_course = get_obj_course() ;

	int choice,admin_choice ;
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
							for (int i=0 ; i<vect_student.size(); i++ ){
								cout<<vect_student[i].getFormNo()<<"\t\t" ;
								cout<<vect_student[i].getName() <<"\t\t";
								cout<<vect_student[i].getRankB()<<endl ;
							}
						}
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

						case round_1 :
						{
							for (int i=0 ; i<vect_student.size(); i++ ){





							}
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
			vect_student[i].display() ;
		}
*/




	cout<<"\n\n\nTHANKS FOR USING PROGRAM"<<endl ;
	cout<<"========================"<<endl ;
	return 0;

}

