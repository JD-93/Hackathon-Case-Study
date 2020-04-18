/*
 * course.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "course.h"
#include <cstring>
course::course() {
	// TODO Auto-generated constructor stub

}

const string& course::getCcatSection() const {
	return ccat_section;
}

void course::setCcatSection(const string &ccatSection) {
	ccat_section = ccatSection;
}

const string& course::getCourseId() const {
	return course_id;
}

void course::setCourseId(const string &courseId) {
	course_id = courseId;
}

const string& course::getCourseName() const {
	return course_name;
}

void course::setCourseName(const string &courseName) {
	course_name = courseName;
}

const string& course::getFee() const {
	return fee;
}

void course::setFee(const string &fee) {
	this->fee = fee;
}

course::~course() {
	// TODO Auto-generated destructor stub
}

void course::display() {
	cout<<"course no : "<<this->getCourseId()<<endl ;
	cout<<"course name : "<<this->getCourseName()<<endl ;
	cout<<"course fee : "<<this->getFee()<<endl ;
	cout<<"CCAT section : "<<this->getCcatSection()<<endl ;
	cout<<"\n"<<endl ;
}
