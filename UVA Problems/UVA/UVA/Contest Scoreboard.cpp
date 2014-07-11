#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <iomanip>
#include <sstream>

using namespace std;

struct TEAM
{

	int solved;
	int time;
	int no;

	bool operator < (const TEAM &a)const
	{
		if(solved!=a.solved)
			return solved>a.solved;

		if(time!=a.time)
			return time <a.time;

		return no<a.no;

	};
};

int main ()
{
	freopen("input.in","r",stdin);


	int t;
	cin>>t;
	cin.ignore();
	cin.get();
	while(t>0)
	{
		string text;

		map<int,TEAM> SCORE;

		map<int,int> P;
		map<int, map<int,bool> > S;
		map<int, map<int,int> > T;

		while(getline(cin,text) && text!="")
		{
			stringstream ss;
			ss<<text;
			int no;
			int problem;
			int time;
			char ch;
			ss>>no;
			ss>>problem;
			ss>>time;
			ss>>ch;

			if(ch=='C' &&S[no][problem]==false)
			{

				SCORE[no].time=SCORE[no].time+T[no][problem]+time;

				SCORE[no].solved++;
				S[no][problem]=true;

				SCORE[no].no=no;
			}


			if(ch=='I')
			{
				T[no][problem]+=20;
				SCORE[no].no=no;
			}

			else
				SCORE[no].no=no;


		}

		vector<TEAM> V;

		map<int ,TEAM> ::iterator iter;



		for(iter=SCORE.begin();iter!=SCORE.end();iter++)
			V.push_back((*iter).second);


		sort(V.begin(),V.end());

		vector<TEAM> ::iterator it;

		for(it=V.begin();it!=V.end();it++)
			cout<<(*it).no<<" "<<(*it).solved<<" "<<(*it).time<<endl;

		if(t!=1)cout<<endl;

		t--;
	}

	return 0;
}


