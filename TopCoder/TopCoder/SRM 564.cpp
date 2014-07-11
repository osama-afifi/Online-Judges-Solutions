//500
class AlternateColors {
public:
	string getColor(long long r, long long g, long long b, long long k) {
		long long  col[4];
		string res [] = {"RED" , "GREEN", "BLUE"};
		long long  mini = max(r,max(g,b));
		mini=min(r,min(g,b));
		if(k<=mini*3)
		return res[(k-1)%3];
		col[0]=r,col[1]=g,col[2]=b;

		for(int i = 0 ; i<3;i++)
			col[i]-=mini;
		k-=mini;
		long long  cur=0;
		mini=max(r,max(g,b));
		for(int i = 0 ; i<3;i++)
			if(col[i])
			{
				cur+=col[i];
				mini=min(mini,col[i]);
			}
			vector<string>S;
			for(int i = 0 ; i<3;i++)
				if(col[i])
					S.push_back(res[i]);
			if(k<=(long long)mini*(long long)S.size())
				return S[(k+1)%S.size()];

			S.clear();
			for(int i = 0 ; i<3;i++)
				if(col[i])
					S.push_back(res[i]);
			return S[0];

	}
};