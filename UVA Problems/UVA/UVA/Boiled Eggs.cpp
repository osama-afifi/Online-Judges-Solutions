#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	int t,kase=1;
	cin>>t;
	while (t>0)
	{
		int N,P,Q,x[1100];

		cin>>N>>P>>Q;

		for(int i=0;i<N;i++)
			cin>>x[i];

		///////////ARRANGING ARRAY (SORTING) --->HERE ASCENDING FOR EXAMPLE//////////////

		for(int i=0;i<N;i++)
			for(int j=1;j<(N-i);j++)
			{
				if (x[i]>x[i+j]) /////Swapping
				{int temp=x[i];
				x[i]=x[i+j];
				x[i+j]=temp;
				}
			}

			//////////////////////END OF SORTING///////////////////////////////////////
			int count=0;
			int i=0;
			int sum=0;

			for(i=0;i<N;i++)
			{
				int temp=sum+x[i];

				if (temp<=Q)
				{sum=sum+x[i];
				count++;}


				if (temp>Q)break;

				if (sum==Q)break;

			}


			int eggs=count;
			if (eggs>P)
				eggs=P;

			cout<<"Case "<<kase++<<": "<<eggs<<endl;

			t--;
	}





	return 0;
}
