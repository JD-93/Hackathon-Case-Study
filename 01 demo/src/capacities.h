#include <iostream>
#include <string>
using namespace std;

#ifndef CAPACITIES_H_
#define CAPACITIES_H_

class capacities {
	string center_id, course_name, max_capacity,filled_capacity ;

public:
	capacities();
	~capacities();
	const string& getCenterId() const;
	void setCenterId(const string &centerId);
	const string& getCourseName() const;
	void setCourseName(const string &courseName);
	const string& getFilledCapacity() const;
	void setFilledCapacity(const string &filledCapacity);
	const string& getMaxCapacity() const;
	void setMaxCapacity(const string &maxCapacity);

	void display( ) ;
};

#endif /* CAPACITIES_H_ */
