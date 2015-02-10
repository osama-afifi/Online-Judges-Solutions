#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;

int arr[1000009];
int pre[1000009];
bool vis[1000009];


int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r" , stdin);
    int n;
    while(cin>>n)
    {
        vector< pair<int,int> >V;
        map<int,int>M;
        int c=0;
        FOR(i,0,n)
        {
            int a,b;
            cin>>a>>b;
            if(a && M.find(a)==M.end())
                M[a]=c++;
            if(b && M.find(b)==M.end())
                M[b]=c++;
            arr[a]=b;
            pre[b]=a;
        }
        vector<int>V1;
        vector<int>V2;
        int cur=arr[0];
        Set(vis,0);
        while(cur>0)
        {
            V2.pb(cur);
            vis[M[cur]]=1;
            cur = arr[cur];
        }
        vector<int>temp;
        for(map<int,int>::iterator it = M.begin(); it!=M.end() ; it++)
            if(!vis[it->second])
                temp.pb(it->first);

        cur=pre[0];
        while(cur>0)
        {
            V1.pb(cur);
            cur = pre[cur];
        }
        FOR(i,0,temp.size())
        int c1=0,c2=0;
        FOR(i,0,n)
        {
            if(i&1)
                cout << V2[i/2] << " ";
            else
                cout << V1[V1.size() - 1 - i/2] << " ";
        }
        cout <<endl;

    }

    return 0;
}

