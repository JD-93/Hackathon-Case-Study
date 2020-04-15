#include <iostream>
#include <string>
using namespace std;


#ifndef CENTER_H_
#define CENTER_H_

class Center {
	string id,name,address,coordinator,password,courses;
public:
	Center();
	~Center();
	const string& getAddress() const;
	void setAddress(const string &address);
	const string& getCoordinator() const;
	void setCoordinator(const string &coordinator);
	const string& getCourses() const;
	void setCourses(const string &courses);
	const string& getId() const;
	void setId(const string &id);
	const string& getName() const;
	void setName(const string &name);
	const string& getPassword() const;
	void setPassword(const string &password);
};

#endif /* CENTER_H_ */
