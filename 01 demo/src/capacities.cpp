/*
 * capacities.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "capacities.h"

capacities::capacities() {
	// TODO Auto-generated constructor stub

}

const string& capacities::getCenterId() const {
	return center_id;
}

void capacities::setCenterId(const string &centerId) {
	center_id = centerId;
}

const string& capacities::getCourseName() const {
	return course_name;
}

void capacities::setCourseName(const string &courseName) {
	course_name = courseName;
}

const string& capacities::getFilledCapacity() const {
	return filled_capacity;
}

void capacities::setFilledCapacity(const string &filledCapacity) {
	filled_capacity = filledCapacity;
}

const string& capacities::getMaxCapacity() const {
	return max_capacity;
}

void capacities::setMaxCapacity(const string &maxCapacity) {
	max_capacity = maxCapacity;
}

capacities::~capacities() {
	// TODO Auto-generated destructor stub
}

void capacities::display() {
	cout<<"center id : " <<this->getCenterId()<<endl ;
	cout<<"course name : " <<this->getCourseName()<<endl ;
	cout<<"max capacity : " <<this->getMaxCapacity()<<endl ;
	cout<<"filled capacity : " <<this->getFilledCapacity()<<endl ;
	cout<<"\n"<<endl ;
}
