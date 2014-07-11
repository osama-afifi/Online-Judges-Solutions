#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);
	int n,low,high;
	string text;
	bool honest=true;

	while(cin>>n)
	{
		if(!n)break;
		honest=false;
		low=0;high=11;
		do
		{
			cin.ignore();
			getline(cin,text);
			
			
			if(n<high && text=="too high")
				high=n;
			else if	(n>low &&text=="too low")
				low=n;
			else if	(text=="right on")
			{
				if(n>low && n<high)
					honest=true;
				break;
			}
		}while(cin>>n);

		if(!honest)
		printf("Stan is dishonest\n");
		else
	printf("Stan may be honest\n");

	}


	return 0;
}