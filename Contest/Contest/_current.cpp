#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define pb push_back
typedef long long LL;
using namespace std;

vector<char>V;
char dp[350][309][2][2];
int digs;

int solve(int idx, int sum, bool knap, bool f)
{
    if(sum<0 || idx>digs)
        return 0;
    if(idx==digs)
        return sum==0 && !knap;
    if(dp[idx][sum][knap][f]!=-1)
        return dp[idx][sum][knap][f];
    bool ret = 0;
    if(knap)
    {
        for(int i = V[idx] ; i<=9 ; i++)
        {
            ret |= solve(idx+1,sum-i,knap&V[idx]==i,0);
            if(ret)return ret;
        }
    }
    else
    {
        for(int i = f ; i<=9 ; i++)
        {
            ret |= solve(idx+1,sum-i,0,0);
            if(ret)return ret;
        }
    }
    return dp[idx][sum][knap][f] = ret;
}

void print(int idx, int sum, bool knap, bool f, vector<char>&nxt)
{
    if(sum<0)
        return;
    if(idx==digs)
        return;
    bool ret = 0;
    if(knap)
    {
        for(int i = V[idx] ; i<=9 ; i++)
        {
            ret |= solve(idx+1,sum-i,knap&V[idx]==i,0);
            if(ret)
            {
                nxt.push_back(i);
                print(idx+1,sum-i,knap&V[idx]==i,0,nxt);
                return;
            }
        }

    }
    else
    {
        for(int i = f ; i<=9 ; i++)
        {
            ret |= solve(idx+1,sum-i,0,0);
            if(ret)
            {
                nxt.push_back(i);
                print(idx+1,sum-i,0,0,nxt);
                return;
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.in", "r", stdin);
    int n;

    while(cin>>n)
    {
        V.clear();
        V.pb(0);
        digs=1;
        FOR(i,0,n)
        {
            int sum;
            cin>>sum;
            vector<char>nxt;
            Set(dp,-1);
            if(!solve(0,sum,1,1))
            {
                do
                {
                    ++digs;
                    Set(dp,-1);
                }while(!solve(0,sum,0,1));
           //     int b=digs,e=350;
            //    int ret=-1;
            //    while(b<=e)
            //    {
            //        Set(dp,-1);
            //        digs=(b+e)/2;
            //        if(solve(0,sum,0,1))
            //            e = digs-1,ret = digs;
            //       else b = digs+1;
            //    }
            //    digs = ret;
                Set(dp,-1);
                print(0,sum,0,1,nxt);
            }
            else
            {
                Set(dp,-1);
                print(0,sum,1,1,nxt);
            }
            FOR(i,0,nxt.size())
                cout << (char)(nxt[i]+'0');
            cout <<endl;
            V = nxt;
        }
    }
    return 0;
}
