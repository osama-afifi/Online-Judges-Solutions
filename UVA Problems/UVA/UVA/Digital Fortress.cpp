
# include <iostream>
# include <math.h>
# include <string>
# include <sstream>

using namespace std;

int main ()
{
	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		string text;
		getline(cin,text);
		int len=text.length();
		int dim=sqrt((double)len);
		if((dim*dim)!=len)
		{
			t--;
			cout<<"INVALID"<<endl;
			continue;	
		}
		char MATRIX[101][101];
		int q=0;
		for(int i=0;i<dim;i++)
			for(int j=0;j<dim;j++)
			{
				MATRIX[i][j]=text[q];
				q++;
			}

			for(int i=0;i<dim;i++)		
				for(int j=0;j<dim;j++)
				{
				cout<<MATRIX[j][i];
				}

			cout<<endl;



					t--;
				}
				return 0;
	}

