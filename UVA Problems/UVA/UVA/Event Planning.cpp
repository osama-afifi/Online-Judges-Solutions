////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
using namespace std;

////////////////////////////////////////////////

int main ()
{ freopen("input.in", "r", stdin);

long int N,B,W,H,cost;
while(cin>>N>>B>>H>>W)
{

	int p[100],w[100],min=B+1;;
	for(int i=0;i<H;i++)
	{
		cin>>p[i];

		for(int j=0;j<W;j++)
			cin>>w[j];

		int bed=0;

		for(int j=0;j<W;j++)
		{
			if(w[j]>=N)
			bed=1;
		}

		cost=B+1;


		if (bed==1)
		{
			cost=p[i]*N;
			if (cost<min)
				min=cost;

		}

	}

	if (min<=B)
		cout<<min<<endl;
	else if (cost>B)
		cout<<"stay home"<<endl;





}
return 0;
}

