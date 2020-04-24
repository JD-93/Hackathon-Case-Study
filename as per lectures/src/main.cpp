
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

	sort(Add_Syst.students.begin(),Add_Syst.students.end(),Add_Syst.sort_by_A) ;
	for (size_t i=0 ; i<Add_Syst.students.size() ; i++ ){
		if (Add_Syst.students[i].rank_A != "-1" ){
			for (size_t j=0 ; j<Add_Syst.students[i].stu_pref.size() ; j++ ){
				if (Add_Syst.students[i].stu_pref[j].pref_no == to_string(cycle)){

					for (size_t k=0 ; k<Add_Syst.courses.size() ; k++ ){
						if (Add_Syst.courses[k].ccat_section == "A"){
							if (Add_Syst.courses[k].course_name == Add_Syst.students[i].stu_pref[j].course_name ){
								map<int,string>::iterator itr = Add_Syst.courses[k].course_map.begin() ;
								while(itr != Add_Syst.courses[k].course_map.end()) {
									if (itr->second == Add_Syst.students[i].stu_pref[j].center_id){
										if (Add_Syst.capacities[itr->first].filled_cap !=
												Add_Syst.capacities[itr->first].max_cap){

											Add_Syst.students[i].display_with_preferences() ;
											string  temp = Add_Syst.capacities[itr->first].filled_cap;
											if (temp == "NA")  temp = "0" ;
											int my_int = stoi(temp) ;
											my_int++ ;
											Add_Syst.capacities[itr->first].filled_cap = to_string(my_int) ;
										}
									}
									itr++ ;

								}
							}
						}
					}
				}
			}
		}
	}


	sort(Add_Syst.students.begin(),Add_Syst.students.end(),Add_Syst.sort_by_A) ;



	return 0 ;
}
