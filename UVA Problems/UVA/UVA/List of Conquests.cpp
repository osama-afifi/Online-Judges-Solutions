#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;



int main ()
{
	freopen("input.in", "r", stdin);

	int T;
	cin>>T;
	cin.ignore();

	pair <string , int> LIST[150]={};

	int q=0;

	for(int t=0;t<T;t++)
	{
		string text;
		getline(cin,text);

		bool found=false;

		stringstream ss;

		ss<<text;

		string country;
		string mozaz;

		ss>>country;


		
		int key;

		for(int j=0;j<=q;j++)
		{
			if(country==LIST[j].first)
			{
				found =true;
				key=j;

			}
		}

		if(found==true)
		{
		++LIST[key].second;
			while(ss>>mozaz)
			{}
		}	
		
		else 
		{
			LIST[q].first=country;
			++LIST[q].second;

			while(ss>>mozaz)
			{}
				
			q++;
		}

	}

sort(LIST,LIST+q);

	for(int i=0;i<q;i++)
	{
		cout<<LIST[i].first<<" "<<LIST[i].second<<endl;
	}
	return 0;
}
