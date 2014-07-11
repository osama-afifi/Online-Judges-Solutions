#include<iostream>
#include<math.h>
#include<cstring>
#include<string>
#include<algorithm>
#include<sstream>
#include<map>
#include <cstdio>
#include<set>
#include<vector>
#include<cstdlib>
#include<iomanip>
#include <stdio.h>

using namespace std;

struct TEAM
{
	
	int point;
	int win;
	int goal_diff;
	int goal_scored;
	int played;
	string ESM;
	int tie;
	int loss;
	int goal_against;
	string COPY;


	bool operator <(const TEAM &a) const
	{
		
		if(point!=a.point)
			return point>a.point;

		if(win!=a.win)
			return win>a.win;

		if(goal_diff!=a.goal_diff)
			return goal_diff>a.goal_diff;

		if(goal_scored!=a.goal_scored)
			return goal_scored>a.goal_scored;

		if(played!=a.played)
			return played<a.played;

				return	COPY<a.COPY;

	};



};

int main ()
{ 
	freopen("input.in","r",stdin); 

	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{

		string tournament_name;
		getline(cin,tournament_name);

		int no_teams;
		cin>>no_teams;
		cin.ignore();


		string name;
		TEAM arr[1000];

		for(int i=0;i<no_teams;i++)
		{
			getline(cin,name);
			TEAM Y;

			Y.ESM=name;
			Y.COPY=name;
			Y.point=0;
			Y.played=0;
			Y.win=0;
			Y.tie=0;
			Y.loss=0;
			Y.goal_diff=0;
			Y.goal_scored=0;
			Y.goal_against=0;

			arr[i]=Y;
		}

		int matches;
		cin>>matches;
		cin.ignore();

		string team1,team2,text;
		string s , s2;
		int g1,g2;
		char dummy;

		for(int i=0;i<matches;i++)
		{
			getline(cin,text);
			team1=text.substr(0,text.find('#'));
			team2=text.substr(text.find_last_of('#')+1);
			stringstream ss;
			ss.clear();
			s=text.substr(text.find('#')+1,text.find_last_of('#'));
			ss<<s;

			ss>>g1;
			ss>>dummy;
			ss>>g2;

			bool t1=false;
			bool t2=false;

			for(int j=0;j<no_teams;j++)
			{
				if(arr[j].ESM==team1 &&t1==false)
				{
					if(g1-g2>0)
					{
						arr[j].point=arr[j].point+3;
						arr[j].win++;
					}
					else if(g1-g2==0)
					{
						arr[j].point=arr[j].point+1;
						arr[j].tie++;
					}
					else
						arr[j].loss++;


					arr[j].played++;

					arr[j].goal_diff=arr[j].goal_diff+g1-g2;
					arr[j].goal_scored=arr[j].goal_scored+g1;
					arr[j].goal_against=arr[j].goal_against+g2;

					t1=-true;
					j=0;
					continue;
				}

				if(arr[j].ESM==team2 &&t2==false)
				{
					if(g2-g1>0)
					{
						arr[j].point=arr[j].point+3;
						arr[j].win++;
					}
					else if(g1-g2==0)
					{
						arr[j].point=arr[j].point+1;
						arr[j].tie++;
					}
					else
						arr[j].loss++;


					arr[j].played++;

					arr[j].goal_diff=arr[j].goal_diff+g2-g1;
					arr[j].goal_scored=arr[j].goal_scored+g2;
					arr[j].goal_against=arr[j].goal_against+g1;

					t2=true;
				}
			}

			for(int i=0;i<no_teams;i++)
				for(int q=0;q<arr[i].COPY.length();q++)
		{
			if(isupper(arr[i].COPY[q]) &&(arr[i].COPY[q])!=' ')
			arr[i].COPY[q]=tolower(arr[i].COPY[q]);
		}



			sort(arr, arr+no_teams );

		}



		cout<<tournament_name<<endl;
		for(int i=0;i<no_teams;i++)
			cout<<i+1<<") "<<arr[i].ESM<<" "<<arr[i].point<<"p, "<<arr[i].played<<"g ("<<arr[i].win<<"-"<<arr[i].tie<<"-"<<arr[i].loss<<"), "<<arr[i].goal_diff<<"gd ("<<arr[i].goal_scored<<"-"<<arr[i].goal_against<<")"<<endl;



		if(t!=1)
			cout<<endl;

		t--;
	}
	return 0;
}