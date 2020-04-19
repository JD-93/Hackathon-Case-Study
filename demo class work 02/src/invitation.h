/*
 * invitation.h
 *
 *  Created on: 18-Apr-2020
 *      Author: sunbeam
 */

#ifndef INVITATION_H_
#define INVITATION_H_

#include <map>
#include <string>
#include <vector>
using namespace std;
#include <iostream>
#include "emp.h"

class invitation
{
public :
	string emp_no , meeting_no ,status ;
	void display()
	{
		cout<<"\t"<<emp_no<<","<<meeting_no<<","<<status<<endl ;
	}
};

#endif /* INVITATION_H_ */
