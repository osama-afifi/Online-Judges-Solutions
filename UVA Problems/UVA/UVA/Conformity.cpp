
#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

	int n;

	while(cin>>n && n!=0)
	{
		map < set <int> , int > M;

		set <int> S;
		int num;
		for(int i=0;i<n;i++)
		{
			S.clear();
			for(int j=0;j<5;j++)
			{
				cin>>num;
				S.insert(num);
			}
			M[S]++;
		}

			map < set <int> , int > ::iterator it;
			int max=0;
			for(it=M.begin();it!=M.end();it++)
			{
			if((*it).second>max)
				max=(*it).second;
			}
			int count=0;

		for(it=M.begin();it!=M.end();it++)
			{
			if((*it).second==max)
				count++;
			}

		cout<<max*count<<endl;
	}
	return 0;
}