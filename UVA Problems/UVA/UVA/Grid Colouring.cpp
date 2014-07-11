//#include <iostream>
//#include <cstring>
//#include <string>
//#include <stdio.h>
//#include <string.h>
//
//
//using namespace std;
//
//char MAP[31][81];
//bool VIS[31][81];
//int movex[]={-1,0,1,0};
//int movey[]={0,1,0,-1};
//int h;
//int dx,dy;
//char ch;
//void solve(int x, int y )
//{
//	for(int i = 0 ; i< 4 ; i++)
//	{
//		dx=x+movex[i];
//		dy=y+movey[i];
//		if(dx>=0 && dy>=0 && dx<h && !VIS[dx][dy] && MAP[dx][dy]!='X' && MAP[dx][dy]!=0)
//		{
//			MAP[dx][dy]=ch;
//			VIS[dx][dy]=true;
//			solve(dx,dy);
//		}
//	}
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	//	freopen("output.out","w",stdout);
//
//	while(cin.getline(MAP[0], 85, '\n'))
//	{
//		memset(VIS,false,sizeof(VIS));
//		memset(VIS,0,sizeof(MAP));
//		h=1;
//		while(MAP[h-1][0]!='_')
//		{
//			cin.getline(MAP[h++], 85, '\n');
//		}
//		h--;
//
//		for(int i = 0 ; i<h ; i++)
//			for(int j = 0 ; MAP[i][j]!=0 ; j++)
//				if(MAP[i][j]!='X' && MAP[i][j]!=' ' && !VIS[i][j] )
//				{
//					ch=MAP[i][j];
//					VIS[i][j]=true;
//					solve(i,j);
//				}
//
//
//				for(int i = 0 ; i<=h ; i++)
//					printf("%s\n",MAP[i]);
//	}
//	return 0;
//}