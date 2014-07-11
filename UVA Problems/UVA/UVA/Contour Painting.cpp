//#include <iostream>
//#include <cstring>
//#include <string>
//#include <string.h>
//
//
//using namespace std;
//
//char MAP[40][85];
//bool VIS[40][85];
//int movex[]={-1,0,1,0};
//int movey[]={0,1,0,-1};
//int c=0;
//bool inRange(int x , int y)
//{
//	return (x>=0 && y>=0 && x<c && y<=85) ? true : false;
//}
//
//void solve(int x , int y)
//{
//
//	for(int i =0 ; i<4 ; i++)
//	{
//		if(inRange(x+movex[i],y+movey[i]))
//		{	
//
//			if(/*MAP[x+movex[i]][y+movey[i]]!=0 && *//*!VIS[x+movex[i]][y+movey[i]] &&*/ MAP[x+movex[i]][y+movey[i]]=='X')
//			{
//				if(MAP[x]=="")
//					MAP[x][y]='#';
//				else
//					MAP[x][y]='#';
//			}
//			else if( !VIS[x+movex[i]][y+movey[i]] && MAP[x+movex[i]][y+movey[i]]!='X')
//			{
//				VIS[x+movex[i]][y+movey[i]]=true;
//				solve(x+movex[i],y+movey[i]);
//			}
//
//		}
//	}
//
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	//freopen("output.out","w",stdout);
//	int t;
//	cin>>t;
//	cin.ignore();
//
//	while(t--)
//	{
//		memset(MAP,0,sizeof(MAP));
//		memset(VIS,false,sizeof(VIS));
//		c=1;
//		//strcpy(MAP[0],"                                                  ");
//		while(cin.getline(MAP[c],85))
//		{
//			if(MAP[c][0]=='_')break;
//			c++;
//		}
//
//		for(int i = 0 ; i<c ;i++)
//			for(int j = 0 ;  ;j++)
//			{
//				if(MAP[i][j]==0)break;
//
//				if(MAP[i][j]=='*')
//				{
//					MAP[i][j]=' ';
//					VIS[i][j]=true;
//					solve(i,j);				
//				}
//			}
//
//			for(int i = 0 ; i<=c ;i++)
//				printf("%s\n",MAP[i]);
//	}
//	return 0;
//}