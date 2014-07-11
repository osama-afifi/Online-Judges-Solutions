# include <iostream>
# include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{	freopen("input.in", "r", stdin);
int swap; /////////-------> 0 for false swap //////// 1 for true swap
long long x,y,count,n,z;
while(cin>>x>>y)
{

	if(y>=x)
	swap=0;///false

	else if(x>y)
	{z=x;
	x=y;
	y=z;
	swap=1;///true
	}

	n=x;
	int max=0,z=0;
	while(n<=y)
	{


		///////////////////////////////
		for (count=1;(n>0);count++)
		{
			if(n==1)
				break;
			if (n%2==1)
				n=(3*n)+1;

			else if (n%2==0)
				n=(n/2);

			else if(n==1)
				break;

		}
		////////////////////////////////

		n=x;
		z++;
		n=n+z;
		if (count>max)
			max=count;
	}
	
	if (swap==0)
	cout<<x<<" "<<y<<" "<<max<<endl;
	else if (swap==1)
	cout<<y<<" "<<x<<" "<<max<<endl;

}

cin.get();
return 0;
}
