//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//
//using namespace std;
//int findi(vector<string> V , string val)
//{
//	for(int i = 0 ; i<V.size() ; i++)
//		if(V[i]==val)
//			return i;
//	return -1;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	string text;
//	map<string,int>X;
//	X["S"]=-1;
//	X["F"]=1;
//	X["GF"]=2;
//	X["GGF"]=3;
//	X["GS"]=-2;
//	X["GSS"]=-3;
//
//	//	S = Son
//	//
//	//F = Father
//	//
//	//GF = Grand father
//	//
//	//GS = Grandson
//	//
//	//GGF = Great Grandfather
//	//
//	//GGS = Great Grandson
//	int kase=0;
//	scanf("%d",&t);
//	while(t--)
//	{
//		int n,m;
//		cin>>n;
//		cin.ignore();
//		int index=1;
//		map<string,string>M;
//		for(int i = 0 ; i< n ; i++)
//		{
//			getline(cin,text);
//			M[text.substr(0,text.find('='))]=text.substr(text.find('=')+1);
//		}
//		cin>>m;
//
//		string s1,s2,op;
//		map<string,int>R;
//		map<string,int>::iterator iter;
//		queue< pair< pair<string,string> , string > >Q;
//
//		for(int i = 0 ; i< m ; i++)
//		{
//			cin>>s1>>op>>s2;
//			Q.push(make_pair(make_pair(s1,s2),op));
//		}
//
//		pair< pair<string,string> , string > cur;
//		bool first=1;
//		vector<string>C(300);
//
//		while(!Q.empty())
//		{
//			cur=Q.front();
//			Q.pop();
//			if(first)
//			{
//				if(cur.second=="S")
//				{
//					C[findi(C,cur.first.first)]=cur.first.first;
//					C[151]=cur.first.second;
//				}
//				else if(cur.second=="GS")
//				{
//					C[150]=cur.first.first;
//					C[152]=cur.first.second;
//				}
//				else if(cur.second=="GGS")
//				{
//					C[150]=cur.first.first;
//					C[153]=cur.first.second;
//				}
//				else if(cur.second=="F")
//				{
//					C[151]=cur.first.first;
//					C[150]=cur.first.second;
//				}
//				else if(cur.second=="GF")
//				{
//					C[152]=cur.first.first;
//					C[150]=cur.first.second;
//				}
//				else if(cur.second=="GGF")
//				{
//					C[153]=cur.first.first;
//					C[150]=cur.first.second;
//				}
//
//				first=0;
//			}
//				if(cur.second=="S")
//				{
//					C[C]=cur.first.first;
//					C[151]=cur.first.second;
//				}
//				else if(cur.second=="GS")
//				{
//					C[150]=cur.first.first;
//					C[152]=cur.first.second;
//				}
//				else if(cur.second=="GGS")
//				{
//					C[150]=cur.first.first;
//					C[153]=cur.first.second;
//				}
//				else if(cur.second=="F")
//				{
//					C[151]=cur.first.first;
//					C[150]=cur.first.second;
//				}
//				else if(cur.second=="GF")
//				{
//					C[152]=cur.first.first;
//					C[150]=cur.first.second;
//				}
//				else if(cur.second=="GGF")
//				{
//					C[153]=cur.first.first;
//					C[150]=cur.first.second;
//				}
//
//			//if(first)
//			//{R[cur.first.first]=R[cur.first.second]+X[cur.second];first=0;}
//			//else if(R.find(cur.first.first)==R.end() && R.find(cur.first.second)==R.end() )
//			//	Q.push(make_pair(make_pair(cur.first.first,cur.first.second),cur.second));
//			//else if(R.find(cur.first.first)==R.end() )
//			//R[cur.first.first]=R[cur.first.second]+X[cur.second];
//			//else if(R.find(cur.first.second)==R.end())
//			//R[cur.first.second]=R[cur.first.first]-X[cur.second];
//			//else
//			//		R[cur.first.first]=R[cur.first.second]+X[cur.second];
//
//		}
//		vector< pair<int,string> >V;
//
//		for(iter=R.begin() ; iter!=R.end() ; iter++)
//			V.push_back(make_pair(iter->second,M[iter->first]));
//
//		sort(V.begin(),V.end());
//
//		cout<<"Case #"<<++kase<<":";
//		for(int i = 0 ; i<V.size() ; i++)
//			cout<<" "<<V[i].second;
//		cout<<endl;
//	}
//
//
//
//	return 0;
//}
//
////#include <iostream>
////#include <algorithm>
////#include <stdio.h>
////#include <cstring>
////#include <string>
////#include <sstream>
////#include <vector>
////#include <map>
////#include <queue>
////
////using namespace std;
////int main()
////{
////	freopen("input.in","r",stdin);
////	int t;
////	string text;
////	map<string,int>X;
////	X["S"]=-1;
////	X["F"]=1;
////	X["GF"]=2;
////	X["GGF"]=3;
////	X["GS"]=-2;
////	X["GSS"]=-3;
////
//////	S = Son
//////
//////F = Father
//////
//////GF = Grand father
//////
//////GS = Grandson
//////
//////GGF = Great Grandfather
//////
//////GGS = Great Grandson
////	int kase=0;
////	scanf("%d",&t);
////	while(t--)
////	{
////		int n,m;
////		cin>>n;
////		cin.ignore();
////		int index=1;
////		map<string,string>M;
////		for(int i = 0 ; i< n ; i++)
////		{
////			getline(cin,text);
////			M[text.substr(0,text.find('='))]=text.substr(text.find('=')+1);
////		}
////		cin>>m;
////		
////		string s1,s2,op;
////		map<string,int>R;
////		map<string,int>::iterator iter;
////		queue< pair< pair<string,string> , string > >Q;
////
////		for(int i = 0 ; i< m ; i++)
////		{
////			cin>>s1>>op>>s2;
////				Q.push(make_pair(make_pair(s1,s2),op));
////		}
////
////		pair< pair<string,string> , string > cur;
////		bool first=1;
////
////		while(!Q.empty())
////		{
////			cur=Q.front();
////			Q.pop();
////			if(first)
////			{R[cur.first.first]=R[cur.first.second]+X[cur.second];first=0;}
////			else if(R.find(cur.first.first)==R.end() && R.find(cur.first.second)==R.end() )
////				Q.push(make_pair(make_pair(cur.first.first,cur.first.second),cur.second));
////			else if(R.find(cur.first.first)==R.end() )
////			R[cur.first.first]=R[cur.first.second]+X[cur.second];
////			else if(R.find(cur.first.second)==R.end())
////			R[cur.first.second]=R[cur.first.first]-X[cur.second];
////			else
////					R[cur.first.first]=R[cur.first.second]+X[cur.second];
////	
////		}
////		vector< pair<int,string> >V;
////
////		for(iter=R.begin() ; iter!=R.end() ; iter++)
////			V.push_back(make_pair(iter->second,M[iter->first]));
////
////		sort(V.begin(),V.end());
////
////		cout<<"Case #"<<++kase<<":";
////		for(int i = 0 ; i<V.size() ; i++)
////			cout<<" "<<V[i].second;
////		cout<<endl;
////	}
////
////	return 0;
////}
