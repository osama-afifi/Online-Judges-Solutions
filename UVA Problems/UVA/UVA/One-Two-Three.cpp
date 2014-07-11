#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

	string one="one";
	string two="two";
	string three="three";

	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		int min=999999;
		int count;
		int cho;
		string text;
		getline(cin,text);

		if(text.length()==3)
		{
			count=0;
			for(int i=0;i<text.length();i++)
			{
				if(text[i]!=one[i])
					count++;
			}
			if(count<min)
			{
				min=count;
				cho=1;
			}


			count=0;
			for(int i=0;i<text.length();i++)
			{
				if(text[i]!=two[i])
					count++;
			}
			if(count<min)
			{
				min=count;
				cho=2;
			}

		}
		else
		{
				count=0;
			for(int i=0;i<text.length();i++)
			{
				if(text[i]!=three[i])
					count++;
			}
			if(count<min)
			{
				min=count;
				cho=3;
			}
		
		}

		cout<<cho<<endl;


		t--;
	}

	return 0;
}