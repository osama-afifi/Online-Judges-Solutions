#include <iostream>


using namespace std;

int main()
{
	freopen("input.in", "r", stdin);

	int m,n;

	while (cin>>m>>n)
	{

		int x=m;
		int y=n;

		if (x==0 &&y==0)break;

		int res;

		if (y<x)
			swap(x,y);

		int z=y/2;

		if(x<=0)
			res=0;

		else if(x==1)
			res=y;

		else if(x==2)
		{
			if(y%4==0)
				res=y;

			else if(y%4==1 || y%4==3 )
				res=y+1;

			else
				res=y+2;


		}

	//else 
	//res=((x+1)/2)*((y+1)/2) + (x/2)*(y/2);

		else if (y%2==1)
			res=(z*x)+((x+1)/2);

		else
			res=(z*x);

		//else	res=((x*y)+1)/2;

	

		cout<<res<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;

	}


	return 0;
}