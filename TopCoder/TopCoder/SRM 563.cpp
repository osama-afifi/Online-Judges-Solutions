// 250
class FoxAndHandleEasy
{
public:
	string isPossible(string S, string T)
	{
		
		int pos=temp.find(S);
		if(pos==-1)return"No";
		else
		{
			for(int i = 0; i<T.length();i++)
			{
				string temp = T.substr(0,i)+S+T.substr(i,T.length()-1-i);
				if(temp==T)
					return "YES";
			}

 return "No";
		}
	}
};



// 1000
class SpellCardsEasy {
public:
	int dp[107][107];
	int solve(vector <int> &level, vector <int> &damage , int index, int left)
	{
		if(left>=level.size()-index)return 0;
		if(index>=level.size())return 0;
		if(dp[index][left]!=-1)return dp[index][left];
		int s1=0,s2=0;
	s1=solve(level, damage, index+1, max(left-1,0));
	if(left+level[index]-1<=level.size()-index-1)
		s2=solve(level,damage,index+1,left+level[index]-1)+damage[index];
	return dp[index][left]=max(s1,s2);
	}

	int maxDamage(vector <int> level, vector <int> damage) 
	{

		memset(dp,-1,sizeof dp);
		return solve(level,damage,0,0);
	}
};

