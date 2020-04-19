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
