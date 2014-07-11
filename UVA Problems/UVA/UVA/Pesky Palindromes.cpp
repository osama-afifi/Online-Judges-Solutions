#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>

using namespace std;

bool PALIN(string X)
{
	for(int i=0;i<X.length();i++)
		if(X[i]!=X[X.length()-1-i])
			return false;
	return true;
}


int main()
{
	freopen("input.in","r",stdin);
	string text;

	while(getline(cin,text))
	{
		set<string> count;
		count.clear();
		string SUB;
		for(int i=0;i<text.length();i++){
			for(int j=i+1;j<=text.length();j++)
			{
				SUB=text.substr(i,j-i);
				if	(PALIN(SUB))
					count.insert(SUB);
			}
		}
		cout<<"The string '"<<text<<"' contains "<<count.size()<<" palindromes."<<endl;
	}
	return 0;
}