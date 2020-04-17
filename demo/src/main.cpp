#include "menuoperation.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main() {


	int choice ;
	while ((choice=menuoperation())!= EXIT ){

		switch (choice) {
		case Student:
		{

		}
			break;

		case Admin:
			break ;

		case Center_coordinator:
			break ;

		default:
			cerr<<"\n\nEnter valid choice...\n"<<endl ;
			break;
		}
	}








	cout<<"\n\n\nTHANKS FOR USING PROGRAM"<<endl ;
	cout<<"========================"<<endl ;
	return 0;

}

