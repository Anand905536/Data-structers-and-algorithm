#include<bits/stdc++.h>
using namespace std;
///string print in lexoographical order
void iset(set<int>s)
{
	for(auto &v:s)
	{
	cout<<v<<endl;
}
	return ;
}
int main()
{

	set<int>s;//log(n)
	int n ;
	cin>>n;
	for(int i=0;i<n;i++)//log(n)
	{
		int st;
		cin>>st;
		s.insert(st);

	}
	// s.insert("arnav");//log(n)
	// s.insert("anand");
	// s.insert("adityya");
	// s.insert("ananad");
	// s.insert("arnav");
	// s.insert("anand");
	// s.insert("adityya");
	// s.insert("ananad");
	// s.insert("aaa");
	// s.erase("adityya");//log(n)

	iset(s);
	return 0;
}