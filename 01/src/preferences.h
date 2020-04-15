#include <string>
using namespace std;

#ifndef PREFERENCES_H_
#define PREFERENCES_H_

class preferences {
	int from_no, pref_no ;
	string course_name ;
	string course_id ;
public:
	preferences();
	~preferences();
	const string& getCourseName() const;
	void setCourseName(const string &courseName);
	int getFromNo() const;
	void setFromNo(int fromNo);
	int getPrefNo() const;
	void setPrefNo(int prefNo);
	const string& getCourseId() const;
	void setCourseId(const string &courseId);
};

#endif /* PREFERENCES_H_ */
