/*
 * preference.h
 *
 *  Created on: 19-Apr-2020
 *      Author: sunbeam
 */

#ifndef PREFERENCE_H_
#define PREFERENCE_H_

#include <iostream>
#include <string>
using namespace std;

class preference {
public :
	string form_no, pref_no, course_name, center_id ;
public:
	preference();
	~preference();

	void display() ;
};

#endif /* PREFERENCE_H_ */
