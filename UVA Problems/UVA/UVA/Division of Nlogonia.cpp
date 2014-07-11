#include <iostream>


using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int K,N,M;

	while (true)
	{
		cin>>K;
		cin>>N>>M;
		if (K==0)break;
		while (K>0)
		{

			//////////////////////////
			
			long int x,y;
			cin>>x>>y;


			if ((x>N)&&(y>M))
				cout<<"NE"<<endl;

			else if ((x<N)&&(y>M))
				cout<<"NO"<<endl;

			else if ((x<N)&&(y<M))
				cout<<"SO"<<endl;

			else if ((x>N)&&(y<M))
				cout<<"SE"<<endl;

			else if ((x==N)||(y==M))
				cout<<"divisa"<<endl;

			else 
				cout<<"divisa"<<endl;




			//////////////////////////
			K--;
		}
	}
	return 0;
}