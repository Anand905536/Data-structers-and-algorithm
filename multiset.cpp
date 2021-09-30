#include<bits/stdc++.h>
using namespace std;
// void imultiset(multiset<string>ms)
// {
// 	for(auto &v:ms)
// 	{
// 		cout<<v<<endl;
// 	}
// }
int main()
{
	int t;
    cin>>t;
while(t--)
{
	int n,k;
	cin>>n>>k;
	multiset<long long>bags; 
	for(int i=0;i<n;i++){
	long long candy_ct;
	cin>>candy_ct;
	bags.insert(candy_ct);
   }

int total_candy=0;
for(int i=0;i<k;i++)
{
	auto last_it=(--bags.end());
	long long candy_ct=*last_it;
	total_candy +=candy_ct;
	bags.erase(last_it);
	bags.insert(candy_ct/2);
}
cout<<total_candy<<endl;
}


// multiset<int>ms;  //log(n);
// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
// 	int s;
// 	cin>>s;
// 	ms.insert(s);
// }
// if(ms.find("4")==ms.find("5")){ //0(log(n))

	//ms.erase("rear");//log(n)
	//auto it=ms.find('4');
	//cout<<*it<<endl;
  
// }
// else{
// 	//cout<<"koi baat nhi"<<endl;
// }
// auto it=ms.find("rear");    //o(log(n))
// if(it!=ms.end())
// {
// 	ms.erase(it);       //o(log(n))
// }
// else{
// 	cout<<"okk"<<endl;
// }
// ms.erase("rear");
// imultiset(ms);


	return 0;
}