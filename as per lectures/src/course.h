
#ifndef COURSE_H_
#define COURSE_H_

#include <iostream>
#include <string>
using namespace std;


class course {
public :
	string course_id, course_name, fee, ccat_section ;
public:
	course();
	~course();

	void display() ;
};

#endif /* COURSE_H_ */
