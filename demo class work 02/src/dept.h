/*
 * dept.h
 *
 *  Created on: 18-Apr-2020
 *      Author: sunbeam
 */

#ifndef DEPT_H_
#define DEPT_H_


#include <map>
#include <string>
#include <vector>
using namespace std;
#include <iostream>
#include "emp.h"

class dept
{
public:
	string dept_no,dept_name,city ;
	vector <emp> emps ;
	void display()
	{
		cout<<dept_no<<","<<dept_name<<","<<city<<endl ;
		for (size_t i=0 ; i<emps.size() ; i++ ){
			cout<<"\t-" ;
			emps[i].display() ;
		}
	}
};

#endif /* DEPT_H_ */






/*


for (size_t k=0 ; k<Add_Syst.courses.size() ; k++ ){
					if (Add_Syst.courses[k].ccat_section == "A"){
						if (Add_Syst.courses[k].course_name == Add_Syst.students[i].stu_pref[j].course_name ){
							map<int,string>::iterator itr = Add_Syst.courses[k].course_map.begin() ;
							while(itr != Add_Syst.courses[k].course_map.end()) {
								if (itr->second == Add_Syst.students[i].stu_pref[j].center_id){
									if (Add_Syst.capacities[itr->first].filled_cap !=
											Add_Syst.capacities[itr->first].max_cap){

										Add_Syst.students[i].display_with_preferences() ;

											 just to increment counter of capacity pf cente
										string  temp = Add_Syst.capacities[itr->first].filled_cap;
										if (temp == "NA")  temp = "0" ;
										int my_int = stoi(temp) ;
										my_int++ ;
										Add_Syst.capacities[itr->first].filled_cap = to_string(my_int) ;









*/















