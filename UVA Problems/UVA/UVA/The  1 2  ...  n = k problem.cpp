//#include <iostream>
//#include <math.h>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//#include <limits>
//using namespace std;
//
//int Max_Index = 11;
//
//int summ(int n)
//{
//	return (n*n+n)/2;
//}
//
//
//int main () {
//	freopen( "input.in" , "r" , stdin );
//	int t;
//	cin >> t;
//	long long n;
//	while (t--)
//	{
//		long long x;
//		cin>>x;
//		if(x==0)
//		{
//			cout<<3<<endl;
//			if(t!=0)cout<<endl;
//		}
//		else
//		{
//			x=abs(x);
//			n=floor(floor((-1 + sqrt((double) (1.0 +8*x)) ))/2.0);
//			while(true)
//			{
//				if(summ(n)<x){
//					n++;
//					continue;
//				}
//				if((summ(n)-x)%2==0)
//					break;
//				n++;
//			}
//
//			cout<<n<<endl;
//			if(t!=0)cout<<endl;
//		}
//	}
//	return 0;
//}
//
//
//
