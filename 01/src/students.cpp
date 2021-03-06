/*
 * students.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */
#include <cstring>
#include "students.h"
#include <iostream>
using namespace std;
#include <string>


students::students() {
	// TODO Auto-generated constructor stub

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

const string& students::getAllocPref() const {
	return alloc_pref;
}

void students::setAllocPref(const string &allocPref) {
	alloc_pref = allocPref;
}

const string& students::getDegree() const {
	return degree;
}

void students::setDegree(const string &degree) {
	this->degree = degree;
}

const string& students::getFormNo() const {
	return form_no;
}

void students::setFormNo(const string &formNo) {
	form_no = formNo;
}

const string& students::getName() const {
	return name;
}

void students::setName(const string &name) {
	this->name = name;
}

const string& students::getPayment() const {
	return payment;
}

void students::setPayment(const string &payment) {
	this->payment = payment;
}

const string& students::getPercentage() const {
	return percentage;
}

void students::setPercentage(const string &percentage) {
	this->percentage = percentage;
}

const string& students::getPrn() const {
	return prn;
}

void students::setPrn(const string &prn) {
	this->prn = prn;
}

const string& students::getRankA() const {
	return rank_A;
}

void students::setRankA(const string &rankA) {
	rank_A = rankA;
}

const string& students::getRankB() const {
	return rank_B;
}

void students::setRankB(const string &rankB) {
	rank_B = rankB;
}

const string& students::getRankC() const {
	return rank_C;
}

void students::setRankC(const string &rankC) {
	rank_C = rankC;
}

const string& students::getReportCenter() const {
	return report_center;
}

void students::setReportCenter(const string &reportCenter) {
	report_center = reportCenter;
}

students::~students() {
	// TODO Auto-generated destructor stub
}

void students::display() {
	cout<<"form no : "<<this->getFormNo()<<endl ;
	cout<<"name : "<<this->getName()<<endl ;
	cout<<"rank A : "<<this->getRankA() <<endl ;
	cout<<"rank B : "<<this->getRankB() <<endl ;
	cout<<"rank C : "<<this->getRankC() <<endl ;
	cout<<"degree : "<<this->getDegree() <<endl ;
	cout<<"degree marks : "<<this->getPercentage()<<endl ;
	cout<<"allocated pref : "<<this->getAllocPref() <<endl ;
	cout<<"allocated course : "<<this->getAllocCourse() <<endl ;
	cout<<"alloc cent id : "<<this->getAllocCentId() <<endl ;
	cout<<"payment status: "<<this->getPayment() <<endl ;
	cout<<"repoeted : "<<this->getReportCenter() <<endl ;
	cout<<"PRN : "<<this->getPrn() <<endl ;
	cout<<"\n"<<endl ;
}

void students::accept() {
	cout<<"Enter student details : " <<endl ;
	cout<<"Enter form no : " ;
	cin>>this->form_no ;

	cout<<"Enter name : ";
	cin>>this->name ;

	cout<<"Enter rank A :" ;
	cin>>this->rank_A ;

	cout<<"Enter rank B : " ;
	cin>>this->rank_B ;

	cout<<"Enter rank C : " ;
	cin>>this->rank_C ;

	cout<<"Enter degree : " ;
	char degrees[20] ;
	scanf(" %[^\n]s",&degrees);
	string deg(degrees) ;
	setDegree(deg) ;

	cout<<"Enter percentage : ";
	cin>>this->percentage ;

	this->alloc_pref = "NA" ;
	this->alloc_course = "NA" ;
	this->alloc_cent_id = "NA" ;
	this->payment = "NA" ;
	this->report_center = "NA" ;
	this->prn = "NA" ;

}
