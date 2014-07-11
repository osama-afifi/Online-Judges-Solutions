#include <iostream>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <sstream>
#include <vector>
#include <queue>
#include <string>
#include <stack>
using namespace std;

struct State
{
	int x;
	int y;
	int c;
};

int arrX[] = {-2, -1, -2, -1, 1, 2, 1, 2};
int arrY[] = {-1, -2, 1, 2, -2, -1, 2, 1};

bool check(int x, int y)
{
	return (x >= 0 && y >= 0 && x < 8 && y < 8);
}

int main()
{
	freopen("input.in","r",stdin);
	string togo;
	string from;

	while (cin >> from >> togo)
	{
		bool visited[8][8] = {false};
	
		int fx = from[0] - 'a';
		int fy = from[1] - '1';
		int tx = togo[0] - 'a';
		int ty = togo[1] - '1';

		State start = {fx, fy, 0};

		queue <State> BFS;

		BFS.push(start);
		visited[fx][fy] = true;

		State current;
		while (!BFS.empty())
		{
			current = BFS.front();
			if (current.x == tx && current.y == ty)
			{
				cout << "To get from " << from << " to " << togo << " takes " << current.c << " knight moves." << endl;
				break;
			}

			BFS.pop();
			for (int i = 0; i < 8; i++)
			{
				if (check(current.x + arrX[i], current.y + arrY[i]))
				{
					if (!visited[current.x + arrX[i]][current.y + arrY[i]])
					{
						State temp = {current.x + arrX[i], current.y + arrY[i], current.c + 1};
						BFS.push(temp);
						visited[current.x + arrX[i]][current.y + arrY[i]] = true;
					}
				}
			}
		}
	}

	return 0;
}