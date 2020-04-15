#include <iostream>
using namespace std;
#include <string>

#ifndef COUNTERFORSEATS_H_
#define COUNTERFORSEATS_H_

class counter_for_seats {
	string id,course ;
public:
	static int capacity ;
	static int filled ;
public:
	counter_for_seats();
	~counter_for_seats();
	const string& getCourse() const;
	void setCourse(const string &course);
	const string& getId() const;
	void setId(const string &id);
};
#endif /* COUNTERFORSEATS_H_ */
