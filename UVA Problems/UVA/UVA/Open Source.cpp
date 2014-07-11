#include<iostream>
#include<math.h>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include <cstdio>
#include<set>
#include<vector>
#include<cstdlib>
#include<iomanip>
#include <stdio.h>

using namespace std;

bool DES(const pair<int,string> &a,const pair<int,string> &b) 
{
	if(a.first>b.first)
		return  true;

	else if(a.first<b.first)
		return  false;

	if(a.second<b.second)
		return  true;

	else
		return  false;


}

int main ()
{ 
	freopen("input.in","r",stdin); 

	string temp;

	while(true)
	{		
		if(temp=="0")break;
		string text;
		map< string, set<string> > UNI;

		map<string,int> black;
		string project;
		string user;

		map< string, set<string> > ::iterator it;

		while(getline(cin,temp))
		{

			if(temp=="1")break;
			if(temp=="0")break;

			if(!isupper(temp[0]) && temp[0]!=' ')
			{

				user=temp;
				bool duplicate=false;

				for(it=UNI.begin();it!=UNI.end();it++)
				{
					if((*it).second.find(user)!=(*it).second.end() &&(*it).second!=UNI[project]) //if found
					{
						(*it).second.erase(user);
						black[user]=1;
					}
				}

				if(black[user]==1)
				{
					UNI[project].erase(user);
				}

				if(black[user]==0)
					UNI[project].insert(user);
			}



			else
			{
				project=temp;
				UNI[project];
			}

		}

		vector < pair<int , string> > v;
		v.clear();

		for(it=UNI.begin();it!=UNI.end();it++)
		{
			pair<int,string> temp((*it).second.size(),(*it).first);
			v.push_back(temp);
		}

		vector < pair<int , string> > ::iterator iter;

		sort(v.begin(),v.end(),DES);


		for(iter=v.begin();iter!=v.end();iter++)
			cout<<iter->second<<" "<<iter->first<<endl;

	}
	return 0;
}