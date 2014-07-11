//#include <iostream>
//#include <iomanip>
//#include <math.h>
//using namespace std;
//
//int coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
//long long dp[30001]={};
//float n;
//int num;
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	dp[0]=1;
//
//for(int i = 0 ; i <11  ; i++)
//	for(int j = coin[i] ; j <= 30001  ; j++)
//		if(j-coin[i]>=0)
//			dp[j]+=dp[j-coin[i]];
//
//	while(cin>>n)
//	{
//	num = int(n*100 +0.5);
//	if(!num)break;
//	cout<<setw(6)<<setprecision(2) <<fixed<<n <<setw(17)<<dp[num]<<endl;
//	}
//		
//
//
//return 0;
//}