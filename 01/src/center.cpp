/*
 * center.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "center.h"

center::center() {
	// TODO Auto-generated constructor stub

}

const string& center::getCenterAddr() const {
	return center_addr;
}

void center::setCenterAddr(const string &centerAddr) {
	center_addr = centerAddr;
}

const string& center::getCenterId() const {
	return center_id;
}

void center::setCenterId(const string &centerId) {
	center_id = centerId;
}

const string& center::getCenterName() const {
	return center_name;
}

void center::setCenterName(const string &centerName) {
	center_name = centerName;
}

const string& center::getCoordinator() const {
	return coordinator;
}

void center::setCoordinator(const string &coordinator) {
	this->coordinator = coordinator;
}

const string& center::getPassword() const {
	return password;
}

void center::setPassword(const string &password) {
	this->password = password;
}

center::~center() {
	// TODO Auto-generated destructor stub
}

void center::display() {
	cout<<"center id : "<<this->getCenterId()<<endl ;
	cout<<"center name : "<<this->getCenterName()<<endl ;
	cout<<"center address : "<<this->getCenterAddr()<<endl ;
	cout<<"center coordinator : "<<this->getCoordinator()<<endl ;
	cout<<"center login password : "<<this->getPassword()<<endl ;
	cout<<"\n"<<endl ;

}
