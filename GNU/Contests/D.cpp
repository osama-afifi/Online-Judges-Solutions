#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;

int n,k;
bool vis[51][51];
int arr[51][51];
//int sx,sy;
int maxi=0;
int dx[]={1,-1,0,0 ,1 ,1, -1, -1};
int dy[]={0,0,-1,1 ,-1,1,1,-1};
int c=0;
int sum=0;
void solve(int i ,int j)
{
    if(i<=0 || j<=0 || i>n || j>n)return;

    if(c==k)
    {
        maxi=max(maxi,sum);
        return;
    }
        c++;
        sum+=arr[i][j];
    //maxi=max(maxi,sum);

   FOR(z,0,4)
    {
        int ni = i+dx[z];
        int nj = j+dy[z];
        if(ni<=0 || nj<=0 || ni>n || nj>n)continue;
        if(!vis[ni][nj])
        {
        vis[ni][nj]=1;

        solve(ni,nj);

        vis[ni][nj]=0;
        }

    }
        sum-=arr[i][j];
        c--;

}

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r" , stdin);


    while(cin>>n>>k)
    {
        Set(arr,0);
        FOR(i,1,n+1)
            FOR(j,1,n+1)
                cin>>arr[i][j];
        maxi=0;

        FOR(i,1,n+1)
            FOR(j,1,n+1)
            {
               Set(vis,0);
              //  sx=i,sy=j;
                vis[i][j]=1;
                c=0;
                sum=0;//arr[i][j];
                solve(i,j);
                vis[i][j]=0;
            }
        cout << maxi <<endl;
    }

    return 0;
}


