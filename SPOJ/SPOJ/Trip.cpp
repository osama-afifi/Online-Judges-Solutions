//#include<iostream>
//#include<string>
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//
//string text1,text2;
//int d[1001][1001];
//
//int lcs(int n , int m)
//{
//	for(int i=n;i>=0;i--)
//		for(int j=m;j>=0;j--)
//			if(i==n || j==m)
//				d[i][j]=0;
//			else if(text1[i]==text2[j])
//				d[i][j]=max(d[i][j],d[i+1][j+1]+1);
//			else d[i][j]=max(d[i+1][j],d[i][j+1]);
//			return d[0][0];
//}
//
//int print(int n, int m , int LCS)
//{
//	
//
//
//	return 0;
//
//}
//
//
//int main()
//{
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		cin>>text1>>text2;
//		int LCS=lcs(text1.length(),text2.length());
//		//		print(text1.length(),text2.length(),LCS);
//		cout<<LCS<<endl;
//	}
//
//	return 0;
//}