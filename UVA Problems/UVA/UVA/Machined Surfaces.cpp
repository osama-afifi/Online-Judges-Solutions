# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>
# include <cstdlib>
# include <algorithm>

using namespace std;

int main ()
{ 
	freopen("input.in","r",stdin);

	int N;
	while(cin>>N &&N!=0)
	{
		cin.ignore();
		string text[25];

		for(int i=0;i<N;i++)
			getline(cin,text[i]);

		int min=99999;
		int gap=0;

		
		for(int i=0;i<N;i++)
		{
			gap=0;
			for(int j=text[i].length()-1;j>=0;j--)
			{
				if(text[i][j]==' ')
					gap++;
			}
				if(gap<min)
					min=gap;
		}

		int count=0;
		

		for(int i=0;i<N;i++)
			for(int j=0;j<text[i].length();j++)
			{
				if(text[i][j]==' ')
				{
					count++;
				}

			}


			if(count!=0)
			cout<<count-(min*N)<<endl;
			else
				cout<<0<<endl;

	}
	return 0;
}
