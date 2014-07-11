#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

	string text1,text2;

	while(cin>>text1>>text2)
	{

		bool found=true;
		for( int i=0;i<text1.length();i++)
		{
			if(text2.find(text1[i])==string::npos)
			{
				found=false;
				break;
			}
			text2.erase( 0 , text2.find(text1[i])+1);
		}

		if(found==true)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

	}

	return 0;
}