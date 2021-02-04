
#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <sstream>

class Employee {
	public :
		string name ;
		int empid ;
		float salary ;
		void print() {
			cout << "Name	:	 " << this->name << endl ;
			cout << "Empid	:	 " << this->empid << endl ;
			cout << "Salary	:	 " << this->salary << endl ;

		}
};


int main() {
/*
	Employee emp ;
	emp.name = "Jaydeep" ;
	emp.empid = 101 ;
	emp.salary = 10000 ;

	// write in file

	ofstream out ;
	out.open("EmployeeList") ;
	out << emp.name << "," ;
	out << emp.empid << "," ;
	out << emp.salary << endl ;
	out.close() ;
*/

	ifstream in ;
	in.open("EmployeeList") ;

	Employee emp ;
	string line ;
	while (getline(in,line)){
		stringstream ss(line) ;
		string temp ;

		getline(ss,temp	,',') ;
		emp.name = temp ;

		getline(ss,temp,',') ;
		emp.empid = stoi(temp) ;

		getline(ss,temp,',') ;
		emp.salary = stof(temp) ;
	}

	emp.print() ;




	return 0;
}
