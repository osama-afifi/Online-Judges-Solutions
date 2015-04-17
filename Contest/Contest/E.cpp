#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define pb push_back
typedef long long LL;
using namespace std;

int arr[1000009];
//int cum[1000009];
int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.in", "r", stdin);
    string s;
    while(cin>>s)
    {
        Set(arr,0);
        int n;
        FOR(i,0,s.size())
        if(s[i]=='A' ||s[i]=='E' ||s[i]=='O' ||s[i]=='I' ||s[i]=='U' || s[i]=='Y')
            arr[i]=1;
        n = s.size();
        int q = (n+1)/2;
        long double res=0;
        LL inner = 0;
        FOR(i,0,q)
        {
            inner += (n-i*2);
            long double cur = 0;
            cur += arr[i] *  inner;
            if(n%2!=1 || i != q-1)
                cur += arr[n-1-i] * inner;
            cur /= (double)(i+1);
            res += cur;
        }
        cout << res <<endl;
    }

    return 0;
}
