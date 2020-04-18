#include <iostream>
using namespace std;
#include <string>

#ifndef CENTER_H_
#define CENTER_H_

class center {
	string center_id, center_name, center_addr, coordinator, password ;
public:
	center();
	~center();
	const string& getCenterAddr() const;
	void setCenterAddr(const string &centerAddr);
	const string& getCenterId() const;
	void setCenterId(const string &centerId);
	const string& getCenterName() const;
	void setCenterName(const string &centerName);
	const string& getCoordinator() const;
	void setCoordinator(const string &coordinator);
	const string& getPassword() const;
	void setPassword(const string &password);

	void display() ;
};

#endif /* CENTER_H_ */
