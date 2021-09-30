#include<bits/stdc++.h>
using  namespace std;
void  imap(unordered_map<int,int>m)
{
	cout<<m.size()<<endl;
	cout<<endl;
	for(auto &it:m)
	{
		cout<<it.first<<" "<<it.second<<endl;;
	}
	return ;
}
int main()
{
	
unordered_map<int,int>m;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	int s;
	cin>>s;
	m[s]++;
}
	imap(m);
	// unordered_map<int,string>m;//(time cpmlexity of insertion and deletion is o(1))
	// m[1]="abs";//o(1)
	
	// m[2]="grf";
	// m[5]="toy";
	// m[8]="reaer";
	// m.find(3);//o(n)
	return 0;
}