# include <iostream>
# include <string>
# include <cstring>
# include <math.h>
# include <sstream>
# include <iomanip>
# include <cstdlib>
# include <algorithm>

using namespace std;


string FIX(string text)
{
	if(text[text.length()-1]%2==1)
		text[text.length()-1]--;
	return text;
}

bool BIGGER(string t1,string t2) ///if t2 bigger true
{
	if(t2.length()>t1.length())
		return true;
	if(t2.length()==t1.length() && t2>t1)
		return true;
	else
		return false;
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
		//sum[i] = (a[i] + b[i]) % 10;
		//sum[i + 1] = (a[i] + b[i]) / 10;

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

string PRODUCT(string text1 ,string text2)
{

	string tmp,output;
	int l1, l2, c = 0;
	int n1[2000] = {0}, n2[2000] = {0}, ans[2000] = {0};
	l1 = text1.length();
	l2 = text2.length();
	for (int i = 0; i < l1; i++)
		n1[l1 - (i + 1)] = text1[i] - 48;
	for (int i = 0; i < l2; i++)
		n2[l2 - (i + 1)] = text2[i] - 48;
	for (int i = 0; i < l2; i++)
	{for (int j = 0; j < l1; j++) 
	{
		c = i + j;
		ans[c] += n1[j] * n2[i];
		while (ans[c] / 10 != 0) 
		{	ans[c + 1] += ans[c] / 10;
		ans[c] %= 10;
		c++;
		}
	}	}

	if (text1 == "0" || text2 == "0")
		c = 0;
	for (int i = c; i >= 0; i--)
	{
		output.append(1,(ans[i]+48));
		ans[i] = 0;
	}

	return output;
}


int main()
{ 

	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		string text;
		cin>>text;

		if(text=="")continue;
		if(text=="1")
		{	cout<<"1"<<endl;
		if(t!=1)
			cout<<endl;
		t--;
		continue;}
		if(text=="0")
		{	cout<<"0"<<endl;
		if(t!=1)
			cout<<endl;
		t--;
		continue;}



		string up=text;
		string low="0";
		string mid,PROD;
		string prev;

		while(true)
		{
			mid=SUM(up,low);
			mid=PRODUCT(mid,"5");
			mid = mid.erase(mid.length()-1,1);

			PROD=PRODUCT(mid,mid);
			if(PROD==text)
				break;

			else if(BIGGER(PROD,text)==true)
				low=mid;

			else 
				up=mid;

			if(prev==mid)
				break;

			prev=mid;
		}

		if(mid==low)
			cout<<low<<endl;
		else
			cout<<mid<<endl;

		if(t!=1)
			cout<<endl;

		t--;
	}
	return 0;
}
