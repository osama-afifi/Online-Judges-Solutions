//#include<iostream>
//#include <algorithm>
//using namespace std;
//int main ()
//{
//	freopen("input.in", "r", stdin);
//	int n , x[100] , c=1;
//	bool b;
//	long long a;
//	int * p;
//	while (cin >>n)
//	{
//		b=true;
//		for (int i=0 ; i<n ; i++)
//			cin>> x[i];
//		for (int i=0 ; i<n ; i++)
//		{
//			for (int j=i+1 ; j <n ; j++)
//			{
//				a=(x[i]+x[j]);
//				if (a>1000)
//					continue;
//				p=find(x,x+n , a);
//				p++;
//				if (p <= &x[n-1])
//				{
//					b=false;
//					break;
//				}
//			}
//			if (b==false )
//				break;
//		}
//
//		
//		if (b==true)
//			cout <<"Case #"<<c<<": It is a B2-Sequence."<<endl;
//		else
//			cout <<"Case #"<<c<<": It is not a B2-Sequence."<<endl;
//		c++;
//
//		cout <<endl;
//	}
//	return 0;
//}