# include <iostream>
# include <string>
# include <cstring>
# include <math.h>
# include <sstream>
# include <iomanip>
# include <cstdlib>
# include <algorithm>
# include <map>
# include <set>
# include <vector>

using namespace std;

bool cmp (pair <string , long long> a ,pair <string , long long> b )
{
	if(a.second<b.second)
		return true;

	else if(a.second>b.second)
		return false;

	else if (a.first<b.first)
		return true;
	else
		return false;
}



int main()
{ 

	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{

		string title;
		getline(cin,title);
		int m,n,b;
		cin>>m>>n>>b;
		//cin.ignore();

		string ingr;
		int value;
		map<string,long long> BIGMAP;
		for(int i=0;i<m;i++)
		{
			cin>>ingr;
			cin>>value;
		//	cin.ignore();
			BIGMAP[ingr]=value;
		}



		map<string,long long> RECMAP;
		string REC;
		string req;
		cin.ignore();
		int num;
		for(int i=0;i<n;i++)
		{
			
			getline(cin,REC);
			cin>>num;
		//	cin.ignore();
			for(int j=0;j<num;j++)
			{
				cin>>req;
				cin>>value;
				cin.ignore();
				RECMAP[REC]+=BIGMAP[req]*value;

			}


		}

	string copy=title;
		for(int i=0;i<title.length();i++)
		{
			copy[i]=toupper(title[i]);
		}
		cout<<copy<<endl;


		map<string,long long> ::iterator it;

		vector < pair <string ,long long> > v;

		for(it=RECMAP.begin();it!=RECMAP.end();it++)
			v.push_back(*it);
			
		sort(v.begin(),v.end(),cmp);


		vector < pair <string ,long long> > ::iterator iter;


bool count=false;
		for(iter=v.begin();iter!=v.end();iter++)
		{
		if((*iter).second<=b)
				{
					cout<<(*iter).first<<endl;
					count=true;
				}
		}


			if(count==false)
				cout<<"Too expensive!"<<endl;

cout<<endl;

		t--;
	}
	return 0;
}
