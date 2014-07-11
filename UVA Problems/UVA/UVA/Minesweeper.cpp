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
	int M,N;
	int kase=1;
	while(cin>>M>>N)
	{
		cin.ignore();
		if(M==0 & N==0)break;

		if(first==false)
			cout<<endl;
		first=false;

		bool mine[150][150]={false};

		string touch[150];

		for(int i=0;i<M;i++)
		{
			getline(cin,touch[i]);
			if(touch[i]=="")continue;
		}
		for(int i=0;i<M;i++)
			for(int j=0;j<touch[i].length();j++)
			{
				if(touch[i][j]=='*')
					mine[i][j]=true;

			}

			int count=0;

			for(int i=0;i<M;i++)
				for(int j=0;j<N;j++)
				{

					if(touch[i][j]=='*')continue;

					count=0;

					if(j!=0 && mine[i][j-1]==true)
						++count;

					if(j!=0 && i!=0 && mine[i-1][j-1]==true)
						++count;

					if(j!=0 && i!=M-1 && mine[i+1][j-1]==true)
						++count;

					if(i!=M-1 && mine[i+1][j]==true)
						++count;

					if(i!=0 && mine[i-1][j]==true)
						++count;

					if(j!=N-1 && i!=M-1 && mine[i+1][j+1]==true)
						++count;

					if(j!=N-1 && mine[i][j+1]==true)
						++count;

					if(j!=N-1 && i!=0 && mine[i-1][j+1]==true)
						++count;


					touch[i][j]=count+'0';

					count=0;

				}


				cout<<"Field #"<<kase++<<":"<<endl;
				for(int i=0;i<M;i++)

					cout<<touch[i]<<endl;

	}






	return 0;
}
