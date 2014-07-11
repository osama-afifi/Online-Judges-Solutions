#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

string ans[5]={"A","B","C","D","E"};

int main()
{
	freopen("input.in","r",stdin);
	char ch;
	int n;
	int answer;
	bool done;
	bool batel;
	int marks[5];
	while(scanf("%d",&n)==1)
	{

		if(!n)break;

		while(n--)
		{
			int done=0;
			batel=false;

			for(int i = 0 ;  i< 5 ; i++)
				scanf("%d",&marks[i]);

			for(int i = 0 ;  i< 5 ; i++)
			{
				if(marks[i]<=127)
				{
					done++;
					answer=i;
				}


			}
			if(done==1)
				cout<<ans[answer]<<endl;
			else
				printf("*\n");
		}


	}



	return 0;
}