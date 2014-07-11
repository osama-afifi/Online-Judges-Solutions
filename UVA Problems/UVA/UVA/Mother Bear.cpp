# include <iostream>
# include <string>

using namespace std;


string PALIN (string text)
{
	string palin=text;
	for(int i=0 ; i<text.length() ; i++)
	{
		palin[i]=text[text.length()-i-1];

	}


	return palin;

}

int main()

{
	freopen("input.in","r",stdin);

	int t;
	string text;

	while(getline(cin,text))
	{
		if(text=="DONE")break;
		
		for(int i=0; i<text.length(); i++)
		{
			if (text[i]>=65 && text[i]<=90)
				text[i]=text[i]+32;

			if ( (text[i]<65) ||  (text[i]<97 && text[i]>90) || (text[i]>122) )
			{
			text.erase(i,1);
			i--;
			}



		}

		string palin=PALIN(text);


		if(palin==text)
			cout<<"You won't be eaten!"<<endl;
		else
			cout<<"Uh oh.."<<endl;
			
	}
	return 0;
}