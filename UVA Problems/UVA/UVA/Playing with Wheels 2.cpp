//#include <iostream>
//#include <queue>
//#include <string>
//#include <algorithm>
//#include <sstream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//struct POS
//{
//	int a,b,c,d;
//	int counter;
//};
//struct VIS
//{
//	bool a,b,c,d;
//
//};
//
//
//int main ()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	cin.ignore();
//
//	int PLAY[]={1000,-1000,100,-100,10,-10,1,-1};
//
//	bool VIS[10000];
//	while(t>0)
//	{
//		memset(VIS,false,sizeof(VIS));
//
//		int num,init=0,target=0;
//
//		for(int i=0 ;i<4;i++)
//		{
//			cin>>num;
//			init+=num*pow(10.0,3-i);
//		}
//
//		for(int i=0 ;i<4;i++)
//		{
//			cin>>num;
//			target+=num*pow(10.0,3-i);
//		}
//
//		int times;
//		cin>>times;
//		int forbidden=0;
//		for(int j=0;j<times;j++)
//		{
//			for(int i=0 ;i<4;i++)
//			{
//				cin>>num;
//				forbidden+=num*pow(10.0,3-i);
//			}
//			VIS[forbidden]=true;
//		}
//
//
//		VIS[init]=true;
//
//		queue<int>BFS;
//
//		BFS.push(init);
//		int current=init;
//		bool found=false;
//
//		while(!BFS.empty())
//		{
//			current=BFS.front();
//			if(current==target){
//				found=true;
//				break;
//			}
//
//			BFS.pop();
//
//			for(int i=0;i<8;i++)
//			{
//				if(!VIS[(current+PLAY[i])%(PLAY[i]*10)])
//				{
//					BFS.push((current+PLAY[i])%(PLAY[i]*10));
//					VIS[(current+PLAY[i])%(PLAY[i]*10)]=true;
//				}
//
//			}
//
//		}
//
//
//
//
//
//		t--;
//	}
//	return 0;
//}