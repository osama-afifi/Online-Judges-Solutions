#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;
int main ()
{
	freopen("input.in","r",stdin);

	int n;
	while(cin>>n)
	{


		queue <int> q;
		priority_queue <int> p;
		stack <int> s;
		bool st=true,pr=true,qu=true;
		int instr,num;

		for(int i=0;i<n;i++)
		{
		cin>>instr>>num;

		if(instr==1)
		{
			q.push(num);
			p.push(num);
			s.push(num);
		}

		else
		{
			
			if(q.empty() || num!=q.front())	qu=false;
				else	q.pop();
			

			
				if(p.empty() || num!=p.top())	pr=false;
				else	p.pop();
			

		
				if(s.empty() || num!=s.top())	st=false;
				else	s.pop();
			
		}

		}
		if(st==true && qu==false && pr==false)
			cout<<"stack"<<endl;
		else if(st==false && qu==true && pr==false)
			cout<<"queue"<<endl;
		else if(st==false && qu==false && pr==true)
			cout<<"priority queue"<<endl;
		else if(st==false && qu==false && pr==false)
			cout<<"impossible"<<endl;
		else
			cout<<"not sure"<<endl;


	}

	return 0;
}

