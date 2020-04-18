#include <iostream>
using namespace std;
#include <string>

#ifndef PREFERENCES_H_
#define PREFERENCES_H_

class preferences {
	string form_no, pref_no, course_name, center_id ;
public:
	preferences();
	~preferences();

	const string& getCenterId() const;
	void setCenterId(const string &centerId);
	const string& getCourseName() const;
	void setCourseName(const string &courseName);
	const string& getFormNo() const;
	void setFormNo(const string &formNo);
	const string& getPrefNo() const;
	void setPrefNo(const string &prefNo);

	void display() ;

};

#endif /* PREFERENCES_H_ */
