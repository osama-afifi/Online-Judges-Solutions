
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

long long GCD (int x,int y)
{

	if(x>y)
		return GCD (x-y,x);

	else if(y>x)
		return GCD (x,y-x);

	else
		return x;


}

int main()

{		
	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	cin.get();
	while(t>0)
	{

		long long N[150];

		stringstream ss;

		string text;

		getline(cin,text);

		ss<<text;

		int q=0;
		int max=1;


		while(ss>>N[q])
		{q++;}

		for(int i=0;i<q;i++)
			for(int j=i+1;j<q;j++)
			{

				if(GCD(N[i],N[j])>max)
					max=GCD(N[i],N[j]);

			}


			cout<<max<<endl;



			t--;
	}
	return 0;
}