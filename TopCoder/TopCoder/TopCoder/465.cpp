//250

class NumberNeighbours {
public:


	int numPairs(vector <int> numbers) 
	{
		vector<string>V;
		FOR(i,0,numbers.size())
		{
		stringstream ss;
		ss<<numbers[i];
		string s;
		ss>>s;
		FOR(i,0,s.length())
			if(s[i]=='0')
				s.erase(i,1),--i;
		sort(s.begin(),s.end());
		V.push_back(s);
		}

		int c=0;
		FOR(i,0,V.size())
			FOR(j,i+1,V.size())
				if(V[i]==V[j])
					++c;

		return c;

	}
};

//500
class TurretPlacement {
public:
	long long count(vector <int> x, vector <int> y) {
		long long sum = 0;
		FOR(i,0,x.size())
			FOR(j,i+1,y.size())
		{			
			double z = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
			z = (sqrt(z));
			long long k = 2*z;
		//	if(k%2==0)k++;
			sum+= k*(k-1)/2; // NC2
		}
		return sum;
	}
};