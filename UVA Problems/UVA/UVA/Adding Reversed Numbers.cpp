#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <algorithm>
using namespace std;

void REMOVE (string &text)
{
	for(int i=0;i<text.length();i++)
	{
		if(text[i]=='0')
		{
			text.erase(i,1);
			i--;
		}
		else break;
	}
}

string SUM(string text1,string text2)
{

	string output;
	char ch;
	int X=0;
	int max=0;

	if(text1.length()>=text2.length())
		max=text1.length();
	else
		max=text2.length();

	while(true)
	{
		if(text1.length()==max)break;
		text1.insert(0," ");
	}
	while(true)
	{
		if(text2.length()==max)break;
		text2.insert(0," ");
	}
	int sum_column=0;
	int remainder=0;
	int added=0;
	for(int j=max-1;j>=0;j--)
	{
		sum_column=remainder;
		if((text1[j]!=' ')&&(text2[j]!=' '))
			sum_column=remainder+text2[j]+text1[j]-96;
		else if ((text1[j]==' ')&&(text2[j]==' '))break;
		else if (text1[j]==' ')
			sum_column=remainder+text2[j]-48;
		else if (text2[j]==' ')
			sum_column=remainder+text1[j]-48;
		if(sum_column<=9 &&j!=0)
		{added=sum_column;
		remainder=0;}
		else if(sum_column>=10 && j!=0)
		{remainder=sum_column/10;
		added=sum_column%10;}
		if(j!=0)
		{ch =added+48;
		output.insert(0,1,ch);}
		else
		{
			string last;
			while(sum_column!=0)
			{
				last.insert(0,1,sum_column%10+48);
				sum_column=sum_column/10;
			}
			output.insert(0,last);
		}
	}
	return output;
}
void REVERSE(string &text)
{
	reverse(text.begin(),text.end());
}
int main()
{
	freopen("input.in","r",stdin);
	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		string text1,text2;
		cin>>text1>>text2;

		REMOVE(text1);
		REMOVE(text2);
		REVERSE(text1);
		REVERSE(text2);
		REMOVE(text1);
		REMOVE(text2);

	string res=SUM(text1,text2);
		REMOVE(res);
		REVERSE(res);
		REMOVE(res);

		cout<<res<<endl;

		t--;
	}
	return 0;
}