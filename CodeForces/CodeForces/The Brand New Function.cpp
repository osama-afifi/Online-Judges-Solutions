#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define pb push_back
#define all(v) (v.begin(), v.end())
typedef long long LL;
using namespace std;
LL MOD = 1e9+7;

int arr[100009];
bool vis[1<<21];
int nxt[100009][20];

int main()
{
   // ios_base::sync_with_stdio(0);
    freopen("input.in", "r", stdin);

    int n;
    while(scanf("%d",&n)==1)
    {
        FOR(i,0,n)scanf("%d",arr+i);
        FOR(j,0,20)
            nxt[n][j]=nxt[n-1][j]=n;
        for(int i=n-1 ; i>=0 ; i--)
        {
            FOR(j,0,20)
            {
                if(arr[i] & (1<<j))
                    nxt[i][j] = i;
                else
                    nxt[i][j] = nxt[i+1][j];
            }
        }

        int res=0;
        FOR(i,0,n)
        {
            int cur=arr[i];
            if(!vis[cur])++res,vis[cur]=1;
            int q=i+1;

            while(q<n)
            {
                int min_idx=n;
                FOR(j,0,20)
                if(min_idx>nxt[q][j])
                        min_idx=nxt[q][j];
                if(min_idx>=n)break;
                cur |= arr[min_idx];
                if(!vis[cur])++res, vis[cur]=1;;
                q=min_idx+1;

            }
        }


       printf("%d\n", res);
    }


    return 0;
}
