//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <stdio.h>
//
//using namespace std;
//int arr[1000001];
//int main()
//{
//	freopen("input.in","r",stdin);
//	string text;
//	
//	int n,x,y,kase=0;
//	while(cin>>text)
//	{
//
//		arr[0]=text[0]-'0';
//		for(int i = 1 ; i<text.length() ; i++)
//			if(text[i]=='1')
//				arr[i]=arr[i-1]+1;
//			else
//				arr[i]=arr[i-1];
//
//		cin>>n;
//		printf("Case %d:\n",++kase);
//		for(int i = 0 ; i<n ; i++)
//		{
//
//			scanf("%d%d",&x,&y);
//			if(x>y)swap(x,y);
//
//			if(text[x]=='0' && text[y]=='0' && arr[y]-arr[x]==0 )
//				printf("Yes\n");
//			else if(text[x]=='1' && text[y]=='1' && arr[y]-arr[x]==y-x )
//				printf("Yes\n");
//			else printf("No\n");
//		}
//
//	}
//
//	return 0;
//}