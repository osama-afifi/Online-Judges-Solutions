# include <iostream>
# include <string>

using namespace std;

int main()

{
	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	cin.get();
	while(t>0)
	{
		string text;
		int count[30];
		getline(cin,text);

		for(int i=1 ; i<=26 ; i++)
			count[i]=0;


		for(int i=0 ; i<text.length() ; i++)
		{
			if(text[i]>=65 && text[i]<=90)
				count[text[i]-64]++;

			if(text[i]>=97 && text[i]<=122)
				count[text[i]-96]++;

		}


		int max=0;


		for(int i=1 ; i<=26 ; i++)
		{
			if(count[i]>max)
				max=count[i];

		}

		for(int i=1 ; i<=26 ; i++)
		{
			if(count[i]==max)
			{char ch=i+96;
			cout<<ch;
			}
		}

		cout<<endl;

		t--;
	}
	return 0;
}