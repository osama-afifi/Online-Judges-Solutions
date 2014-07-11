#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

string text;

	while(cin>>text)
	{
		
		if(text==".")break;

		string x;
		string sum;
		int count=0;
		bool per=false;
		for(int i=1;i<text.length();i++)
		{
			x=text.substr(0,i);
			count=0;
			while(sum.length()<=text.length())
			{
				sum.append(x);
				count++;

				if(sum!=text.substr(0,x.length()*count))
					break;
				
				if(sum==text)
				{
					per=true;
					break;
				}
			}

			if(per==true)break;
			sum.clear();
		}

		if(per==true)
			printf("%d\n",count);

		else
			printf("1\n");


		

		
	}

	return 0;
}