
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



	bool first=true;
	while(getline(cin,text))
	{
		if(first==false)
			cout<<endl;

		int counter[300]={};
		int ASCII[300];
		first=false;



		for(int i=0;i<text.length();i++)
		{
			if(text[i]>=32 && text[i]<128 && text[i]!='\n' && text[i]!='\r'  )
				counter[text[i]]++;
		}
		for(int i=32;i<128;i++)
			ASCII[i]=i;

		for(int i=32;i<128;i++)
			for(int j=i+1;j<128;j++)
			{
				if(counter[i]>counter[j])
				{
					swap(counter[i],counter[j]);
					swap(ASCII[i],ASCII[j]);

				}

				else if(counter[i]==counter[j] && ASCII[i]<ASCII[j])
					swap(ASCII[i],ASCII[j]);
			}


			for(int i=32;i<128;i++)
			{
				if(counter[i]>0)
				{
					cout<<ASCII[i]<<" "<<counter[i]<<endl;
				}
			}


	}

	return 0;
}