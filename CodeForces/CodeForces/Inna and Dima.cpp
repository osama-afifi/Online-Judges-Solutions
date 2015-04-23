#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define pb push_back
#define all(v) (v.begin(), v.end())
typedef long long LL;
using namespace std;
LL MOD = 1e9+7;

int n,m;
char arr[1009][1009];
int vis[1009][1009];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
string dima = "DIMA";
bool ok=1;
int dp[1009][1009];
int dfs(int i , int j, int pi, int pj, int idx)
{
    if(!ok)return -1e9;
    if(vis[i][j]==2)return dp[i][j];
    if(vis[i][j]==1)
    {
       // if(arr[i][j]=='D')
            ok=0;
        return 0;
    }
    vis[i][j]=1;
    int maxi=1;
    FOR(k,0,4)
    {
        int ni = i+dx[k];
        int nj = j+dy[k];
        if(ni<0 || nj<0 || ni>=n || nj>=m)continue;
        if(arr[ni][nj]!=dima[(idx+1)%4])continue;
        if(ni==pi && nj==pj)continue;
        maxi = max(maxi,dfs(ni,nj, i , j, idx+1)+1);
    }
    vis[i][j]=2;
    return dp[i][j]=maxi;
}


int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.in", "r", stdin);

    while(cin>>n>>m)
    {
        FOR(i,0,n)FOR(j,0,m)cin>>arr[i][j];
        int maxi=0;
        ok=1;
        Set(vis,0);
        FOR(i,0,n)FOR(j,0,m) if(arr[i][j]=='D')maxi = max(maxi,dfs(i,j,-1,-1,0));
        maxi = (maxi)/4;
        if(ok)
        {
            if(maxi==0)
                cout << "Poor Dima!\n";
            else
                cout << maxi <<"\n";
        }
        else
           cout << "Poor Inna!\n" ;
    }

    return 0;
}
