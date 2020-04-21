
#include "AdmissionSystem.h"



int main() {

	Add_Syst.load_students_csv(Add_Syst.students);

	Add_Syst.load_preference_csv(Add_Syst.preferences) ;


	/* now separate function for linking all preference with student
	 * verified by individual roll_no
	 * after this student will have its all preferences in itself
	 */
	Add_Syst.link_stu_pref(Add_Syst.students,Add_Syst.preferences) ;

	Add_Syst.load_eligibilities_csv(Add_Syst.eligibilities) ;

	Add_Syst.load_capacities_csv(Add_Syst.capacities) ;

	Add_Syst.load_courses_csv(Add_Syst.courses) ;

	Add_Syst.load_centers_csv(Add_Syst.centers) ;

	Add_Syst.link_capacity_center(Add_Syst.courses,Add_Syst.capacities,Add_Syst.centers) ;

	Add_Syst.link_course_capacity(Add_Syst.courses,Add_Syst.capacities,Add_Syst.centers) ;

	Add_Syst.load_degree_csv(Add_Syst.degrees) ;


	int cycle = 1 ;
	while (cycle<6){

		sort(Add_Syst.students.begin(),Add_Syst.students.end(),Add_Syst.sort_by_A) ;
		for (size_t i=0 ; i<Add_Syst.students.size() ; i++){
			for (size_t j=0 ; j<Add_Syst.students[i].stu_pref.size() ; j++){
				if (Add_Syst.students[i].stu_pref[j].pref_no ==  to_string(cycle) ){

					for (size_t k=0 ; k<Add_Syst.courses.size(); k++ ){
						if (Add_Syst.courses[k].course_name == Add_Syst.students[i].stu_pref[j].course_name){
							if (Add_Syst.courses[k].ccat_section == "A"){

								map<int,string>::iterator itr = Add_Syst.courses[k].course_map.begin() ;
								while(itr != Add_Syst.courses[k].course_map.end()){
									if (Add_Syst.courses[k].course_map[itr->first] == Add_Syst.students[i].stu_pref[j].center_id){

										cout<<itr->first <<endl;
										cout<<Add_Syst.courses[k].course_map[itr->first]<<endl;
										Add_Syst.students[i].display_with_preferences() ;

										cout<<"filled capacity"<<Add_Syst.capacities[itr->first].filled_cap <<endl ;
										cout<<"filled capacity"<<Add_Syst.capacities[itr->first].max_cap <<endl ;

									}


									itr++ ;
								}


							}
						}
					}
				}
			}
		}

		cycle++ ;
	}








	return 0 ;
}
