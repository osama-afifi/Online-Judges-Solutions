
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


int main()

{		
	freopen("input.in","r",stdin);

	string text;

	vector <string> output;

stringstream ss;

	while(getline(cin,text))
	{
		for(int i=0;i<text.length();i++)
		{
			if((text[i]<'A' || (text[i]<'a' && text[i]>'Z') || text[i]>'z') && text[i]!=' ')
			{
				text[i]=' ';
				
			}

			if(text[i]>='A' && text[i]<='Z')
			{
				text[i]=text[i]-'A'+'a';
			}

		}

		ss.clear();

		ss<<text;

		string temp;



		while(ss>>temp)
		{
			bool found=false;
			
			for(int i=0;i<output.size();i++)
			{

			if(output[i]==temp)
				found=true;
			
			}

			if(found==false)
		output.push_back(temp);

		}
			
		

	}

	sort(output.begin(),output.end());

	for(int i=0;i<output.size();i++)
	cout<<output[i]<<endl;


	return 0;
}