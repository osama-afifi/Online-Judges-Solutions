//#include <iostream>
//#include <cstring>
//#include <string>
//#include <string.h>
//#include <math.h>
//
//
//using namespace std;
//
//
//
//int MAP[11][11];
//bool VIS[31][81];
//int movex[]={-1,0,1,0};
//int movey[]={0,1,0,-1};
//int h;
//int dx,dy;
//char ch;
//int n;
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	//	freopen("output.out","w",stdout);
//	int kase=0;
//
//	while(cin>>n)
//	{
//		if(!n)break;
//
//		for(int i=0;i<n;i++)
//			for(int j=0;j<n;j++)
//				cin>>MAP[i][j];
//
//		cout<<"Case "<<++kase<<":";
//
//			if(n==1)
//			{
//				cout<<" "<<MAP[0][0]<<endl;
//				continue;
//			}
//				for(int shift=0 ; shift < ceil((double)n/2.0) ; shift++)
//				{
//
//					int sum=0;
//					for(int i=shift;i<n-shift;i++)
//					{
//						sum+=MAP[n-1-shift][i];
//						sum+=MAP[shift][i];	
//					}
//					for(int i=shift;i<n-shift;i++)
//					{
//						sum+=MAP[i][n-1-shift];
//						sum+=MAP[i][shift];
//					}
//
//					sum-= (MAP[shift][shift] + MAP[n-shift-1][shift] + MAP[shift][n-shift-1] );
//					if(shift!=n/2)
//						sum-= MAP[n-shift-1][n-shift-1];
//
//					cout<<" "<<sum;
//				}
//				cout<<endl;
//	}
//
//
//	return 0;
//}