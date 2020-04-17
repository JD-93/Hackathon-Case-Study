#include <iostream>
using namespace std;
#include <string>

#ifndef COURSE_H_
#define COURSE_H_

class course {
	string course_id, course_name, fee, ccat_section ;
public:
	course();
	~course();
	const string& getCcatSection() const;
	void setCcatSection(const string &ccatSection);
	const string& getCourseId() const;
	void setCourseId(const string &courseId);
	const string& getCourseName() const;
	void setCourseName(const string &courseName);
	const string& getFee() const;
	void setFee(const string &fee);

	void display() ;
};

#endif /* COURSE_H_ */
