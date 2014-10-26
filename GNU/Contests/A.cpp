#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;

bool isPa( int n, int idx)
{
	vector<int> s;
	while( n )
	{
		s.push_back( n%idx);
		n/=idx;
	}
	bool check = true;
	//while(s.front()==0)s.erase(s.begin());
	for( int i = 0, j = (int)s.size() - 1; i < (int)s.size()/2 ; i++, j-- )
	{
		if( s[ i ] != s[j])
		{
			check = false;
			break;
		}
	}

	return check;
}

bool isPal(int num , int b)
{
    int rev=0;
    int x = num;
    while(x>0)
        rev*=b,rev+=x%b,x/=b;
    return num==rev;
}
int pal(int num , int b)
{
    int rev=0;
    int x = num;
    while(x>0)
        rev*=b,rev+=x%b,x/=b;
    return rev;
}
int dp[1000009];
int main()
{
	ios_base::sync_with_stdio(0);
	freopen( "input.txt", "r", stdin );
	//freopen( "output.out", "w", stdout );
	int n;
	Set(dp,-1);
	dp[2]=3;
	dp[1]=2;
	while( cin>>n )
	{
        if(dp[n]!=-1)
        {
            cout << n << " " << dp[n] <<endl;
            //cout << dp[n] <<endl;
            continue;
        }
        //int k = sqrt(n)*4.0+2;

		for(int i = 2 ; i<=n && i*i<=n*2  ; i++)
		{
			if(isPal(n, i))
			{
				dp[n] = i;
				break;
			}
		}
		if(dp[n]==-1)
        {
		if(isPal(n, n))
				dp[n] = n;
		else if(isPal(n, n-1))
				dp[n] = n-1;
        }

		if(dp[n]==-1)
           dp[n]=0;

            cout << n << " " << dp[n] <<endl;
          //  cout << << dp[n] << endl;



	}
	return 0;
}

