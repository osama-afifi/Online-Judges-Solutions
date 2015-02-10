#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;

const oo = (int)1e9;
int cost[20][20];
bool done[20][20];
int dp[1<<13][1<<13];
vector<vector<int> >V;
vector< pair<int,int> >E;

int CC=0;
int dfs(int u)
{
    if(comp[u]!=-1)
        return;
comp[u]=CC:
            FOR(i,0,V[u].size())
    {
        int v= V[u][i];
        dfs(v);
    }
}

int solve(int deg, int comp)
{
    if(!(deg|comp))
        return 0;
    FOR(i,0,n)
}

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r" , stdin);

    int n,r;
    while(cin>>n>>r)
    {
        Set(done,0);
        V.clear();
        V.resize(n);
        FOR(i,0,n)FOR(j,0,n)cost[i][j]=oo;
        int par=0,sum=0;
        FOR(i,0,r)
        {
            int a,b,c;
            cin>>a>>b>>c;
            --a,--b;
            V[a].pb(b);
            V[b].pb(a);
            cost[a][b] = c;
            cost[b][a] = c;
            done[a][b] = 1;
            done[b][a] = 1;
            par ^= (1<<a);
            par ^= (1<<b);
            sum +=c;
        }
        CC=0;
        Set(comp,-1);
        FOR(i,0,n)
        if(comp[i]==-1)dfs(i),CC++;
        int f;
        cin>>f;
        FOR(i,0,f)
        {
            int a,b,c;
            cin>>a>>b>>c;
            --a,--b;
            cost[a][b] = min(cost[a][b],c);
            cost[b][a] = min(cost[b][a],c);
            V[a].pb(b);
            V[b].pb(a);
        }


    }
    return 0;
}


