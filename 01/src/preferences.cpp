/*
 * preferences.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "preferences.h"

preferences::preferences() {
	// TODO Auto-generated constructor stub

}

const string& preferences::getCourseName() const {
	return course_name;
}

void preferences::setCourseName(const string &courseName) {
	course_name = courseName;
}

int preferences::getFromNo() const {
	return from_no;
}

void preferences::setFromNo(int fromNo) {
	from_no = fromNo;
}

int preferences::getPrefNo() const {
	return pref_no;
}

const string& preferences::getCourseId() const {
	return course_id;
}

void preferences::setCourseId(const string &courseId) {
	course_id = courseId;
}

void preferences::setPrefNo(int prefNo) {
	pref_no = prefNo;
}

preferences::~preferences() {
	// TODO Auto-generated destructor stub
}

