//#include <iostream>
//
//using namespace std;
//
//int n;
//char MAP[4][4];
//int maxi;
//bool inRange(int x , int y)
//{
//	return (x>=0 && y>=0 && x<n && y<n);
//}
//
//bool safe(int x , int y)
//{
//
//	for(int i =x+1 ; i <n ; i++ )
//		if(MAP[i][y]=='$')
//			return false;
//		else if(MAP[i][y]=='X')break;
//
//		for(int i =x-1 ; i >=0 ; i-- )
//			if(MAP[i][y]=='$')
//				return false;
//			else if(MAP[i][y]=='X')break;
//			for(int i =y+1 ; i <n ; i++ )
//				if(MAP[x][i]=='$')
//					return false;
//				else if(MAP[x][i]=='X')break;
//				for(int i =y-1 ; i >=0 ; i-- )
//					if(MAP[x][i]=='$')
//						return false;
//					else if(MAP[x][i]=='X')break;
//					return true;
//}
//
//void solve(int index )
//{
//
//	if(index>maxi)
//		maxi=index;
//
//	for(int i = 0 ; i<n; i++)
//		for(int j = 0 ; j<n; j++)
//		{
//			if( inRange(i,j) && MAP[i][j]=='.' && safe(i,j) )
//			{
//				MAP[i][j]='$';
//				solve(index+1);
//				MAP[i][j]='.';
//			}
//
//		}
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(cin>>n)
//	{
//		if(!n)break;
//		maxi=0;
//
//		for(int i = 0 ; i<n ;i++)
//			for(int j = 0 ; j<n ;j++)
//				cin>>MAP[i][j];
//
//		solve(0);
//
//		cout<<maxi<<endl;
//
//	}
//
//
//	return 0;
//
//}