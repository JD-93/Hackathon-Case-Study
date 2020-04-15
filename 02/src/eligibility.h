#include <iostream>
#include <string>
using namespace std;

#ifndef ELIGIBILITY_H_
#define ELIGIBILITY_H_

class eligibility {
	string course , eligibilitys, min_marks ;
public:
	eligibility();
	~eligibility();
	const string& getCourse() const;
	void setCourse(const string &course);
	const string& getEligibilitys() const;
	void setEligibilitys(const string &eligibilitys);
	const string& getMinMarks() const;
	void setMinMarks(const string &minMarks);

	void display() ;

};

#endif /* ELIGIBILITY_H_ */
