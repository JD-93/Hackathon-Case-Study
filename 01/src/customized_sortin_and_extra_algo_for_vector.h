#include <iostream>
using namespace std;
#include <string>

#ifndef CUSTOMIZED_SORTIN_H_
#define CUSTOMIZED_SORTIN_H_
// sorting
bool sort_by_A (students a,students b)
{
	int rank_a = stoi(a.getRankA()) ;
	int rank_b = stoi(b.getRankA()) ;
 	return (rank_a < rank_b);
}


bool sort_by_B (students a,students b)
{
	int rank_a = stoi(a.getRankB()) ;
	int rank_b = stoi(b.getRankB()) ;
 	return (rank_a < rank_b);
}

bool sort_by_C (students a,students b)
{
	int rank_a = stoi(a.getRankC()) ;
	int rank_b = stoi(b.getRankC()) ;
 	return (rank_a < rank_b);
}

int condition1(preferences p, int form_no)
{
	int form_p = stoi(p.getFormNo()) ;

	return (form_p == form_no ) ;
}


#endif /* CUSTOMIZED_SORTIN_H_ */
