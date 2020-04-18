/*
 * eligibility.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "eligibility.h"

eligibility::eligibility() {
	// TODO Auto-generated constructor stub

}

const string& eligibility::getCourse() const {
	return course;
}

void eligibility::setCourse(const string &course) {
	this->course = course;
}

eligibility::~eligibility() {
	// TODO Auto-generated destructor stub
}

void eligibility::display() {
	cout<<"course name : "<<this->getCourse()<<endl ;
	cout<<"eligible branch : "<<this->getEligibilitys()<<endl ;
	cout<<"\n"<<endl ;
}

const string& eligibility::getEligibilitys() const {
	return eligibilitys;
}

void eligibility::setEligibilitys(const string &eligibilitys) {
	this->eligibilitys = eligibilitys;
}

const string& eligibility::getMinMarks() const {
	return min_marks;
}

void eligibility::setMinMarks(const string &minMarks) {
	min_marks = minMarks;
}
