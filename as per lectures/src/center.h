

#ifndef CENTER_H_
#define CENTER_H_

#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <map>
#include "capacity.h"
extern vector<capacity> capacities ;

class center {
public :
	string ceter_id , ceter_name, cent_addr, coordinator,password ;
	map <string,string> center_map ;
			// key : course no
			// value : index of capacity
public:
	center();
	~center();

	void display(vector<capacity>&capacities) ;
};

#endif /* CENTER_H_ */
