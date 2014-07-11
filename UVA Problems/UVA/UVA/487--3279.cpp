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

	int t;
	cin>>t;
	while(t--)
	{
		string text;
		map <string , int> M;
			map <string , int> ::iterator it;
		int n;
		cin>>n;
		cin.ignore();
		while(n--)
		{
			getline(cin,text);
			if(text==""){
			n++;
			continue;
			}

			for(int i =0 ; i<text.length(); i++)
			{
				if(isdigit(text[i]))continue;
				else if(text[i]>='A' && text[i]<='Z')
				{
					switch(text[i])
					{
					case 'A':
					case 'B':
					case 'C':
						text[i]='2';
						break;
					case 'D':
					case 'E':
					case 'F':
						text[i]='3';
						break;
					case 'G':
					case 'H':
					case 'I':
						text[i]='4';
						break;
					case 'J':
					case 'K':
					case 'L':
						text[i]='5';
						break;
					case 'M':
					case 'N':
					case 'O':
						text[i]='6';
						break;
					case 'P':
					case 'R':
					case 'S':
						text[i]='7';
						break;
					case 'T':
					case 'U':
					case 'V':
						text[i]='8';
						break;
					case 'W':
					case 'X':
					case 'Y':
						text[i]='9';
						break;
					}
				}
				else
				{
					text.erase(i,1);
					i--;
				}

			}
			text.insert(3,"-");
			M[text]++;
		}
		bool out=false;
		for( it = M.begin() ; it!=M.end() ; it++ )
			if(it->second>1)
			{
				out=true;
			cout<<it->first<<" "<<it->second<<endl;
			}
			if(!out)
				cout<<"No duplicates."<<endl;

			if(t)printf("\n");

	}

	return 0;
}