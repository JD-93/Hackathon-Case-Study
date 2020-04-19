

#ifndef CENTER_H_
#define CENTER_H_

#include <iostream>
#include <string>
using namespace std;

#include <map>

class center {
public :
	string ceter_id , ceter_name, cent_addr, coordinator,password ;
	map <string,string> center_map ;
			// key : course nos
			// value : index of capacity
public:
	center();
	~center();

	void display() ;
};

#endif /* CENTER_H_ */
