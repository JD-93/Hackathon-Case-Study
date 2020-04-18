#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


#ifndef FINAL_CSV_CREATOR_H_
#define FINAL_CSV_CREATOR_H_




void final_csv_students()
{

		ofstream out ;
		out.open("students_final.csv") ;

		for (size_t i=0 ; i<stu.size() ; i++ ){
			out<<stu[i].getFormNo() <<"," ;
			out<<stu[i].getName() <<"," ;
			out<<stu[i].getRankA()<<"," ;
			out<<stu[i].getRankB()<<"," ;
			out<<stu[i].getRankC()<<"," ;
			out<<stu[i].getDegree()<<",";
			out<<stu[i].getPercentage()<<"," ;
			out<<stu[i].getAllocPref()<<"," ;
			out<<stu[i].getAllocCourse()<<",";
			out<<stu[i].getAllocCentId()<<"," ;
			out<<stu[i].getPayment()<<",";
			out<<stu[i].getReportCenter()<<",";
			out<<stu[i].getPrn()<<endl ;
		}
		out.close()  ;
}

void final_csv_capacity()
{

	ofstream out ;
	out.open("capacity_final.csv") ;

	for (size_t i=0 ; i<capacities.size() ; i++ ){
		out<<capacities[i].getCenterId() <<"," ;
		out<<capacities[i].getCourseName() <<"," ;
		out<<capacities[i].getMaxCapacity()<<"," ;
		out<<capacities[i].getFilledCapacity()<<endl ;
	}
	out.close()  ;
}


#endif /* FINAL_CSV_CREATOR_H_ */
