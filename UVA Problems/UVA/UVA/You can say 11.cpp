# include <iostream>
# include <string>

using namespace std;
int main ()
{
	freopen ("input.in","r",stdin);

	string text;

	while(getline(cin,text))
	{
		if(text=="0")break;

		int sume=0;
		int sumo=0;

		for(int i=0 ; i<text.length();i+=2)
		{
		sume=sume+text[i]-'0';
		}

		for(int i=1 ; i<text.length();i+=2)
		{
		sumo=sumo+text[i]-'0';
		}

		int absol=sumo-sume;


		if(absol%11==0)
			cout<<text<<" is a multiple of 11."<<endl;
		else
		cout<<text<<" is not a multiple of 11."<<endl;

	}
	return 0;
}
