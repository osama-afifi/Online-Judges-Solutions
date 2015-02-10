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




// Painting Pebbles
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

    int n,k;
    while(cin>>n>>k)
    {
        int arr[109];
        int freq[109][109];
        FOR(i,0,n)cin>>arr[i];
        Set(freq,0);
        FOR(i,0,n)
            FOR(j,0,arr[i])
                freq[i][j%k]++;
        int maxF[109];
        int minF[109];
        Set(maxF,0);
        FOR(i,0,k)minF[i]= 101;
        FOR(i,0,n)FOR(j,0,k)
        {
            minF[j] = min(minF[j], freq[i][j]);
            maxF[j] = max(maxF[j], freq[i][j]);
        }
        bool ok=1;
        FOR(i,0,n)
            if(maxF[i]-minF[i]>1)
            {
                ok=0;break;
            }
        if(ok)
        {
            cout << "YES\n";
            FOR(i,0,n)
            {
                    FOR(j,0,arr[i])
                        cout << ((j)%k)+1 << " ";
                    cout <<endl;;
            }

        }
        else cout << "NO\n";
    }

    return 0;
}


