#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;



int main()
{
	freopen("input.in","r",stdin);
int t;
cin>>t;
string text;
int sum=0,n;
	while(t--)
	{
		cin>>text;

		if(text=="donate")
		{
		cin>>n;
		sum+=n;	
		}
		else if(text=="report")
			cout<<sum<<endl;
	}



	return 0;
}