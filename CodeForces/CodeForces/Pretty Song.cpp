#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define pb push_back
typedef long long LL;
using namespace std;


/*

the vertical axis of the matrix represent the substring window sizes and each row represents how freqent each index appears in
the window so by the windows i and n-i are symmetric do we calc the cummulative sum of indices to get the sum of a substring in O(1)
and by looping through windows's sizes from 1 to ceil(n/2) we add the acc(i,n-i) to the inner sum as explained in the following matrix

1 1 1 1 1 1 1
1 2 2 2 2 2 1
1 2 3 3 3 2 1
1 2 3 4 3 2 1
1 2 3 3 3 2 1
1 2 2 2 2 2 1
1 1 1 1 1 1 1
 */



int arr[1000009];
LL cum[1000009];

LL chop(int a , int b)
{
    if(a) return cum[b]-cum[a-1];
    return cum[b];
}



int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.in", "r", stdin);
    string s;
    while(cin>>s)
    {
        Set(arr,0);
        int n = s.size();
        FOR(i,0,s.size())
            if(s[i]=='A' ||s[i]=='E' ||s[i]=='O' ||s[i]=='I' ||s[i]=='U' || s[i]=='Y')
                arr[i]=1;
        cum[0]=arr[0];

        FOR(i,1,n)
            cum[i] = cum[i-1] + arr[i];

        int q = (n+1)/2;
        long double res=0;
        long double inner = 0;
        FOR(i,0,q)
            {
                inner += (long double)(chop(i,n-1-i));
                long double cur = 0;
                cur += (long double)inner/(long double)(i+1);
                if(!(n%2==1 && i == q-1))
                    cur += (long double)inner/(long double)(n-i);
                res += cur;
            }
        cout << setprecision(10) << fixed << res <<endl;
    }

    return 0;
}
