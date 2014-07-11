#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <algorithm>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);


	string text;
	stringstream ss;


	int kase=1;
	int n;

	char ch;
	int t;
	cin>>t;
	cin.get();
	while(t>0)
	{
		getline(cin,text);
		ss.clear();
	
		ss<<text;

		cout<<"Case "<<kase++<<": ";
		while(	ss>>ch>>n)
		{
		for(int i=0;i<n;i++)
			cout<<ch;
		}

		cout<<endl;

		ss.clear();
		t--;
	}
	return 0;
}
