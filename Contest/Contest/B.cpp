#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define pb push_back
typedef long long LL;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.in", "r", stdin);

    string s;
    while(cin>>s)
    {
        int mini=-1;
        FOR(i,0,s.size())
            if((s[i]-'0')%2==0 && (mini==-1 ||(s[i]-'0')<(s[mini]-'0')))
                mini = i;
        if(mini == -1)
            cout << -1 <<endl;
        else
        {
        swap(s[s.size()-1],s[mini]);
        cout << s << endl;
        }


    }

    return 0;
}



