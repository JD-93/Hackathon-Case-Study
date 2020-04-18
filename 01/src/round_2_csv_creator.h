#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;



#ifndef ROUND_2_CSV_CREATOR_H_
#define ROUND_2_CSV_CREATOR_H_



void round_2_csv_students()
{

		ofstream out ;
		out.open("students_rnd_2.csv") ;

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

void round_2_csv_capacity()
{

	ofstream out ;
	out.open("capacity_rnd_2.csv") ;

	for (size_t i=0 ; i<capacities.size() ; i++ ){
		out<<capacities[i].getCenterId() <<"," ;
		out<<capacities[i].getCourseName() <<"," ;
		out<<capacities[i].getMaxCapacity()<<"," ;
		out<<capacities[i].getFilledCapacity()<<endl ;
	}
	out.close()  ;
}




#endif /* ROUND_2_CSV_CREATOR_H_ */
