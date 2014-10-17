//#include <bits/stdc++.h>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//
//using namespace std;
//string s1,s2;
//double R,P,S;
//map<char,int>M;
//map<char,char>B;
//int win(char c1 , char c2)
//{
//    if(c1==c2)
//        return 0;
//    if(c1=='R' && c2=='S')
//        return 1;
//    if(c1=='S' && c2=='P')
//        return 1;
//    if(c1=='P' && c2=='R')
//        return 1;
//    return 2;
//}
//
//double cost(int p)
//{
//    if(p==2)
//        return -1;
//    return p;
//}
//
//double dp[10009][5][5];
//bool vis[10009][5][5];
//double solve(int idx, int w, char p)
//{
//    if(idx==s1.size())
//        return 0;
//    if(vis[idx][w][M[w]])
//        return dp[idx][w][M[w]];
//    vis[idx][w][M[w]]=1;
//        double ret=0;
//    if(idx==0 || w==0)
//    {
//        ret += solve(idx+1, win('R',s2[idx]) ,'R')*R + cost(win('R',s2[idx]))*R;
//        ret += solve(idx+1, win('P',s2[idx]) ,'P')*P + cost(win('P',s2[idx]))*P;
//        ret += solve(idx+1, win('S',s2[idx]) ,'S')*S + cost(win('S',s2[idx]))*S;
//    }
//    else if(w==2)
//    {
//        ret +=  solve(idx+1, win(B[s2[idx-1]],s2[idx]) , B[s2[idx-1]]) + cost(win(B[s2[idx-1]],s2[idx]));
//    }
//    else
//        ret +=  solve(idx+1, win(B[p],s2[idx]) , B[p]) + cost(win(B[p],s2[idx]));
//    return dp[idx][w][M[w]]=ret;
//}
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.txt", "r" , stdin);
//	int t;
//	cin>>t;
//	M['R']=0;
//	M['P']=1;
//	M['S']=2;
//	M['$']=3;
//    B['R']='P';
//	B['P']='S';
//	B['S']='R';
//	while(t--)
//	{
//	    Set(vis,0);
//	    cin>>s1>>s2;
//	    int a=0;
//	    FOR(i,0,s1.size())
//	    {
//	        a += cost(win(s1[i],s2[i]));
//	    }
//        cin>>R>>P>>S;
//        R/=100.0;
//        P/=100.0;
//        S/=100.0;
//        double res = solve(0,0,'$');
//        cout << a << " " << setprecision(4) << fixed << res << " " << ((res>a) ? 'Y' : 'N') <<endl;
//    }
//	return 0;
//}
