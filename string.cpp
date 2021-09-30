#include<bits/stdc++.h>
using namespace std;
int subs(string input,string output[])
{
	if(input.empty())
	{
		output[0]="";
		return 1;
	}
	string subs1=input.substr(1);

	int subscount=subs(subs1,output);
	for(int i=0;i<subscount;i++)
	{
		output[i+subscount]=input[0]+output[i];
	}
	return 2*subscount;
	

}
int main()
{
	string input;
	cin>>input;
	string output[100];
	int count=subs(input,output);
	for(int i=0;i<count;i++)
	{
		cout<<output[i]<<endl;
	}

return 0;
}