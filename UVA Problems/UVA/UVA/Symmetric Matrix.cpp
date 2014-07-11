#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("input.in", "r", stdin);

	int t,kase=1;
	cin>>t;
	while(t>0)
	{
		char dummy;
		cin>>dummy>>dummy;

		long long int N;
		cin>>N;

		long long int MAT[101][101];

		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				cin>>MAT[i][j];

		bool sym=true;

		for(int i=0;i<(N+1)/2;i++)
			for(int j=0;j<N;j++)
			{
				if(MAT[i][j]!=MAT[N-i-1][N-j-1] || MAT[N-i-1][N-j-1]<0 || MAT[i][j]<0 )
					sym=false;
			}

			if(sym==true)
				cout<<"Test #"<<kase++<<": Symmetric."<<endl;
			else
				cout<<"Test #"<<kase++<<": Non-symmetric."<<endl;

			t--;
	}


	return 0;
}