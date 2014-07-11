//#include <iostream>
//
//using namespace std;
//int main ()
//{
//	freopen("input.in", "r", stdin);
//	long long x,y;
//
//	while(cin>>x && x>0)
//	{
//		int q,h;
//		if (x<10)
//			{cout<<x;
//		break;}
//
//		int z=0;
//		while (x!=0)
//		{
//		z=z+x%10;
//		x=x/10;
//		}
//
//		if (z<10)
//		{q=z;
//		goto result;}
//		
//
//
//		int y=0;
//		while (z!=0 )
//		{
//		y=y+z%10;
//		z=z/10;
//		}
//
//		if (y<10)
//		{q=y;
//		goto result;}
//
//		q=0;
//		while (y!=0 )
//		{
//		q=q+y%10;
//		y=y/10;
//		}
//
//
//
//		result:
//		cout<<q<<endl;
//
//	}
//	return 0;
//}