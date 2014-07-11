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
#include <hash_map>
#include <stdio.h>

using namespace std;


int main ()
{ 
	freopen("input.in","r",stdin); 

	

	int t;
	cin>>t;
	cin.ignore();
	cin.get();
	while(t>0)
	{

		map<string ,long double> HW;

		long double count=0;
		string text;
		while(getline(cin,text))
		{
			if(text=="")break;

			HW[text]++;
			count++;
		}

		map<string ,long double> ::iterator it;

		for(it=HW.begin();it!=HW.end();it++)
			cout<<(*it).first<<" "<<setprecision(4)<<fixed<<(((*it).second)/count)*100.0<<endl;

		if(t!=1)
			cout<<endl;

		t--;

	}




	return 0;
}