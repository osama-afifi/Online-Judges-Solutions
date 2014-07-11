//#include <iostream> 
//#include <math.h> 
//#include <string>
//
//using namespace std;
//
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	unsigned long N;
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		cin>>N;
//		unsigned long Z=ceil(((-1+sqrt((double)1+(8*N))))/2);
//		unsigned long X=((((Z-1)*(Z-1))+(Z-1)))/2;
//
//		unsigned long Q=N-X;
//		if(Q==0)	Q=Z;
//		
//		if(Z%2==0)
//			cout<<"TERM "<<N<<" IS "<<Q<<"/"<<(Z-Q)+1<<endl;
//		else
//			cout<<"TERM "<<N<<" IS "<<(Z-Q)+1<<"/"<<Q<<endl;
//	
//	}
//
//
//return 0;
//}