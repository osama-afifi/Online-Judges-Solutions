///*
//
//Begin Losing function same as winning except you must also return true If you can't move
//If Can't Win -> Second
//If Can Win and Can Lose (Prince el lyaly)-> First
//If Can Win and can't Lose AND k%2==1 -> First
//Else -> Second 
//
//*/
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//const LL oo = 1<<25;
//
//LL n, k;
//string s;
//
//class Node {
//public:
//    Node() { mContent = ' '; mMarker = false; }
//    ~Node() {}
//    char content() { return mContent; }
//    void setContent(char c) { mContent = c; }
//    bool wordMarker() { return mMarker; }
//    void setWordMarker() { mMarker = true; }
//    Node* findChild(char c);
//    void appendChild(Node* child) { mChildren.push_back(child); }
//    vector<Node*> children() { return mChildren; }
//
//private:
//    char mContent;
//    bool mMarker;
//    vector<Node*> mChildren;
//};
//
//class Trie {
//public:
//    Trie();
//    ~Trie();
//    void addWord(string s);
//    bool searchWord(string s);
//    void deleteWord(string s);
//    Node* root;
//};
//
//Node* Node::findChild(char c)
//{
//    for ( int i = 0; i < mChildren.size(); i++ )
//    {
//        Node* tmp = mChildren.at(i);
//        if ( tmp->content() == c )
//        {
//            return tmp;
//        }
//    }
//    return NULL;
//}
//
//Trie::Trie()
//{
//    root = new Node();
//}
//
//Trie::~Trie()
//{
//    // Free memory
//}
//
//void Trie::addWord(string s)
//{
//    Node* current = root;
//
//    if ( s.length() == 0 )
//    {
//        current->setWordMarker(); // an empty word
//        return;
//    }
//
//    for ( int i = 0; i < s.length(); i++ )
//    {        
//        Node* child = current->findChild(s[i]);
//        if ( child != NULL )
//        {
//            current = child;
//        }
//        else
//        {
//            Node* tmp = new Node();
//            tmp->setContent(s[i]);
//            current->appendChild(tmp);
//            current = tmp;
//        }
//        if ( i == s.length() - 1 )
//            current->setWordMarker();
//    }
//}
//
//int solve(Node* cur)
//{
//	if(cur==NULL)
//		return false;
//	LL win = false;
//	FOR(i,0,30)
//	{
//		Node* temp = cur->findChild(i+'a');
//		if (temp!=NULL)
//		{
//			if (!solve(cur->findChild(i+'a')))
//				win = true;
//		}
//	}
//	return win;
//}
//int solve2(Node* cur)
//{
//
//	if(cur==NULL)
//		return false;
//	bool moved=1;
//	LL win = false;
//	FOR(i,0,30)
//	{
//		Node* temp = cur->findChild(i+'a');
//		if (temp!=NULL)
//		{
//			moved=0;
//			if (!solve2(cur->findChild(i+'a')))
//				win = true;
//		}
//	}
//	return win || moved;
//}
//
//	
//int main()
//{
//
//	freopen("input.in", "r" , stdin);
//
//	while(cin >> n >> k)
//	{
//		Trie* T = new Trie();
//    
//		FOR(i,0, n) 
//		{
//			cin >> s;
//			T->addWord(s);
//		}
//		int win = solve(T->root);
//		int lose = solve2(T->root);
//
//
//		if(!win)
//			cout << "Second" <<endl;
//		else if(lose && win)
//			cout << "First" <<endl;
//		else
//		{
//			if ((!lose && win) && k % 2 ==1)
//				cout << "First" <<endl;
//			else
//				cout << "Second" <<endl;
//		}
//	}
//}