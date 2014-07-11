#include <iostream>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
	freopen("input.in","r",stdin);
	int t;
	cin>>t;
	while(t>0)
	{
		int l1,l2;
		map<int,int> LIST;
		cin>>l1>>l2;
		int num;
		for(int i=0;i<l1;i++)
		{
			cin>>num;
			LIST[num]++;
		}

		for(int i=0;i<l2;i++)
		{
			cin>>num;
			LIST[num]--;
		}

		map<int,int> ::iterator it;


		int count=0;
		for( it=LIST.begin();it!=LIST.end();it++)
			count+=abs((*it).second);

		cout<<count<<endl;
		t--;
	}

	return 0;
}