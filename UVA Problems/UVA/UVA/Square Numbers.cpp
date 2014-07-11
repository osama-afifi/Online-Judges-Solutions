#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	long long int x,y,i,z;

	while(cin>>x>>y )
	{

		if (x==0 &&y==0)
			break;

		int count=0;

		for(i=1;i<=y;i++)
		{z=i*i;
			if (z>=x && z<=y)
		count++;}
		
		cout<<count<<endl;
	}

	return 0;
}

//#include <iostream>
//#include <iomanip>
//#include <math.h>
//
//using namespace std;
//int main ()
//{
//	freopen("input.in", "r", stdin);
//
//	int x,y,i,z;
//
//	while(cin>>x>>y &&x!=0 &&y!=0 )
//	{
//		int count=0;
//
//		for(i=x;i<=y;i++)
//		{ sqrt(i) ;
//
//			if (i==(z*z))
//		count++;}
//		
//		cout<<count<<endl;
//	}
//
//	return 0;
//}
