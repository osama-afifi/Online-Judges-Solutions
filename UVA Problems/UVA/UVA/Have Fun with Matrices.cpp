#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int t,kase=1;
	cin>>t;


	while(t>0)
	{
		int dimension;
		cin>>dimension;

		char matrix[15][15];

		for(int i=0;i<dimension;i++)
			for(int j=0;j<dimension;j++)
				cin>> matrix[i][j];

		int operations;
		string choice;

		cin>>operations;

		while(operations>0)
		{
			cin>>choice;

			if(choice=="transpose")
			{
				for(int i=0;i<dimension;i++)
					for(int j=0;j<i;j++)
						swap(matrix[i][j],matrix[j][i]);
			}


			else if(choice=="row")
			{
				int r1,r2;
				cin>>r1>>r2;

					for(int j=0;j<dimension;j++)
						swap(matrix[r1-1][j],matrix[r2-1][j]);
			}

			
			else if(choice=="col")
			{
				int c1,c2;
				cin>>c1>>c2;

					for(int j=0;j<dimension;j++)
						swap(matrix[j][c1-1],matrix[j][c2-1]);
			}


			else if(choice=="inc")
			{

				for(int i=0;i<dimension;i++)
					for(int j=0;j<dimension;j++)
					{
						
						if((matrix[i][j])=='9')
							matrix[i][j]='0';

						else
							++matrix[i][j];
					}
			}

			else if(choice=="dec")
			{

				for(int i=0;i<dimension;i++)
					for(int j=0;j<dimension;j++)
					{
						if((matrix[i][j])=='0')
							matrix[i][j]='9';

						else
							--matrix[i][j];
					}
			}


			operations--;}


		cout<<"Case #"<<kase++<<endl;

		for(int i=0;i<dimension;i++)
		{
			for(int j=0;j<dimension;j++)
				cout<< matrix[i][j];

			cout<<endl;
		}


		cout<<endl;

		t--;}
	return 0;
}
