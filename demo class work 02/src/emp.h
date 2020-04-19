

#ifndef EMP_H_
#define EMP_H_

#include <map>
#include <string>
#include <vector>
using namespace std;
#include <iostream>

class emp
{
public :
	string emp_no,name,sal,dept_no ;
	void display()
	{
		cout<<emp_no<<","<<name<<","<<sal<<","<<dept_no<<endl ;
	}
};



#endif /* EMP_H_ */
