//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cstring>
//#include <set>
//
//using namespace std;
//
//int dp[1005][1005];
//
//int max(int a, int b) {return (a>b) ? a :b;}
//int min(int a, int b) {return (a<b) ? a :b;}
//
//int maxi;
//
//int arr1[25];
//int arr2[25];
//int arr3[25];
//int LCS(int x , int y)
//{
//	for(int i=0 ; i<=x ; i++)
//		for(int j=0 ; j<=y ; j++)
//		{
//			if (i == 0 || j == 0)
//				dp[i][j] = 0;
//			else if(arr3[i-1]==arr2[j-1])
//				dp[i][j]=dp[i-1][j-1]+1;
//			else
//				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//		}
//		return dp[x][y];
//}
//
//string text;
//int main()
//{
//	freopen("input.in","r",stdin);
//	bool first=true;
//	
//	int n,num;
//	stringstream ss;
//	while(cin>>n)
//	{		
//		memset(dp,0,sizeof dp);
//		for(int i = 0 ; i<n ; i++)
//			cin>>arr1[i];
//		 for (int i = 0; i <n; i++)
//   arr3[arr1[i]-1] = i+1 ;
//
//		cin.ignore();
//		while(getline(cin,text))
//		{
//			memset(dp,0,sizeof dp);
//			if(text=="")break;
//			ss.clear();
//			ss<<text;
//			for(int i = 0 ; i<n ; i++)
//			{
//				ss>>num;
//				arr2[num-1] = i+1 ;
//			}
//			cout<<LCS(n,n)<<endl;
//		}
//	}
//
//
//	return 0;
//}