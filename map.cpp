#include<bits/stdc++.h>
using namespace std;
void imap(map<string,int> m)
{
	cout<<m.size()<<endl;
	cout<<endl;
	for(auto &mp :m){//(olog(n))
 		cout<<mp.first<<mp.second<<" "<<endl;
 	}
 	return;
}


 int main()
 {
 	map<string,int>m;
 	int n;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		string s;
 		cin>>s;
 		m[s]++;
 	}
 	
 	imap(m);
 	// m[1]=2;
 	// m[5]=90;
 	// m[2]=6;
 	// m.insert({3,34});
 	// m.insert({4,23});
 	// for(auto &mp:m)
 	// {
 	// 	cout<<mp.first<<mp.second<<endl;
 	// }
 	
return 0;
 }