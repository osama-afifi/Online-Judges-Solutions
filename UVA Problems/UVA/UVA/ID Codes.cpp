#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

	string text;
	while(getline(cin,text))
	{
		if(text=="#")break;

		string prev=text;
	next_permutation(text.begin(),text.end());



	if(prev<text)
	cout<<text<<endl;
	else
		cout<<"No Successor"<<endl;

	}

return 0;
}