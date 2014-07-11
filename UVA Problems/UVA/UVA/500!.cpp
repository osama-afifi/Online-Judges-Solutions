
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;


string PRODUCT(string text1 ,string text2)
{

	string tmp,output;

	int l1, l2, c = 0;
	int n1[20000] = {0}, n2[20000] = {0}, ans[20000] = {0};

	l1 = text1.length();
	l2 = text2.length();
	for (int i = 0; i < l1; i++)
		n1[l1 - (i + 1)] = text1[i] - 48;

	for (int i = 0; i < l2; i++)
		n2[l2 - (i + 1)] = text2[i] - 48;

	for (int i = 0; i < l2; i++)
	{
		for (int j = 0; j < l1; j++) 
		{
			c = i + j;
			ans[c] += n1[j] * n2[i];
			while (ans[c] / 10 != 0) 
			{
				ans[c + 1] += ans[c] / 10;
				ans[c] %= 10;
				c++;
			}
		}
	}

	if (text1 == "0" || text2 == "0")
		c = 0;

	for (int i = c; i >= 0; i--)
	{

		output.append(1,(ans[i]+48));
		ans[i] = 0;
	}

	return output;
}

int main () 
{
	freopen("input.in","r",stdin);

	string FACT[1001];
	FACT[0]="1";

	stringstream ss;
	string current;
	for(int i=1;i<1001;i++)
	{
		ss.clear();
		ss<<i;
		ss>>current;
		FACT[i]=PRODUCT(FACT[i-1],current);
	}

	int N;
	while(cin>>N)
	{
		cout<<N<<"!"<<endl;
		cout<<FACT[N]<<endl;

	}



}
