#include <iostream>
using namespace std;

#include <string>

#ifndef COURSES_H_
#define COURSES_H_

class courses {
	int id ;
	string name,fee,section ;
public:
	courses();
	~courses();

	const string& getFee() const;
	void setFee(const string &fee);
	int getId() const;
	void setId(int id);
	const string& getName() const;
	void setName(const string &name);
	const string& getSection() const;
	void setSection(const string &section);
};

#endif /* COURSES_H_ */
