/*
 * courses.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "courses.h"
#include <cstring>
courses::courses() {
	memset(this,NULL,sizeof(courses)) ;
	// TODO Auto-generated constructor stub

}

const string& courses::getFee() const {
	return fee;
}

void courses::setFee(const string &fee) {
	this->fee = fee;
}

int courses::getId() const {
	return id;
}

void courses::setId(int id) {
	this->id = id;
}

const string& courses::getName() const {
	return name;
}

void courses::setName(const string &name) {
	this->name = name;
}

const string& courses::getSection() const {
	return section;
}

void courses::setSection(const string &section) {
	this->section = section;
}

courses::~courses() {
	// TODO Auto-generated destructor stub
}

