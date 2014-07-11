//250

class DeerInZooDivTwo {
public:
  vector <int> getminmax(int N, int K) {
    
    vector<int>res;
    int mini = N - K ;
    if(mini<0)
      mini=0;
 
    
    int maxi = N- (K+1)/2;
    if(maxi<0)
      maxi=0;
    res.push_back(mini);
    res.push_back(maxi);
    return res;
  }
};
 
//500

class GooseInZooDivTwo {
public:

	char M[60][60];
	int vis[60][60];
	int n;
	int m;
	int mann( pair<int,int> a , pair<int,int> b)
	{
		return  abs(a.first-b.first) + abs(a.second-b.second);
	}
	int color;

	long long square(long long  x)
	{
		return x*x;
	}
	long long BigMod(long long  B,long long  P, long long  M)
	{
		if(P==0)
			return 1;
		else if(P%2==0)
		{
			long long x = BigMod(B,P/2,M);
			return (x%M*x%M)%M;
		}
		else
			return (B%M)*(BigMod(B,P-1,M))%M;
	}
	int D;

	void dfs(int i, int j)
	{
		vis[i][j]=color;

		FOR(k,0,n)FOR(l,0,m)
			if(vis[k][l]==-1 && M[k][l]=='v')
				if(mann(mp(i,j),mp(k,l))<=D)
					dfs(k,l);

	}

	int count(vector <string> field, int dist) {

		FOR(i,0,field.size())
			FOR(j,0,field[i].length())
			M[i][j] = field[i][j];
		n = field.size();
		m=field[0].size();
		color = 0;
		Set(vis,-1);
		 D=dist;
		int birds = 0;
		FOR(i,0,n)
			FOR(j,0,m)
			birds += (M[i][j]=='v');

		long long res=1;

		int c=0;

		FOR(i,0,n)
			FOR(j,0,m)
		{

			if(M[i][j]=='v')
			{
				
				if(vis[i][j]==-1)
				{
					c++;
					dfs(i,j);
					color++;
				}
			}
		}
		if(birds==0)return 0;
		else		
			{
				long long z = BigMod(2,c,1000000007);
				res = z-1;
		}
		return res;
	}
};

//1000
class WolfInZooDivTwo {
public:
	int dp[355][355];
	int n;
vector<vector<int> >V;

int solve(int index , int last)
{
	if(index>n)return 1;
	if(dp[index][last]!=-1)return dp[index][last];
	bool b =1;
	FOR(i,0,V[index].size())if(V[index][i]>last)b=0;
	int res = 0;
	if(b) res = solve(index+1,last);
	 res = (res + solve(index+1,index))% 1000000007;
	return dp[index][last] = res;
}



	int count(int N, vector <string> L, vector <string> R) {
		V.clear();
		Set(dp,-1);
		V.resize(N+3);
		n=N;
		string sR  = "" , sL = "";
		FOR(i,0,L.size())sL+=L[i];
		FOR(i,0,R.size())sR+=R[i];
		stringstream ss1,ss2;
		ss1<<sL;
		ss2<<sR;
		int l,r;
		while(ss1>>l)
		{
		ss2>>r;
		++l;
		++r;
		V[r].push_back(l);
		}
		return solve(1,0);
	}
};