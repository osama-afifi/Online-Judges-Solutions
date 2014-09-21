//#include <iostream>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <math.h>
//#include <stdio.h>
//#include <iomanip>
//#include <vector>
//#include <set>
//#include <map>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//#define FOR(i,a,b) for(int i=a ; i<b ; i++)
//#define Set(a,v) memset(a,v,sizeof(a))
//#define mp make_pair
//
////int arr[25];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		map<int,int>M;
//		map<int,int>org;
//	
//		int num;
//		
//		FOR(i,0,14)
//			cin>>num,M[num]++;
//		org=M;
//
//		//sort(arr,arr+14);
//		//bool b = solve(0,0,0,0);
//		bool b=0;
//		for(int k=1;k<=9 ; k++)
//		{
//			M=org;
//			if(M[k]>=2)
//			{
//				M[k]-=2;
//
//				for(int i=1;i<=9 ; i++)
//				{
//					while(M[i])
//					{
//						if(M[i]>=3)
//							M[i]-=3;
//						if(M[i]>0 && M[i+1]>0 && M[i+2]>0)
//							M[i]--,M[i+1]--,M[i+2]--;
//						else break;
//					}
//				}
//	
//				int sum=0;
//				FOR(i,1,10)
//					sum+=M[i];
//				b |= (sum==0);
//				if(b)break;
//				M[k]+=2;
//			}
//		}
//			if(b)
//				cout << "Vulnerable" <<endl;
//			else
//				cout << "Immune" <<endl;
//	}
//
//	return 0;
//}