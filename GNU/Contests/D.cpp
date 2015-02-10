#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;

int A1,B1,A2,B2;
map< pair<pair<int,int>,pair<int,int> > , int> dp;

int solve(int a1, int b1, int a2, int b2)
{
    if((LL)a1*(LL)b1 == (LL)a2*(LL)b2)
        return 0;
    map< pair<pair<int,int>,pair<int,int> > , int> :: iterator it = dp.find(mp(mp(a1,b1),mp(a2,b2)));
    if(it != dp.end())
        return it->second;
    int ret=1e9;
    if(a1%2==0)
        ret = min(ret, solve(a1/2,b1,a2,b2)+1);
    if(a1%3==0)
        ret = min(ret, solve(2*a1/3,b1,a2,b2)+1);
    if(b1%2==0)
        ret = min(ret, solve(a1,b1/2,a2,b2)+1);
    if(b1%3==0)
        ret = min(ret, solve(a1,2*b1/3,a2,b2)+1);


    if(a2%2==0)
        ret = min(ret, solve(a1,b1,a2/2,b2)+1);
    if(a2%3==0)
        ret = min(ret, solve(a1,b1,2*a2/3,b2)+1);
    if(b2%2==0)
        ret = min(ret, solve(a1,b1,a2,b2/2)+1);
    if(b2%3==0)
        ret = min(ret, solve(a1,b1,a2,2*b2/3)+1);

    return dp[mp(mp(a1,b2),mp(a2,b2))] = ret;
}


void print(int a1, int b1, int a2, int b2)
{
     if((LL)a1*(LL)b1 == (LL)a2*(LL)b2)
    {
        cout << a1 << " " << b1<<endl;
        cout << a2 << " " << b2<<endl;
        return;
    }
    int opt = dp[mp(mp(a1,b2),mp(a2,b2))];

    int ret=1e9;
    if(a1%2==0)
        ret = min(ret, solve(a1/2,b1,a2,b2)+1);
    if(ret == opt)
    {
        print(a1/2,b1,a2,b2);
        return ;
    }
    if(a1%3==0)
        ret = min(ret, solve(2*a1/3,b1,a2,b2)+1);
    if(ret == opt)
    {
        print(2*a1/3,b1,a2,b2);
        return ;
    }
    if(b1%2==0)
        ret = min(ret, solve(a1,b1/2,a2,b2)+1);
    if(ret == opt)
    {
        print(a1,b1/2,a2,b2);
        return ;
    }

    if(b1%3==0)
        ret = min(ret, solve(a1,2*b1/3,a2,b2)+1);
    if(ret == opt)
    {
        print(a1,2*b1/3,a2,b2);
        return ;
    }

    if(a2%2==0)
        ret = min(ret, solve(a1,b1,a2/2,b2)+1);
    if(ret == opt)
    {
        print(a1,b1,a2/2,b2);
        return ;
    }
    if(a2%3==0)
        ret = min(ret, solve(a1,b1,2*a2/3,b2)+1);
    if(ret == opt)
    {
        print(a1,b1,2*a2/3,b2);
        return ;
    }
    if(b2%2==0)
        ret = min(ret, solve(a1,b1,a2,b2/2)+1);
    if(ret == opt)
    {
        print(a1,b1,a2,b2/2);
        return ;
    }
    if(b2%3==0)
        ret = min(ret, solve(a1,b1,a2,2*b2/3)+1);
    if(ret == opt)
    {
        print(a1,b1,a2,2*b2/3);
        return ;
    }


}

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r" , stdin);
    while(cin>>A1>>B1>>A2>>B2)
    {
        dp.clear();
        int res = solve(A1,B1,A2,B2);
        if(res == (int)1e9)
            cout << -1 <<endl;
        else
        {
            cout << res <<endl;
            print(A1,B1,A2,B2);
        }


    }
    return 0;
}

