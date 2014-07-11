
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;


int main()

{		

	freopen("input.in","r",stdin);

	string text;


	while(getline(cin,text))
	{
		if(text=="")
		{
			cout<<endl;
			continue;
		}


		int count=0;

		for(int i=0;i<text.length();i++)
		{

			if(text[i]>='0' && text[i]<='9')
			{
				count=count+(text[i]-'0');
							continue;
			}
			if((text[i]=='!'))
			{
				cout<<endl;
					continue;
			}

			if(text[i]!='b')
			{
				for(int j=0;j<count;j++)
					cout<<text[i];
			}

			else
			{
				for(int j=0;j<count;j++)
					cout<<' ';
			}

			count=0;
		}

		cout<<endl;
	}





return 0;
}