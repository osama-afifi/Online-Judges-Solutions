# include <iostream>

using namespace std;

int main ()
{
	freopen("input.in","r",stdin);

	int W, H, N;

	while(cin>>W>>H>>N)
	{

		if(W==0 && H==0 && N==0)break;


		bool FREE[502][502]={false};
		int x1,y1,x2,y2;
		for(int q=0;q<N;q++)
		{
			cin>>x1>>y1>>x2>>y2;
			 x1--, y1--, x2--, y2--;
			if(y1>y2) swap(y1,y2);
			if(x1>x2) swap(x1,x2);				
			
			for(int i=y1;i<=y2;i++)
				for(int j=x1;j<=x2;j++)
					FREE[i][j]=true;

		}

		long long count=0;

		for(int i=0;i<H;i++)
			for(int j=0;j<W;j++)
			{
				if(FREE[i][j]==false)
					count++;
			}


			if(count==0)
				cout<<"There is no empty spots."<<endl;

			else if(count==1)
				cout<<"There is one empty spot."<<endl;

			else
				cout<<"There are "<<count<<" empty spots."<<endl;

	}

return 0;
}
