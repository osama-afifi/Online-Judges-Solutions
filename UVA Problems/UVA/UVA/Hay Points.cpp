#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

string TOLOWER(string text){
	for(int i=0;i<text.length();i++)
		text[i]=tolower(text[i]);
	return text;
}

int main()
{
	freopen("input.in","r",stdin);
	int M,N;
	while(cin>>M>>N)
	{
		map<string , int> MAP;
		string text;
		int num;
		for(int i=0;i<M;i++)
		{
			cin>>text>>num;
			MAP[text]=num;
		}
		long long sum=0;
		for(int i=0;i<N;i++)
		{
			sum=0; 
			while(getline(cin,text)&&text!=".")
			{
				if(text==".")break;
				stringstream ss;
				ss<<text;
				while(ss>>text)
				{
					TOLOWER(text);
					sum+=MAP[text];
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}