/*
 * students.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "students.h"
#include <cstring>

students::students() {
	// TODO Auto-generated constructor stub
	memset(this,NULL,sizeof(students)) ;
}

const string& students::getAllocCentId() const {
	return alloc_cent_id;
}

void students::setAllocCentId(const string &allocCentId) {
	alloc_cent_id = allocCentId;
}

const string& students::getAllocCourse() const {
	return alloc_course;
}

void students::setAllocCourse(const string &allocCourse) {
	alloc_course = allocCourse;
}

int students::getAllocPref() const {
	return alloc_pref;
}

void students::setAllocPref(int allocPref) {
	alloc_pref = allocPref;
}

const string& students::getDegree() const {
	return degree;
}

void students::setDegree(const string &degree) {
	this->degree = degree;
}

int students::getFormNo() const {
	return form_no;
}

void students::setFormNo(int formNo) {
	form_no = formNo;
}

int students::getIsReported() const {
	return is_reported;
}

void students::setIsReported(int isReported) {
	is_reported = isReported;
}

const string& students::getName() const {
	return name;
}

void students::setName(const string &name) {
	this->name = name;
}

int students::getPayment() const {
	return payment;
}

void students::setPayment(int payment) {
	this->payment = payment;
}

float students::getPercentage() const {
	return percentage;
}

void students::setPercentage(float percentage) {
	this->percentage = percentage;
}

const string& students::getPrn() const {
	return prn;
}

void students::setPrn(const string &prn) {
	this->prn = prn;
}

int students::getRankA() const {
	return rank_a;
}

void students::setRankA(int rankA) {
	rank_a = rankA;
}

int students::getRankB() const {
	return rank_b;
}

void students::setRankB(int rankB) {
	rank_b = rankB;
}

int students::getRankC() const {
	return rank_c;
}

void students::setRankC(int rankC) {
	rank_c = rankC;
}

students::~students() {
	// TODO Auto-generated destructor stub
}

