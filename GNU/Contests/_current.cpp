#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define  Set(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;

int teacher[209];
int arr[209][209];
vector< vector<int> >G;

const int MAX = 409;

struct SCC
{
	int SCC;
    int zatouna=0;
	int nodelow[MAX];
	int nodeindex[MAX];
	bool vis[MAX];
	int component[MAX];
	int degree[MAX];
	stack<int>S;

	void tarjanSCC(int cur)
	{
		nodeindex[cur]=nodelow[cur]=zatouna++;
		vis[cur]=1;
		S.push(cur);
		FOR(i,0,G[cur].size())
		{
			int v=G[cur][i];
			if(nodeindex[v]==-1)
				tarjanSCC(v);
			if(vis[v])
				nodelow[cur]=min(nodelow[cur],nodelow[v]);
		}

		if(nodeindex[cur]==nodelow[cur]) //SCC Root Found
		{
			while(1)
			{
				int v=S.top();
				component[v]=SCC;
				vis[v]=0;
				S.pop();
				if(v==cur)break;
			}
			SCC++;
		}

	}

	void init()
	{
		Set(degree,0);
		zatouna=SCC=0;
		int n1,n2;
		while(!S.empty())S.pop();
		Set(vis,0);
		Set(nodelow,0);
		Set(nodeindex,-1);

	}

	void getSCC()
	{
	    for(int i = 0 ; i<G.size() ; i++)
            if(!vis[i])
                tarjanSCC(i);
	}

};


__inline int neg(int i)
{
    return i^1;
}

int n;
void init(int T)
{
    G.clear();
    G.resize(2*n+2);
    FOR(i,0,n)
        FOR(j,T,n)
        {
            if(teacher[i]!=teacher[arr[i][j]])
            {
            G[neg(2*i)].pb(arr[i][j]);
            G[arr[i][j]].pb(2*i);
            }
        }

}

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r", stdin);

    int T;
    while(cin>>n>>T)
        {
            FOR(i,0,n)
                FOR(j,0,n)
                {
                    int num;cin>>num;
                    if(j)
                        arr[i][j]=num-1;
                    else
                        teacher[i]=num;
                }

             bool ok=1;
             int res=-1;

            for(int i=T;i>=0 ; i--)
            {
                init(i);
                SCC S;
                S.init();
                S.getSCC();
                for(int i = 0 ; i<n ; i++)
                    if(S.component[2*i]==S.component[neg(2*i)])
                    {
                        ok=0;
                        break;
                    }
                if(ok)
                {
                    res=i;break;
                }
            }
            cout << n-res <<endl;

    }

    return 0;
}

