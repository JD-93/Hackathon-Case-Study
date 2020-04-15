/*
 * counterforseats.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "counterforseats.h"

int counter_for_seats::capacity = 0 ;
int counter_for_seats::filled = 0 ;
counter_for_seats::counter_for_seats() {
	// TODO Auto-generated constructor stub

}

const string& counter_for_seats::getCourse() const {
	return course;
}

void counter_for_seats::setCourse(const string &course) {
	this->course = course;
}

const string& counter_for_seats::getId() const {
	return id;
}

void counter_for_seats::setId(const string &id) {
	this->id = id;
}

counter_for_seats::~counter_for_seats() {
	// TODO Auto-generated destructor stub
}

