#include <iostream>
#include <iomanip>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;
int main ()
{

	freopen("input.in", "r", stdin);
	int kase=1; 

	int r,c;

	
		int first=1;

	while(cin>>r>>c && r!=0 )
	{



		if(first==0)
		cout<<endl;
		first=0;


		int key[150];
		string output_across[200];
		string output_down[200];

		cin.get();
		int kosa=1;
		string text[20];

int ada=1;

		int max_cross=0;
		int max_down=0;

		for(int i=0;i<r;i++)
		{
			getline(cin,text[i]);
		}

		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{

				if(text[i][j]=='*')continue;

				if( (j==0) || (text[i][j-1]=='*') || (i==0) || (text[i-1][j]=='*') )
				{

				if( (j==0) || (text[i][j-1]=='*') )//acrros
				{
					for(int q=j ;  (q<c); q++)
					{
						if(text[i][q]=='*')break;

						output_across[kosa].append(1,text[i][q]);

					}
					max_cross=kosa;
				}

				if( (i==0) || (text[i-1][j]=='*') )//down
				{

					for(int q=i ; (q<r); q++)
					{
						if(text[q][j]=='*')break;
						output_down[kosa].append(1,text[q][j]);


					}
					max_down=kosa;
				}

				

					kosa++;
				}
			}
		}

		cout<<"puzzle #"<<kase++<<":"<<endl;

		cout<<"Across"<<endl;
		for(int i=1;i<=max_cross;i++)
		{

			if(output_across[i]!="")
			{
				cout<< setw(3)<<i<<"."<<output_across[i]<<endl;

			}
		}

		cout<<"Down"<<endl;
		for(int i=1;i<=max_down;i++)
		{

			if(output_down[i]!="")
			{
				cout<< setw(3)<<i<<"."<<output_down[i]<<endl;

			}
		}

	}

	return 0;
}
