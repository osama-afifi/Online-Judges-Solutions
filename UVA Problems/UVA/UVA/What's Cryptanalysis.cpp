
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	freopen("input.in","r",stdin);

	int t;
	cin>>t;

	cin.get();

	string text;
	int count[30]={};

	while(t>0)
	{

		getline(cin,text);

		for(int i=0;i<text.length();i++)
		{
			if((text[i]>='A') && (text[i]<='Z'))
			{
				count[text[i]-'A']++;
			}

			else if((text[i]>='a') && (text[i]<='z'))
			{
				count[text[i]-'a']++;
			}

		}

		
		

			t--;
	}


char ch[30];
		for(int i=0;i<27;i++)
		{
			ch[i]=i+'A';
		}

		for(int i=0;i<27;i++)
			for(int j=i+1;j<27;j++)
			{
				if(count[i]<count[j])
				{
					swap(count[i],count[j]);
					swap(ch[i],ch[j]);
				

				}


				if((count[i]==count[j])&&(ch[i]>ch[j]))
					swap(ch[i],ch[j]);

			}

			for(int i=0;i<27;i++)
			{
				if(count[i]>0)
				{
					
					cout<<ch[i]<<" "<<count[i]<<endl;
				}
			}


	return 0;
}