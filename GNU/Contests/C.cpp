#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;
vector< pair<string,string> > V;
int main()
{
    freopen("input.txt", "r" , stdin);

    int n;
    while(cin>>n)
    {
        V.clear();
        FOR(i,0,n)
            {
                string s1,s2;
                cin>>s1>>s2;
                V.push_back(mp(s1,s2));
            }
        int num;
        bool ok=1;
        cin>>num;
        --num;
        string cur=min(V[num].first,V[num].second);
        FOR(i,1,n)
        {
            cin>>num;
            --num;
            string mini = min(V[num].first,V[num].second);
            string maxi = max(V[num].first,V[num].second);
            if(cur<mini)
                cur=mini;
            else if(cur<maxi)
                cur=maxi;
            else
            {
                ok=0;
              //  break;
            }
        }

      //  sort(ALL(V));


        if(ok)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}



