#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r" , stdin);

    int n;
    while(cin>>n)
    {

        vector<int>V[3];
        FOR(i,0,n)
        {
            int num;
            cin>>num;
            V[num-1].pb(i);
        }

        int mini = 1<<25;
        FOR(i,0,3)
        mini = min((int)V[i].size(),mini);
        cout << mini <<endl;
        FOR(i,0,mini)
        cout << V[0][i]+1 << " " << V[1][i]+1 << " " << V[2][i]+1 << endl;

    }

    return 0;
}


