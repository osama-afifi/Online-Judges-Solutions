#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <string>
#include <string.h>


using namespace std;

int main()
{
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int n;
		scanf("%d",&n);
		string output;
		if(n==1)
		{
			cout<<1<<endl;
			continue;
		}
		if(n==0)
		{
			cout<<0<<endl;
			continue;
		}

		for(int i = 9 ; i>=2 ; i--)
			if(n%i==0)
			{
				output.append(1,i+'0');
				n/=i;
				i=10;
			}
		reverse(output.begin(),output.end());
		if(n==1)
			cout<<output<<endl;
		else
			cout<<-1<<endl;

	}
	return 0;
}