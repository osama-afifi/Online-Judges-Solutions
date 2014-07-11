
#include <iostream>
#include <string>
#include <iomanip>
#include<stdio.h>

using namespace std;
int main ()
{
	

	string text;
	while (getline(cin, text))
	{
		
	
		int count = 0;
		int previous=0;

		for (int i=0 ; i<text.length() ; i++ )
		{
			if(  ( text[i]>='A' && text[i]<='Z') || ( text[i]>='a' && text[i]<='z') )
			{
				if(previous==0)
				{count++;
				previous=1;}
			}
			else 
				previous=0;
		}


		cout<<count<<endl;
	}
	return 0;
}
