/*
#include <iostream>
using namespace std;
#include <string>
#include "students.h"
#include <fstream>
#include <sstream>


int main()
{
	ifstream in ;
	in.open("students.csv") ;

	students s ;
	string line ;

	while(getline(in,line)){
		stringstream ss(line) ;
		string form ;
		getline(ss,form,',') ;
		int no = stoi(form) ;
		string name ;
		getline(ss,name,',') ;
		cout<<no<<"\t"<<name<<endl ;
	}
	in.close() ;




}
*/
