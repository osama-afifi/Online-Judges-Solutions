//#include <iostream>
//#include <string>
//#include <cstring>
//#include <math.h>
//#include <stdio.h>
//#include <sstream>
//
//using namespace std;
//
//int forest[150];
//bool hear[150][150];
//
//int t,P,T,x,y;
//
//bool heared(int x , int y)
//{
//	for(int i = 1 ; i<=T ; i++)
//		if(hear[x][i]!=hear[y][i])return false;
//	return true;
//}
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
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	string text;
//	
//	cin>>t;
//	cin.ignore();
//	while(t--)
//	{
//		getline(cin,text);
//		memset(hear,0,sizeof hear);
//		if(text=="")
//		{t++;continue;}
//
//
//		stringstream ss;
//		ss<<text;
//		ss>>P>>T;
//
//		for(int i = 1 ; i<=P ; i++)
//			forest[i]=i;
//
//
//		int m=0;
//
//		while(getline(cin,text))
//		{
//			if(text=="")break;
//
//			stringstream ss;
//			ss<<text;
//			ss>>x>>y;
//
//			hear[x][y]=1;
//
//		}
//
//		for(int i = 1 ; i<=P ; i++)
//			for(int j = i+1 ; j<=P ; j++)
//				if(!isUnion(i,j) && heared(i,j))
//					makeUnion(i,j);
//
//		int counter=0;
//		for(int i =1 ; i<=P; i++)
//			if(forest[i]==i)
//				counter++;
//
//		if(!t)cout<<endl;
//
//		cout<<counter<<endl;
//	}
//
//	return 0;
//}