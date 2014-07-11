# include <iostream>
# include <string>
# include <cstring>
# include <math.h>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);
	string text;
	while(getline(cin,text) && text!="0")
	{
	int len=text.length();
	long sum=0;
	for(int i=len-1;i>=0;i--)
	sum+=(text[i]-'0')*(pow(2.0,len-i)-1);
	
	cout<<sum<<endl;
	}
return 0;
}