#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,string> >vp={{1,"rm"},{2,"chutiya"},{3,"dhakkan"}};
	vector<pair<int,string> >::iterator it;
	for(it=vp.begin();it!=vp.end();it++)
	{
		cout<<(*it).first<<(*it).second<<" ";// also be written as cout<<it->first<<it->second<<endl;# include<bits/stdc++.h>
    }
    cout<<endl;
   for(auto it=vp.begin();it!=vp.end();it++)//use of auto keyword
    {
    	cout<<(*it).first<<(*it).second<<" ";
    }
    cout<<endl;
    for(pair<int,string> &value:vp)//another loop
    {
    	cout<<value.first<<value.second<<" ";
    }
    cout<<endl;
    for(auto &value:vp)//use of auto
    {
    	cout<<value.first<<value.second<<" ";
    }
    return 0;



}