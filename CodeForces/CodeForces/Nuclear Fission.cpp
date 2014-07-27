//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<sstream>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//string table[]={"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md"};
//char dp[17][101][1<<17];
//int n,k;
//map<string,int>M;
//int arr[20];
//int target[20];
//vector< vector<int> >P;
//
//bool solve(int done ,int sum, int mask)
//{
//	if(sum>100)
//		return 0;
//	if(done==k)
//		return 1;
//	if(target[done]==sum)
//		return solve(done+1,0,mask);
//	if(dp[done][sum][mask]!=-1)
//		return dp[done][sum][mask];
//	bool b=0;
//	FOR(i,0,n)
//		if(!(mask & (1<<i)))
//			b|=solve(done,sum+arr[i],mask | (1<<i));
//	//vis[done][sum][mask]=1;
//	return dp[done][sum][mask]=b;
//}
//
//void print(int done ,int sum, int mask)
//{
//	if(done==k)
//	{
//		FOR(i,0,k)
//		{
//			FOR(j,0,P[i].size())
//			{
//				if(j)
//					cout<<"+";
//				cout<<table[arr[P[i][j]]-1];
//			}
//			cout <<"->"<<table[target[i]-1]<<"\n";
//		}
//		return;
//	}
//	if(target[done]==sum)
//		if(solve(done+1,0,mask))
//		{
//			print(done+1,0,mask);
//			return;
//		}
//
//		FOR(i,0,n)
//			if(!(mask & (1<<i)))
//				if(solve(done,sum+arr[i],mask | (1<<i)))
//				{
//					P[done].push_back(i);
//					print(done,sum+arr[i],mask | (1<<i));
//					break;
//				}
//}
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	FOR(i,0,101)
//		M[table[i]] = i+1;
//
//	while(cin>>n>>k)
//	{
//		Set(dp,-1);
//		P.clear();
//		P.resize(k);
//		string s;
//		FOR(i,0,n)
//		{
//			cin>>s;
//			arr[i] = M[s];
//		}
//		FOR(i,0,k)
//		{
//			cin>>s;
//			target[i] = M[s];
//		}
//		int res = solve(0,0,0);
//		if(res)
//		{
//			cout<<"YES\n";
//			print(0,0,0);
//		}
//		else
//		{
//			cout<<"NO\n";
//		}
//
//
//	}
//
//	return 0;
//}