
#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include "menuoperation.h"

int main() {

	int choice ;

	while ((choice=menuoperation())!= EXIT ){

		switch (choice) {
			case FIRST:
				break;

			case SECOND:
				break ;

			case THIRD:
				break ;

			case FOURTH:
				break ;

			case FIFTH:
				break ;

			case SIXTH :
				break ;

			case SEVENTH:
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
