//
////250
//class NinjaTurtles {
//public:
//	int countOpponents(int P, int K) {
//		for(int i =0 ; ;i++)
//		{
//		if(3*(i/K)+i/3==P)
//			return i;
//		else if(3*(i/K)+i/3>P)
//			break;
//		}
//		return -1;
//	}
//};
//
////500
//class TheSquareRootDilemma {
//public:
//	int countPairs(int N, int M) {
//		int count=0;
//		for(int n=1; n<=N ; n++)
//		{
//		int maxPerf=1;
//		for(int i = 1 ; i*i<=n ; i++)
//		{
//			if(n%(i*i)==0)
//				maxPerf=i*i;
//		}
//		int p=n/maxPerf;
//		
//		for(int i =1 ; p*i*i<=M ; i++)
//			count++;
//		}
//		return count;
//	}
//};