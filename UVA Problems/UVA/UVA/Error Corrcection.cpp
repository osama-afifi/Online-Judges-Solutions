#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int matrix[150][150];


	int m,k;
	int n;
	while (cin>>n && n!=0)
	{

		int error_row=0;
		int error_col=0;

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>matrix[i][j];

		for(int i=0;i<n;i++)
		{
			int sum=0;

			for(int j=0;j<n;j++)
				sum+=matrix[i][j];

			if (sum%2!=0 && error_row==0)
			{
				error_row=1;
				m=i+1;
			}

			else if (sum%2!=0 && error_row==1)
			{
				error_row=2;
				break;
			}

		}


		//////////////////////////////////

		for(int j=0;j<n;j++)
		{
			int sum=0;

			for (int i=0;i<n;i++)
				sum+=matrix[i][j];

			if (sum%2!=0 && error_col==0 && error_row==1)
			{
				error_col=1;
				k=j+1;
			}

			else if (sum%2!=0 && error_row==0)
			{error_col=2;
			break;}

			else if (sum%2!=0 && error_col==1)
			{error_col=2;
			break;}

		}
		///////////////////////


		if ( error_col==0 && error_row==0 )
			cout<<"OK"<<endl;

		else if (error_col==1 && error_row==0)
			cout<<"Corrupt"<<endl;

		else if (error_col==0 && error_row==1)
			cout<<"Corrupt"<<endl;

		else if (error_col==1 && error_row==1)
			cout<<"Change bit ("<<m<<","<<k<<")"<<endl;

		else
			cout<<"Corrupt"<<endl;





	}
	return 0;
}
