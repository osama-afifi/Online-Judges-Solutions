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
#include <sstream>
#include <stdio.h>

using namespace std;

int main ()
{ 
	freopen("input.in","r",stdin); 
	
	int t,kase=1;
	cin>>t;
	cin.ignore();
	string text[1000];
	while(t>0)
	{
		int N;
		cin>>N;
		cin.ignore();
		for(int i=0;i<N;i++)
			getline(cin,text[i]);
		

		for(int j=0;j<N;j++)
			for(int i=1;i<text[j].length();i++)
			{
				if((text[j][i-1]==text[j][i]) && (text[j][i]==' '))
				{
					text[j].erase(i,1);
					i--;
				}
			}

			cout<<"Case "<<kase++<<":"<<endl;
			for(int j=0;j<N;j++)
				cout<<text[j]<<endl;

			if(t!=1)cout<<endl;

			t--;
	}

	return 0;
}