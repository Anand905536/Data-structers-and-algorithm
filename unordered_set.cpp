#include<bits/stdc++.h>
using  namespace std;
void iunoredred(unordered_set<string>s)
{
     
	for(auto &v:s)
	{
	cout<<v<<endl;
}
return ;
}

int main()
{
	unordered_set<string>s;       //o(1)
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string st;
		cin>>st;
		s.insert(st);
	}
	int q;
	cin>>q;
	while(q--)
	{
		string sp;
		cin>>sp;
	if(s.find(sp)!=s.end())
	{
		cout<<"yes";
	}
	else{
		cout<<"no"<<endl;
	}
	return 0;
	}





	// s.insert("arnav");
	// s.insert("anand");
	// s.insert("adityya");
	// s.insert("ananad");
	// s.insert("aaa");        //        o(1)
	// s.erase("adityya");       //     0(1)
	iunoredred(s);
	return 0;
}