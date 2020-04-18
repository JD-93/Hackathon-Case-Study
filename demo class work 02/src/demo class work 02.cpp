
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
#include <vector>
#include <map>

class emp
{
public :
	string emp_no,name,sal,dept_no ;
	void display()
	{
		cout<<emp_no<<","<<name<<","<<sal<<","<<dept_no<<endl ;
	}
};

class dept
{
public:
	string dept_no,dept_name,city ;
	vector <emp> emps ;
	void display()
	{
		cout<<dept_no<<","<<dept_name<<","<<city<<endl ;
		for (size_t i=0 ; i<emps.size() ; i++ ){
			cout<<"\t-" ;
			emps[i].display() ;
		}
	}
};
dept * find_dept(vector<dept>&depts,string deptno)
{
	for (size_t i=0 ; i<depts.size() ; i++ ){
		if (depts[i].dept_no == deptno)
			return &depts[i] ;
	}
	return NULL ;
}
void load_emp_csv(vector <dept> &depts)
{
	ifstream fin("emp.csv") ;
	string line ;

	while(getline(fin,line)){
		stringstream ss(line) ;

		string token[4] ;
		for (int i=0 ; i<4 ; i++ )
			getline(ss,token[i],',') ;

		emp obj ;
		obj.emp_no = token[0] ;
		obj.name = token[1] ;
		obj.sal = token[2] ;
		obj.dept_no = token[3] ;

		dept * d = find_dept(depts,obj.dept_no) ;
		d->emps.push_back(obj) ;

	}
}
void load_dept_cvs(vector <dept> &depts)
{
	ifstream fin("dept.csv") ;
	string line ;

	while(getline(fin,line)){
		stringstream ss(line) ;

		string token[3] ;
		for (int i=0 ; i<3 ; i++ )
			getline(ss,token[i],',') ;

		dept obj ;
		obj.dept_no = token[0] ;
		obj.dept_name = token[1] ;
		obj.city = token[2] ;

		depts.push_back(obj) ;

	}
}
void save_emp_csv(vector<dept> depts )
{
	ofstream outf ;
	outf.open("new_emp.csv") ;

	for (size_t i=0 ; i<depts.size() ; i++ ){
		for(size_t j=0 ; j< depts[i].emps.size() ; j++ ){
			outf<<depts[i].emps[j].emp_no<<","
					<<depts[i].emps[j].name<<","
					<<depts[i].emps[j].sal<<","
					<<depts[i].emps[j].dept_no<<endl ;
		}
	}
}
void save_dept_csv(vector<dept>depts)
{
	ofstream outf("new_dept.csv") ;

	for (size_t i=0 ; i<depts.size() ; i++ ){
		outf<<depts[i].dept_no<<","
				<<depts[i].dept_name<<","
				<<depts[i].city<<endl ;
	}
}
class invitation
{
public :
	string emp_no , meeting_no ,status ;
	void display()
	{
		cout<<"\t"<<emp_no<<","<<meeting_no<<","<<status<<endl ;
	}
};
void load_invitaion_csv(vector<invitation>&invitations)
{
	ifstream fin("invitations.csv") ;
	string line ;

	while(getline(fin,line)){
		stringstream ss(line) ;

		string token[3] ;
		for (int i=0 ; i<3 ; i++ )
			getline(ss,token[i],',') ;

		invitation obj ;
		obj.emp_no = token[0] ;
		obj.meeting_no = token[1] ;
		obj.status = token[2] ;

		invitations.push_back(obj) ;
	}
}
class meeting
{
	public :
	string meeting_no , subject, venue, datetime ;
	map <int,size_t > emp_invites ; // key:empno &  value : index of invitation
	void display()
	{
		cout<<meeting_no<<","<<subject<<","<<venue<<","<<datetime<<endl ;
	}
	void display_invitaions (vector<invitation>&invitations)
	{
		map<int,size_t>::iterator itr = emp_invites.begin() ;
		while(itr != emp_invites.end()){
			invitations[itr->second].display() ;
			itr++ ;
		}
	}
};
void load_meeting_csv(vector <meeting> & meetings, vector <invitation> & invitaions)
{
	ifstream fin("meetings.csv") ;
	string line ;

	while(getline(fin,line)){
		stringstream ss(line) ;

		string token[4] ;
		for (int i=0 ; i<4 ; i++ )
			getline(ss,token[i],',') ;

		meeting obj ;
		obj.meeting_no = token[0] ;
		obj.subject = token[1] ;
		obj.venue = token[2] ;
		obj.datetime = token[3] ;

		for (size_t j=0 ; j<invitaions.size() ; j++ ){
			if (invitaions[j].meeting_no == obj.meeting_no ){
				//key : empno
				// val : index of invitaion
				obj.emp_invites[stoi(invitaions[j].emp_no)] =  (int)j ;
			}
		}
		meetings.push_back(obj) ;
	}
}
int main()
{
	vector <dept> depts ;
	load_dept_cvs(depts) ;
	load_emp_csv(depts) ;

	vector<invitation>invitations ;
	load_invitaion_csv(invitations) ;

	vector<meeting>meetings ;
	load_meeting_csv(meetings,invitations) ;


/*
	vector <dept> depts ;
	load_dept_cvs(depts) ;
	load_emp_csv(depts) ;
	cout<<"size of depts : "<<depts.size()<<endl ;
	for (size_t i=0 ; i<depts.size() ; i++ )
		depts[i].display() ;


	save_emp_csv(depts) ;
	save_dept_csv(depts) ;
*/
/*

	cout<<"size of invitations : "<<invitations.size()<<endl ;
	for (size_t i=0 ; i<invitations.size() ; i++ )
		invitations[i].display() ;

 */
/*
	cout<<"size of meetings : "<<meetings.size()<<endl ;
	for (size_t i=0 ; i<meetings.size() ; i++ )
		meetings[i].display() ;
*/


	for (size_t i=0 ; i<meetings.size() ; i++ ){
		meetings[i].display() ;
		meetings[i].display_invitaions(invitations) ;
	}

	return 0 ;
}
