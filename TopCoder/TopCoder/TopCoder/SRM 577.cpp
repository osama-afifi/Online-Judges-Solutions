// 250
class EllysNewNickname {

public:

	bool isVowel(char c)
	{
	if(c=='a' || c=='e' || c=='o' || c=='u' || c=='y' || c=='i')return true;
	return false;
	}


	int getLength(string nickname) {
		int sheel=0;
		FOR(i,1,nickname.length())
			if(isVowel(nickname[i]) && isVowel(nickname[i-1]))sheel++;
		return nickname.length()-sheel;
	}
};


//500
class EllysRoomAssignmentsDiv2 {
public:
	double getProbability(vector <string> ratings) {

		string input = "";
		FOR(i,0,ratings.size())
			input+=ratings[i];
		stringstream ss;
		ss<<input;
		vector<int>V;

		int num;
		while(ss>>num)
			V.push_back(num);
		int contestants = V.size();
		int R = (contestants+19)/20;
		int avg = contestants/R;
		int rem = contestants%20;
		int ana = V[0];
		int anaindex=-1;
		sort(V.begin(),V.end());
		reverse(V.begin(),V.end());
		int bigger=0;
		FOR(i,0,contestants)
		{
			if(V[i]==ana)
				anaindex=i;
			if(V[i]>ana)bigger++;
		}	
		
		if(R==1) return 1.0;
		if(ana==V[0])return 1.0;
		if(bigger<R) return 0.0;
			double res = (1.0/(double)R);
			return res;
	}
};

//1000
class EllysCoprimesDiv2 {
public:
	bool prime[100009];
	void sieve(int MAX)
	{
		memset(prime,0,sizeof prime);
		for(int i = 2 ; i*i<=MAX ; i++)
		{
			if(!prime[i])
				for(int j = i*i ; j<=MAX ; j+=i)
					prime[j]=1;
		}

	}
	int gcd(int a , int b)
	{
		return b==0 ? a : gcd(b,a%b);
	}

	int getCount(vector<int> numbers) {
		sieve(100002);
		sort(numbers.begin(),numbers.end());
		int c=0;
		for(int i = 1; i<numbers.size() ; i++)
		{
			int koko=0;
			if(gcd(numbers[i-1],numbers[i])==1)continue;
			for(int j = numbers[i-1]+1 ; j<numbers[i] ;j++)
				if(/*!prime[j] && */gcd(numbers[i-1],j)==1 && gcd(numbers[i],j)==1)
				{c++;koko=1;break;}
				if(!koko)c+=2;
		}
		return c;
	}
};
