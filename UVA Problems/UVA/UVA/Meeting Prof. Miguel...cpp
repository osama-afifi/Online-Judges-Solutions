//#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//int o[200][200];
//int y[200][200];
//
//int const oo = 1<<29;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n,cost;
//	char age,dir,n1,n2,s,t;
//
//	while(cin>>n)
//	{
//		if(!n)break;
//
//		for(int i =0 ; i<200 ; i++)
//		{
//			for(int j =0 ; j<200 ; j++)
//				o[i][j]=y[i][j]=oo;
//			o[i][i]=y[i][i]=0;
//		}
//
//		map<char,int> M;
//		int index=0;
//		for(int i=0 ; i<n ; i++)
//		{
//			cin>>age>>dir>>n1>>n2>>cost;
//
//			if(M.find(n1)==M.end())
//				M[n1]=index++;
//
//			if(M.find(n2)==M.end())
//				M[n2]=index++;
//
//			if(age=='Y')
//			{
//				y[M[n1]][M[n2]]=min(y[M[n1]][M[n2]],cost);
//				if(dir=='B')
//					y[M[n2]][M[n1]]=min(y[M[n2]][M[n1]],cost);
//			}
//			else if(age=='M')
//			{
//				o[M[n1]][M[n2]]=min(o[M[n1]][M[n2]],cost);
//				if(dir=='B')
//					o[M[n2]][M[n1]]=min(o[M[n2]][M[n1]],cost);
//			}
//		}
//		cin>>s>>t;
//		bool valid=true;
//		if (M.find(s)==M.end() || M.find(t)==M.end())
//			valid=false;
//		if (s==t && (M.find(s)==M.end() || M.find(t)==M.end()))
//		{
//		cout<<0<<" "<<s<<endl;
//		continue;	
//		}
//
//		for(int k =0 ; k<index ; k++)
//			for(int i =0 ; i<index ; i++)
//				for(int j =0 ; j<index ; j++)
//				{
//					if(y[i][k]+y[k][j]<y[i][j])
//						y[i][j]=y[i][k]+y[k][j];
//
//					if(o[i][k]+o[k][j]<o[i][j])
//						o[i][j]=o[i][k]+o[k][j];		
//				}
//
//
//				int mini=oo;
//				int res[200];
//				int m=0;
//				for(int i =0 ; i<index ; i++)
//					if(y[M[s]][i]+o[M[t]][i]<mini)
//					{
//						mini=y[M[s]][i]+o[M[t]][i];
//						m=0;
//						res[m++]=i;
//					}
//					else if(y[M[s]][i]+o[M[t]][i]==mini)
//						res[m++]=i;
//
//				map<char,int> ::iterator it;
//				vector<char> V;
//
//				if(mini<oo && valid )
//				{
//					cout<<mini;
//					for(int i =0 ; i<m ; i++)
//						for(it=M.begin() ; it!= M.end() ; it++)
//							if(it->second==res[i])
//								V.push_back(it->first);
//
//					sort(V.begin(),V.end());
//
//					for(int i =0 ; i<V.size() ; i++)
//						cout<<" "<<V[i];
//
//					cout<<endl;
//				}
//				else
//					puts("You will never meet.");
//
//	}
//
//	return 0;
//}