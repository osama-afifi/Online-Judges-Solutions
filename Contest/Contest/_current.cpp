#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<sstream>
#include<queue>
#include<set>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;

const LL oo = 1LL<<25;


LL arr[100009];
int n;
LL dp[100009][2];
LL solve(int idx, bool b)
{
    if(idx==100001)
        return 0;
    if(dp[idx][b]!=-1)
        return dp[idx][b];
    LL s1=0,s2=0;
    s1 = solve(idx+1,0);
    if(!b)
        s2= solve(idx+1,1)+arr[idx];
    return dp[idx][b]=max(s1,s2);
}

int main()
{
    freopen("input.in", "r" , stdin);
    while(cin>>n)
    {
        Set(arr,0);
        LL num;
        for(int i=0; i<n; i++){
            cin>>num;
            arr[num]+=num;

        }
        Set(dp,-1);
        cout<< solve(1,0) <<endl;
    }
    return 0;
}
