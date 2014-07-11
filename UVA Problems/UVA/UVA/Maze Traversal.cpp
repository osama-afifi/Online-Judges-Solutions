//
//#include <iostream>
//#include <cstring>
//#include <string.h>
//#include <cstdio>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//struct Node
//{
//	int x,y,dir;
//};
//
//int m,n,sx,sy;
//char MAP[61][61];
//int movex[]= {-1,0,1,0};
//int movey[]= {0,1,0,-1};
//
//bool inRange(int x ,int y)
//{
//	return (x>=0 && y>=0 && x<n && y<m) ? true : false;
//}
//
//char DIR[] = {'N','E','S','W'};
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int test;
//
//	scanf("%d",&test);
//	cin.ignore();
//
//
//	int n1,n2,cost;
//	while(test--)
//	{
//		cin>>n>>m;
//		cin.ignore(2);
//		for(int i = 0 ; i < n ; i++)
//		{
//			cin.getline(MAP[i],60);
//		}
//		cin>>sx>>sy;
//		char ch;
//		Node current= {sx-1,sy-1,0};
//
//		while(cin>>ch)
//		{
//			if(ch=='Q')break;
//
//			switch (ch)
//			{
//				case 'R':
//				current.dir=(current.dir+1)%4;
//				break;
//
//				case 'L':
//				current.dir=(current.dir+3)%4;
//				break;
//
//				case 'F':
//					if(inRange(current.x+movex[current.dir], current.y+movey[current.dir] ) && MAP[current.x+movex[current.dir]][current.y+movey[current.dir]]!='*')
//					{
//				current.x=current.x+movex[current.dir];
//				current.y=current.y+movey[current.dir];
//					}
//				break;
//
//			}
//
//		}
//
//		printf("%d %d %c\n" ,current.x+1 ,current.y+1 , DIR[current.dir] );	
//
//		if(test)printf("\n");
//
//	}
//
//
//	return 0;
//}
//
