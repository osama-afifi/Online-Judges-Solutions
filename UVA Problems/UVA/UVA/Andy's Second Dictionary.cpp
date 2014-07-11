#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
#include <sstream>
using namespace std;



int main ()
{
	freopen("input.in","r",stdin);

	string text[1000];
	bool hyp [1000]={false};

	int X=0;
	stringstream ss;
	string temp;

	while(getline(cin,temp))
	{
		ss.clear();

		for(int i=0;i<temp.size();i++)
		{
			temp[i]=tolower(temp[i]);
			if(((temp[i]<'a' || temp[i]>'z')) && (temp[i]!='-'))
			{
				temp[i]=' ';

			}

		}
		ss<<temp;
		while(ss>>text[X])
		{
			/*if (text[X]=="-")
			{
			X++;
			continue;
			}*/
			bool last=false;

			if(text[X][text[X].size()-1]=='-')
				last=true;

			if(text[X]!="" && text[X][text[X].size()-1]=='-' && temp[temp.size()-1]=='-')
			{
				if(last==true)
					hyp[X]=true;
				text[X].erase(text[X].size()-1,1);

			}

			X++;
		}
	}

	for(int i=0;i<X;i++)
	{
		while(hyp[i]==true)
		{
			//		text[i].erase(text[i].size()-1,1);
			i++;
			text[i]=text[i-1]+text[i];
			text[i-1]="";

		}
	}

	set<string> S;

	for (int i = 0 ; i < X ; i++)
	{
		if(text[i]!="")
			S.insert(text[i]);
	}


	set<string> ::iterator it;

	for (it=S.begin();it!=S.end();it++)
		cout<<(*it)<<endl;

	return 0;
}