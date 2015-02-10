#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;

LL modPow(LL n , LL p , LL M)
{
    if(p==0)
        return 1;
    LL x = modPow(n,p/2,M)%M;
    if(p%2==0)
        return (x*x)%M;
    else
        return (n*x*x)%M;
}

LL modInv ( LL n , LL M)
{
    return modPow(n,M-2,M)%M;
}

LL arrB[1000009];

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r" , stdin);

    string s;
    while(cin>>s)
    {
        LL a,b;
        cin>>a>>b;
        LL modA=0;
        LL modB=0;
        for(int i = s.size()-1 ; i>=0 ;i--)
        {
            modB += (((LL)(s[i]-'0') * modPow(10,(LL)s.size()-1-i,b))%b);
            modB %= b;
            arrB[i] = modB;
        }

        int res = -1;
        FOR(i,0,s.size())
        {
            modA = (LL)(modA*10LL)+(LL)(s[i]-'0');
            modA %= a;
            if(modA == 0 && i!=s.size()-1 && s[i+1]!='0')
            {
                if(arrB[i+1]==0)
                {
                    res = i;
                    goto END;
                }

            }
        }
END:
        if(res!=-1)
        {
            cout << "YES" <<endl;
            cout << s.substr(0,res+1) << endl;
            cout << s.substr(res+1) << endl;
        }
        else
            cout << "NO" <<endl;
    }

    return 0;
}


