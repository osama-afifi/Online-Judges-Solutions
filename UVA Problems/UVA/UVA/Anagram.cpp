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

bool comp(const char &a, const char &b)
{
	int delta = tolower(a) - tolower(b);

	return delta ? delta < 0 : a <b;
}


int main ()
{ 
	freopen("input.in","r",stdin); 
//	freopen("output.out","w",stdout); 

	string text;
	int t;
	cin>>t;
	cin.ignore();

	while(t>0)
	{
		getline(cin,text);

	
		sort (text.begin(),text.end(),comp);

		do {
			cout << text << endl;
		} while ( next_permutation (text.begin(),text.end(),comp) );

	
		t--;
	}

	return 0;
}