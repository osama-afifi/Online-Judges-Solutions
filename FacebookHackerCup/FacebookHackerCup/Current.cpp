#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;
string text;
int dp[105][105];
bool solve(int index , int open)
{
	if(open<0)return false;
	if(index==text.length() && !open)return true;
	else if(index==text.length() && open)return false;
	if(dp[index][open]!=-1)
		return dp[index][open];
	bool s1=0,s2=0,s3=0,s4=0,s5=0;
	if(text[index]=='(')
		if(index && text[index-1]==':')
		{
			s1=solve(index+1,open);
			s2=solve(index+1,open+1);
		}
		else
			s2=solve(index+1,open+1);
	else if(text[index]==')')
		if(index && text[index-1]==':')
		{
			s3=solve(index+1,open);
			s4=solve(index+1,open-1);
		}
		else
			s4=solve(index+1,open-1);
	else
		s5=solve(index+1,open);

	return dp[index][open]=s1|s2|s3|s4|s5;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;
	int kase=0;
	string res[]={"NO","YES"};
	cin>>t;
	cin.ignore();

	while(t--)
	{
	memset(dp,-1,sizeof dp);
	getline(cin,text);
	cout<<"Case #"<<++kase<<": "<<res[solve(0,0)]<<endl;
	}

	return 0;
}
