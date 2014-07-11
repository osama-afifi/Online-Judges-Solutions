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
	char ch;
	int n;
	bool bara;
	bool r;
	bool d;
	int counter_d;
	int counter_r;
	int mini=10000000;
	while(cin>>n)
	{
		mini=10000000;

		if(!n)break;
		bara = false;
		 counter_r=0;
		 counter_d=0;
		 r=false,d=false;
		while(n--)
		{
			cin>>ch;


			switch(ch)
			{
			case 'Z':
				mini=0;
				bara=true;
				break;
			case 'R':
				r=true;
				if(counter_d+1<mini && d)
					mini=counter_d+1;
				counter_r=0;
				break;
			case 'D':
				d=true;
				if(counter_r+1<mini && r)
					mini=counter_r+1;
				counter_d=0;
				break;
			case '.':
				if(d)
				counter_d++;
				if(r)
				counter_r++;
				break;
			}

			//if(bara)break;
		}

		printf("%d\n",mini);
	}



	return 0;
}