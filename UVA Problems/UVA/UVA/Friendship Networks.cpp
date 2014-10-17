// friendship

#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i = (a) ; i<b ; i++)
#define Set(a,b) memset(a,b,sizeof(a));

typedef long long LL;

using namespace std;
int arr[2009];
int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r" , stdin);

   int n;
    while(cin>>n)
    {
        bool ok=1;
        FOR(i,0,n)cin>>arr[i];
        FOR(i,0,n)
        {
            sort(arr+i,arr+n);
            reverse(arr+i,arr+n);
            if(arr[n-1]<0){ok=0;break;}
            FOR(j,1,arr[i]+1)
            {
                --arr[i+j];
                if(arr[i+j]<0){ok=0;break;}
            }

        }
        if(arr[n-1]!=0){ok=0;}
        cout << ok <<endl;
    }


    return 0;
}
