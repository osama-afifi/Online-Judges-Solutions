//#include <iostream>
//#include <string>
//#include <map>
//#include <cstring>
//#include <math.h>
//#include <stdio.h>
//#include <sstream>
//
//using namespace std;
//
//int forest[5006];
//
//int C,R;
//
//int getforest(int i)
//{
//if(forest[i]==i)return i;
//else return forest[i]=getforest(forest[i]);
//}
//
//void makeUnion(int a , int b)
//{
//forest[getforest(a)]=getforest(b);
//}
//
//bool isUnion(int a , int b)
//{
//return getforest(a)==getforest(b);
//}
//
//int sum[5006];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	string text,s1,s2;
//
//	while(cin>>C>>R)
//	{
//		if(!C && !R)break;
//
//			for(int i = 0 ; i<=C ; i++){
//			forest[i]=i;
//			sum[i]=0;
//			}
//		map <string,int> M;
//
//		int index=0;
//
//		for(int i = 0 ; i<C ; i++){
//		cin>>text;
//		if(M.find(text)==M.end())
//			M[text]=index++;
//		}
//
//		for(int i = 0 ; i<R ; i++){
//			cin>>s1>>s2;
//			if(!isUnion(M[s2],M[s1]))
//			makeUnion(M[s2],M[s1]);
//		}
//		
//		for(int i = 0 ; i<C ; i++)
//			sum[getforest(i)]++;
//
//		int maxi=0;
//
//		for(int i = 0 ; i<C ; i++)
//			if(sum[i]>maxi)
//				maxi=sum[i];
//
//		printf("%d\n",maxi);
//
//	}
//
//	return 0;
//}