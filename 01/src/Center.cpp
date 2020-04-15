/*
 * Center.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "Center.h"
#include <cstring>
Center::Center() {
	// TODO Auto-generated constructor stub
	memset(this,NULL,sizeof(Center)) ;
}

const string& Center::getAddress() const {
	return address;
}

void Center::setAddress(const string &address) {
	this->address = address;
}

const string& Center::getCoordinator() const {
	return coordinator;
}

void Center::setCoordinator(const string &coordinator) {
	this->coordinator = coordinator;
}

const string& Center::getCourses() const {
	return courses;
}

void Center::setCourses(const string &courses) {
	this->courses = courses;
}

const string& Center::getId() const {
	return id;
}

void Center::setId(const string &id) {
	this->id = id;
}

const string& Center::getName() const {
	return name;
}

void Center::setName(const string &name) {
	this->name = name;
}

const string& Center::getPassword() const {
	return password;
}

void Center::setPassword(const string &password) {
	this->password = password;
}

Center::~Center() {
	// TODO Auto-generated destructor stub
}

