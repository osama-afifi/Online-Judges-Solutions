#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;


struct student{
 int ab;
 int cost;
 int idx;
 bool operator < (const student &s) const
 {
     if(ab!=s.ab)
        return ab>s.ab;
     return cost<s.cost;
 }
};

pair<int,int> b[100009];
student s[100009];
int ans[100009];
int temp[100009];
int n,m;
int P;


bool solve(int days)
{
	set<pair<int,int>, greater<pair<int,int> > >bugs;
    FOR(i,0,m)
        bugs.insert(b[i]);

int pass=0;
    FOR(i,0,n)
	{
	    int d=days;
        bool done=0;
        if(pass+s[i].cost>P)continue;
		while(d--)
        {
            if(bugs.size()==0)break;
            pair<int,int> B= *(bugs.begin());
            if(B.first>s[i].ab)break;
            else
                {
                    bugs.erase(B);
                    temp[B.second]=s[i].idx;
                    done=1;
                }
        }
        if(done)
             pass+=s[i].cost;
	}

if(pass>P)return false;
if(bugs.size()==0)
    return true;
return false;
}





int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r" , stdin);

    while(cin>>n>>m>>P)
    {
        FOR(i,0,m)
            cin>>b[i].first,b[i].second=i;
        FOR(i,0,n)
            cin>>s[i].ab,s[i].idx=i;
        FOR(i,0,n)
            cin>>s[i].cost;
        sort(s,s+n);
        sort(b,b+m);
        int b=0,e=m,res=-1;
        while(b<=e)
        {
            int mid = (b+e)/2;
            if(solve(mid))
            {
                  e=mid-1,res=mid;
                  FOR(i,0,m) ans[i]=temp[i]+1;
            }

            else b=mid+1;
        }
        if(res==-1)
            cout << "NO" <<endl;
        else
            {
                cout << "YES" <<endl;
                FOR(i,0,m)
                cout << ans[i] << " ";
                cout <<endl;

            }
    }

    return 0;
}

