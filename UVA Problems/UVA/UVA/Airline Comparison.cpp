//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <math.h>
//#include <map>
//
//using namespace std;
//
//int const oo = 1<<25;
//
//int d1[203][203];
//int d2[203][203];
//
//int t,n,m,n1,n2,cost,kase=0;
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int main()
//{
//	bool first=true;
//
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		for(int i = 0 ; i< 200 ; i++){
//			for(int j = 0 ; j< 200 ; j++)
//				d1[i][j]=d2[i][j]=0;
//			d1[i][i]=d2[i][i]=0;
//		}
//
//		cin>>n;
//
//		map <char,int> M1;
//		map <char,int> M2;
//		char n1,n2;
//		int index1=0;
//		for(int i = 0 ; i< n ; i++)
//		{
//			cin>>n1>>n2;
//
//			if(M1.find(n1)==M1.end())
//				M1[n1]=index1++;
//			if(M1.find(n2)==M1.end())
//				M1[n2]=index1++;
//
//			d1[M1[n1]][M1[n2]]=1;
//			d1[M1[n2]][M1[n1]]=1;
//
//		}
//
//		cin>>m;
//		int index2=0;
//
//		for(int i = 0 ; i< m ; i++)
//		{
//			cin>>n1>>n2;
//
//			if(M2.find(n1)==M2.end())
//				M2[n1]=index2++;
//			if(M2.find(n2)==M2.end())
//				M2[n2]=index2++;
//
//			d2[M2[n1]][M2[n2]]=1;
//			d2[M2[n2]][M2[n1]]=1;
//
//		}
//
//
//
//		for(int k = 0 ; k< index1 ; k++)
//			for(int i = 0 ; i< index1 ; i++)
//				for(int j = 0 ; j< index1 ; j++)
//					d1[i][j]|=(d1[i][k] && d1[k][j]);
//
//		for(int k = 0 ; k< index2 ; k++)
//			for(int i = 0 ; i< index2 ; i++)
//				for(int j = 0 ; j< index2 ; j++)
//					d2[i][j]|=(d2[i][k] && d2[k][j]);
//
//
//		bool same=true;
//
//
//		//if(index1!=index2)
//		//	same=false;
//
//		int maxi=max(index1,index2);
//
//		if(same)
//		{
//			for(int i = 0 ; i< maxi ; i++)
//				for(int j = 0 ; j< maxi ; j++)
//					if(d1[i][j]!=d2[i][j])
//					{same=false;break;}
//		}
//
//		if(same)
//			puts("YES");
//		else
//			puts("NO");
//
//		if(t)putchar('\n');
//	}
//	return 0;
//}
//
