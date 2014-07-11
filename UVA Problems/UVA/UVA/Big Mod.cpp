//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//long square(long x)
//{
//	return x*x;
//}
//int BigMod(int B,int P, int M)
//{
//	if(P==0)
//		return 1;
//	else if(P%2==0)
//		return square((BigMod(B,P/2,M)))%M;
//	else
//	return (B%M)*(BigMod(B,P-1,M))%M;
//
//
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	long long B,M;
//	double P;
//	while(cin>>B>>P>>M)
//	{
//		cout<<BigMod(B,P,M)<<endl;
//	}
//
//return 0;
//}
