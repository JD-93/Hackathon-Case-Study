#include <iostream>
using namespace std;
#include <string>

#ifndef STUDENTS_H_
#define STUDENTS_H_

class students {
	int form_no ;
	string name;
	int rank_a,rank_b,rank_c ;
	string degree ;
	float percentage ;
	int alloc_pref ;
	string alloc_course ;
	string alloc_cent_id ;
	int payment ;
	int is_reported ;
	string prn ;

public:
	students();
	~students();
	const string& getAllocCentId() const;
	void setAllocCentId(const string &allocCentId);
	const string& getAllocCourse() const;
	void setAllocCourse(const string &allocCourse);
	int getAllocPref() const;
	void setAllocPref(int allocPref);
	const string& getDegree() const;
	void setDegree(const string &degree);
	int getFormNo() const;
	void setFormNo(int formNo);
	int getIsReported() const;
	void setIsReported(int isReported);
	const string& getName() const;
	void setName(const string &name);
	int getPayment() const;
	void setPayment(int payment);
	float getPercentage() const;
	void setPercentage(float percentage);
	const string& getPrn() const;
	void setPrn(const string &prn);
	int getRankA() const;
	void setRankA(int rankA);
	int getRankB() const;
	void setRankB(int rankB);
	int getRankC() const;
	void setRankC(int rankC);

	void display() ;
};

#endif /* STUDENTS_H_ */
