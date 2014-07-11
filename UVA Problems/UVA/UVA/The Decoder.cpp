#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	string text;

	while(getline(cin , text))
	{
	
		for(long long  i=0;i<text.length();i++)
		{
		text[i]=text[i]-7;
		
		}

		cout<<text<<endl;
	}


	return 0;
}
