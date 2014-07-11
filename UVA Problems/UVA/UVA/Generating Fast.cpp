#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;




int main()
{
freopen("input.in","r",stdin);
	int N;
	cin>>N;
	cin.ignore();
	for(int q=0;q<N;q++)
	{
		string text;
	cin>>text;
	sort(text.begin(),text.end());
	do
	{
	cout<<text<<endl;
	}while(next_permutation(text.begin(),text.end()));

	cout<<endl;
	
	}

return 0;
}