# include <iostream>
# include <string>
# include <cstring>
# include <math.h>
# include <sstream>
# include <iomanip>
# include <map>
# include <algorithm>

using namespace std;


int main()
{ 

	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	while(t>0)
	{

		map <char,int> M;
		int n;
		cin>>n;

		char ch;
		int value;

		for(int i=0;i<n;i++)
		{
			cin>>ch;
			cin>>value;
			M[ch]=value;
		}
		
		long lines;
		cin>>lines;
		cin.ignore();
		string text;
		

		long double sum=0;
		for(int i=0;i<lines;i++)
		{
			getline(cin,text);

			for(int j=0;j<text.length();j++)	
			{
			sum+=M[text[j]];
		
			}
		}



		cout<<setprecision(2)<<fixed<<sum/100<<"$"<<endl;


		t--;
	}
	return 0;
}
