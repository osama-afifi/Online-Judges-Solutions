#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);
	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		string text;
		getline(cin,text);

		for(int i=0;i<text.length();i++)
		{
			if(text[i]!='(' && text[i]!=')' && text[i]!='[' && text[i]!=']'){
				text.erase(i,1);
				i--;
			}
		}


		for(int i=1;i<text.length();i++)
		{
			if(text[i]==']' && text[i-1]=='[')
			{
				text.erase(i,1);
				text.erase(i-1,1);
				i=0;
				continue;
			}
			if(text[i]==')' && text[i-1]=='(')
			{
				text.erase(i,1);
				text.erase(i-1,1);
				i=0;
				continue;
			}
		}


		if(text=="")
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;



		t--;
	}
	return 0;
}