//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//int T[50009];
//
//int cum(int i)
//{
//	if(!i)return 0;
//	int sum = 0 ; 
//	while(i>0)
//		sum+=T[i],i -= (i&-i);
//	return sum;
//}
//void upd(int i, int v)
//{
//	if(!i)return;
//	while(i<=50000)
//		T[i]+=v, i+=(i&-i);
//}
//
//int bs(int b, int e , int v)
//{
//	int ret = -1;
//	while(b<e)
//	{
//		int mid = (b+e)/2;
//	
//	
//	
//	}
//	return ret;
//
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,k;
//	while(scanf("%d %d",&n,&k)==2)
//	{
//		int cur = 1;
//		int a,b,c;
//		FOR(i,0,k)
//		{
//			scanf("%d",&a);
//			if(a==1)
//			{
//				scanf("%d",&b);
//				if(cur+b<=n && cum(cur)==0 && cum(cur+b)==0)
//				{
//					printf("%d\n",cur);
//					upd(cur,1);
//					upd(cur+b,-1);
//					cur+=b;
//				}
//				else
//				{
//					bool d = 0;
//					for(int j = 0 ; j+b <=n ; j++)
//						if(cum(j)==0 && cum(j+b)==0)
//						{
//							d=1;
//							upd(j,1);
//							upd(j+b+1,-1);
//							printf("%d\n",j);
//							cur = j+b;
//						}
//				
//					if(!d)printf("0\n");
//						
//				
//				
//				}
//
//
//			}
//			else
//			{
//				scanf("%d %d",&b,&c);
//				upd(b,-1);
//				upd(c+1,1);
//			}
//
//		}
//
//	}
//
//	return 0;
//}


#include <cstdio>
#define MAX(x, y) ((x) > (y) ? (x) : (y))
using namespace std;
const int WHITE = 0,BLACK = 1, COLOR = 2;
/*l : the left point of this interval
r : the right point of this intervall
id : the ID of its left subtreerid : the ID of its right subtree
lm : the longest blank size which begins in l
rm : the longest blank size which ends in r
mv : the longest blank size which is in the interval
c : the color of this interval 
0 : All white 
1 : All black 
2 : Various colors*/
struct node 
{
	int l, r, lid, rid;
	int lm, rm, mv, c;
}t[100005];

int N, M, tp, x, d, cnt, res, ret;
char ch;
inline int Read()
{
	while (ch = getchar(), ch < '0' || ch > '9');
	ret = ch - 48; 
	while (ch = getchar(), ch >= '0' && ch <= '9') ret = ret * 10 + ch - 48; return ret;
}
void build(int l, int r) 
{ 
	// Build range tree
	int id = ++ cnt, mid = (l + r) >> 1;
	t[id].l = l; t[id].r = r;
	t[id].lm = t[id].rm = t[id].mv = r - l + 1;
	t[id].c = WHITE;
	if (l < r)
		t[id].lid = cnt + 1; build(l, mid);
	t[id].rid = cnt + 1; build(mid + 1, r); 
}
}
int query(int id, int aim)
{
	if (t[id].mv < aim)
		return 0;
	if (t[id].lm >= aim) 
		return t[id].l;
	if (int tmp = query(t[id].lid, aim))
		return tmp; 
	if (t[t[id].lid].rm + t[t[id].rid].lm >= aim)
		return t[t[id].lid].r - t[t[id].lid].rm + 1;
	return query(t[id].rid, aim);
}

void modify(int id, int gl, int gr, int ft, int tp) 
{ 
	if (ft != COLOR) 
	{ // If its father's color is unique, of course, its color is unique, too 
		t[id].c = ft;
		if (ft) 
			t[id].mv = t[id].lm = t[id].rm = 0; 
		else 
			t[id].mv = t[id].lm = t[id].rm = t[id].r - t[id].l + 1;
	} 
	if (t[id].c == tp) 
		return; //No need to modify 
	if (t[id].r < gl || t[id].l > gr) return;
	//Non-covered 
	if (t[id].l >= gl && t[id].r <= gr)
	{ 
		// All covered
		t[id].c = tp;
		if (tp) 
			t[id].mv = t[id].lm = t[id].rm = 0;
		else t[id].mv = t[id].lm = t[id].rm = t[id].r - t[id].l + 1;
		return;
	} 
	if (t[id].lid) 
		modify(t[id].lid, gl, gr, t[id].c, tp);
	// Modify its left subtree
	if (t[id].rid)
		modify(t[id].rid, gl, gr, t[id].c, tp);
	// Modify its right subtree
	// Update the new values
	t[id].lm = (t[t[id].lid].c ? t[t[id].lid].lm : t[t[id].lid].lm + t[t[id].rid].lm);
	t[id].rm = (t[t[id].rid].c ? t[t[id].rid].rm : t[t[id].rid].rm + t[t[id].lid].rm);
	t[id].mv = MAX(t[t[id].lid].mv, MAX(t[t[id].rid].mv, MAX(t[id].lm, MAX(t[id].rm, t[t[id].lid].rm + t[t[id].rid].lm))));
	t[id].c = (t[t[id].lid].c == t[t[id].rid].c ? t[t[id].lid].c : COLOR);
}
int main() 
{ 
	freopen("hotel.in","r",stdin);
	freopen("hotel.out","w",stdout);
	scanf("%d%d", &N, &M); 
	build(1, N); 
	for (; M; M--) 
	{ tp = Read(); 
	if (tp == 1) 
	{
		x = Read();
		res = query(1, x);
		printf("%d\n", res);
		if (res)
			modify(1, res, res + x - 1, COLOR, BLACK);
	}
	else 
	{
		x = Read();
		d = Read();
		modify(1, x, x + d - 1, COLOR, WHITE);
	} 
	} 
	return 0;
}
