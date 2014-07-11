#include<iostream>
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

int main()
{
	freopen("input.in","r",stdin);

	int N,kase=1;

	while(cin>>N)
	{


		vector<int> B2;
		set<int> SUM;


		long long NO;
		for(int i=0;i<N;i++)
		{
			cin>>NO;
			B2.push_back(NO);
		}


		bool BT=true;

		for(int i=1;i<B2.size();i++)
		{

			if(B2[i-1]<=0 || B2[B2.size()-1]<=0)
			{
				BT=false;
				break;
			}

			if(i >= 1 && B2[i]<=B2[i-1])
			{
				BT=false;
				break;
			}


		}

		for(int i=0;i<B2.size();i++)
			for(int j=i;j<B2.size();j++)
			{
				if(SUM.find( B2[i]+B2[j])!=SUM.end())
				{
					BT=false;
					break;
				}

				else
					SUM.insert(B2[i]+B2[j]);

			}

			if(BT==true)
				cout<<"Case #"<<kase++<<": It is a B2-Sequence."<<endl;

			else
				cout<<"Case #"<<kase++<<": It is not a B2-Sequence."<<endl;

			cout<<endl;

	}
	return 0;
}