//Pasha and Pixels

#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define pb push_back
typedef long long LL;
using namespace std;

set<pair<int,int> >S;
bool check(int x , int y)
{
    if(S.find(mp(x+1,y+1))!=S.end() && S.find(mp(x+1,y))!=S.end() && S.find(mp(x,y+1))!=S.end() )
        return true;
    if(S.find(mp(x+1,y-1))!=S.end() && S.find(mp(x+1,y))!=S.end() && S.find(mp(x,y-1))!=S.end() )
        return true;
    if(S.find(mp(x-1,y-1))!=S.end() && S.find(mp(x-1,y))!=S.end() && S.find(mp(x,y-1))!=S.end() )
        return true;
    if(S.find(mp(x-1,y+1))!=S.end() && S.find(mp(x-1,y))!=S.end() && S.find(mp(x,y+1))!=S.end() )
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.in", "r", stdin);

    int n,m,k;
    int a,b;
    while(cin>>n>>m>>k)
    {
        S.clear();
        int res=0;
        FOR(i,0,k)
        {
            cin>>a>>b;
            S.insert(mp(a,b));
            if(!res && check(a,b))
            {
                res = i+1;
            }
        }
        cout << res <<endl;
    }


    return 0;
}


// Maximum in Table
#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define pb push_back
typedef long long LL;
using namespace std;


int solve(int i, int j)
{
    if(i==1 || j==1)return 1;
    return solve(i-1,j)+solve(i,j-1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.in", "r", stdin);
    int n;cin>>n;
    cout << solve(n,n) <<endl;

    return 0;
}

