/*
 * student.h
 *
 *  Created on: 19-Apr-2020
 *      Author: sunbeam
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "preference.h"


class student
{
public :
	string form_no, name, rank_A, rank_B, rank_C ;
	string degree,percentage ;
	string alloc_pref, alloc_course,alloc_cent_id  ;
	string payment , report_center;
	string prn ;
	vector <preference> stu_pref ;
public:
	student();
	~student();
	void display() ;
};

#endif /* STUDENT_H_ */
