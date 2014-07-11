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

int main ()
{
	freopen("input.in","r",stdin);

	int p,g;

	while(cin>>p>>g)
	{

	float no;
	string party;

	map<string,float> PARTY;



	for(int i=0;i<p;i++)
	{
		cin>>party;
		cin>>no;
		PARTY[party]=no*10;
	}

	cin.ignore();

	for(int i=0;i<g;i++)
	{

		bool guess=false;

		string dummy;
		string temp;
		string p;

		stringstream ss;

		float SUM=0;
		float COMP;

		getline(cin,temp);

		ss<<temp;

		while(dummy=="+" || dummy=="" )
		{
			ss>>p;
			SUM+=PARTY[p];
			ss>>dummy;

		}

		ss>>COMP;
		COMP=COMP*10;

		if(dummy==">" &&SUM>COMP)
			guess=true;

		else if(dummy==">=" &&SUM>=COMP)
			guess=true;

		else if(dummy=="<" &&SUM<COMP)
			guess=true;

		else if(dummy=="<=" &&SUM<=COMP)
			guess=true;

		else if(dummy=="=" &&SUM==COMP)
			guess=true;
		


		if(guess==true)
			cout<<"Guess #"<<i+1<<" was correct."<<endl;

		else
			cout<<"Guess #"<<i+1<<" was incorrect."<<endl;

	}

	}
	return 0;
}


