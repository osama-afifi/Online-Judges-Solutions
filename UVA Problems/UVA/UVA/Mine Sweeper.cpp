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
	bool first=true;
	int t;
	cin>>t;
	while(t>0)
	{

	if(first==false)
	cout<<endl;

		first=false;

		int n;
		cin>>n;
		cin.ignore();
		string text;
		bool mine[100][100]={};
		for(int i=0;i<n;i++)
		{
			getline(cin,text);

			for(int j=0;j<text.length();j++)
			{
				if(text[j]=='*')
					mine[i][j]=true;
			}

		}

		string touch[20];
		for(int i=0;i<n;i++)
			getline(cin,touch[i]);

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				int count=0;
				if(touch[i][j]=='x')
				{
					if(mine[i][j]==true)
					{
						touch[i][j]='*';

						for(int q=0;q<n;q++)
							for(int k=0;k<n;k++)
							{
								if(mine[q][k]==true)
									touch[q][k]='*';
							}

							continue;
					}

					if(j!=0 && mine[i][j-1]==true)
						++count;

					if(j!=0 && i!=0 && mine[i-1][j-1]==true)
						++count;

					if(j!=0 && i!=n-1 && mine[i+1][j-1]==true)
						++count;

					if(i!=n-1 && mine[i+1][j]==true)
						++count;

					if(i!=0 && mine[i-1][j]==true)
						++count;

					if(j!=n-1 && i!=n-1 && mine[i+1][j+1]==true)
						++count;

					if(j!=n-1 && mine[i][j+1]==true)
						++count;

					if(j!=n-1 && i!=0 && mine[i-1][j+1]==true)
						++count;

					touch[i][j]=count+'0';

				}
			}


			for(int i=0;i<n;i++)
				cout<<touch[i]<<endl;


			t--;
	}

	return 0;
}
