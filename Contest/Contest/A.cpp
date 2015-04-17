
#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define pb push_back
#define all(v) (v.begin(), v.end())
typedef long long LL;
using namespace std;
LL MOD = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.in", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;cin>>t;
    int kase=0;
    while(t--)
    {
        int dum;cin>>dum;
        string s;cin>>s;
        int res=0;
        int stand=0;
        FOR(i,0,s.size())
        {
            if(stand+res>=i)
                stand+=s[i]-'0';
            else
            {
                stand+=s[i]-'0';
                res++;
                ++i;
                    while(i<s.size() && stand+res<i)
                         stand+=s[i]-'0',res++,++i;
                i--;

            }
        }
        cout << "Case #" << ++kase << ": " << res <<endl;
    }

    return 0;
}
