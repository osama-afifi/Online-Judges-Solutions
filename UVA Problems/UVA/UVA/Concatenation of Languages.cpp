#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

	int t,kase=1;
	cin>>t;

	while(t>0)
	{

		int x,y;

		cin>>x>>y;

		cin.ignore();

		map<string,int> CON;

		string text1[2000];
		string text2[2000];


		for(int i=0;i<x;i++)
			getline(cin,text1[i]);

		for(int j=0;j<y;j++)
			getline(cin,text2[j]);

		for(int i=0;i<x;i++)
			for(int j=0;j<y;j++)
			{
				CON[text1[i]+text2[j]];
			}

			map<string,int>::iterator it;

			int count=0;

			for(it=CON.begin();it!=CON.end();it++)
				++count;
			

			cout<<"Case "<<kase++<<": "<<count<<endl;

			t--;
	}
	return 0;
}