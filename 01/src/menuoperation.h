#include <iostream>
using namespace std;

#ifndef MENUOPERATION_H_
#define MENUOPERATION_H_

typedef enum operation
{EXIT,FIRST,SECOND,THIRD,FOURTH,FIFTH,SIXTH,SEVENTH}MENUOPERATIONS;

int menuoperation()
{
	int choice ;
	cout<<endl ;
	cout<<"0. EXIT" <<endl ;
	cout<<"1. FIRST" <<endl ;
	cout<<"2. SECOND" <<endl ;
	cout<<"3. THIRD" <<endl ;
	cout<<"4. FOURTH" <<endl ;
	cout<<"5. FIFTH" <<endl ;
	cout<<"6. SIXTH" <<endl ;
	cout<<"7. SEVENTH" <<endl ;
	cout<<"Enter choice "  ;
	cin>>choice ;
	return choice ;
}



#endif /* MENUOPERATION_H_ */
