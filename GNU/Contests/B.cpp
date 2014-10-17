#include <iostream>
#include <stdio.h>
#include <cmath>
#include <math.h>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cstring>
#include <limits.h>
#include <queue>
using namespace std;


#define rep(i, x, y) for(int i = x; i < y; i++)
#define Rep(i, x, y) for(int i = x; i <= y; i++)
#define vi vector<int>
#define vvi vector<vector<int> >
#define vp vector< pair< int, int > >
#define point pair<double, double >
#define pp push_back
#define mp make_pair
#define eps pow(10.0,-9.0)
#define MOD 1000000007
#define oo 1e18
#define Maxi 250000
#define Set(a, s) memset(a, s, sizeof (a))
typedef unsigned long long ull;
typedef long long ll;

struct trie
{
    trie* next[27];
    bool wordend;
};
string s;

trie* addword(int idx, trie* t)
{
    if( idx == (int)s.length())
    {
        t->wordend = true;
        return t;
    }
	t->wordend = true;
    int edge = s[ idx ] - 'a';
    if( t->next[edge] ==NULL)
        t->next[edge] = new trie();
    t->next[edge] = addword( idx+1, t->next[edge]);

    return t;
}

char dp[100009];
bool search ( int idx, trie* t)
{
    if( idx == (int)s.length() )
        return dp[idx]=t->wordend;
    if(dp[idx]!=-1)
        return dp[idx];
    if( s[idx] == '*')
    {
        bool check = false;
        rep( i, 0, 26 )
        if( t->next[i] > 0 )
        {
            check |= search( idx + 1, t->next[i]);
            if(check)break;
        }

        return dp[idx]=check;
    }
    else
    {
        int edge = s[idx] - 'a';
        if( t->next[edge] > 0 )
            return dp[idx]=search( idx +1, t->next[edge]);
        else if( idx > 0 && s[ idx - 1] == '*')
        {
            bool check = false;
        rep( i, 0, 26 )
        if( t->next[i] > 0 )
        {


            check |= search( idx, t->next[i]);
            if(check)break;
             }
        return dp[idx]=check;
        }
        else
            return dp[idx]=false;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
	freopen( "input.txt", "r", stdin );
	int n;
	while( cin>>n )
    {
        trie* t = new trie();
       cin>>s;
       rep( i, 0, (int)s.length() )
       addword( i, t);
       rep( i, 0, n)
       {
           Set(dp,-1);
           cin>>s;
          if( search( 0,t) )
            cout<<"yes"<<endl;
          else
            cout<<"no"<<endl;
       }

    }
	return 0;
}
