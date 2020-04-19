/*
 * center.cpp
 *
 *  Created on: 19-Apr-2020
 *      Author: sunbeam
 */

#include "center.h"
#include <algorithm>

center::center() {
	// TODO Auto-generated constructor stub

}

center::~center() {
	// TODO Auto-generated destructor stub
}

/* linking of center and capacity
	 * map <string,string> center_map ;
			// key : course no
			// value : index of capacity    */
void center::display(vector<capacity>&capacities) {
	cout<<ceter_id <<","<< ceter_name<<","<< cent_addr<<","<< coordinator<<","<<password<<endl  ;

	map<string,string> ::iterator itr = this->center_map.begin() ;
	while(itr != center_map.end()){

		cout<<"\t"<<itr->first<<"   " ;
		capacities[stoi(itr->second) ].display() ;

		itr++ ;
	}

}
