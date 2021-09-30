#include<bits/stdc++.h>
using namespace std;
int main()
 {
   // int tc;
   // cin>>tc;
   // while(tc--)
   // {
   // 	int n;
   // 	cin>>n;
   // 	int a[n];
   // 	for(int i=0;i<n;i++)
   // 	{
   // 		cin>>a[i];
   // 	}
   // 	int count=0;
   // 	 int *i1=min_element(a,a+n);
   // 	for(int i=0;i<n;i++)
   // 	{
   // 		count++;
   //     if(a[i]==*i1)
   //     {
   //     break;
   //     }
   // 	}
   // 	cout<<count-1<<endl;
   // }






































// 	int tc;
// 	cin>>tc;
// 	while(tc--)
// 	{
// 		int n;
// 		cin>>n;
// 		int a[n];
// 		for(int i=0;i<n;++i)
// 		{
// 			cin>>a[i];
// 		}
//          int d;
//          cin>>d;

		
// 		vector<int>v;
// 		for(int i=0;i<d;++i)
// 		{
// 			v.push_back(a[i]);
// 		}
// // 		 for(int i=0;i<d;i++)
// //     {
// //         cout<<v[i]<<" ";
// // }
// // cout<<endl;
// 		for(int i=d;i<=n-1;++i)
// 		{
// 			a[i-d]=a[i];
// 			 // cout<<a[i]<<" ";
// 		}
// 		 // cout<<endl;

// 		int store=n-d;
// 		// cout<<store<<endl;
// 		int j=0;
// 		for(int i=store;i<n;++i)
// 		{

// 			a[i]=v[j];
// 		  j++;
// 			// cout<<a[i]<<" ";
			
// 		}
// 		// cout<<endl;
// 		for(int i=0;i<n;++i)
// 		{
// 			cout<<a[i]<<" ";
// 		}
	
// }



















































	// int tc;
	// cin>>tc;
	// while(tc--)
	// {
	// 	int n;
	// 	cin>>n;
	// 	int arr[n];
	// 	for(int i=0;i<n;i++)
	// 	{
	// 		cin>>arr[i];
	// 	}
	// 	int m;
	// 	cin>>m;
	// 	sort(arr,arr+n);
	// 	int count=0;
 //        for(int i=0;i<n;i++)
	// 	{
	// 		int j=i+1;
	// 		int k=n-1;
	// 		while(j<k)
 //            {   
 //            	 if(arr[i]+arr[j]+arr[k]>m)
 //            	{
 //            		k--;
 //            	}
 //            		else if(arr[i]+arr[j]+arr[k]<m)
 //            	{
 //            		j++;
 //            	}
 //            	else
 //            	 {  
 //            		count++;
 //            		j++;
 //            	 }
 //            }
	// 	}
	//   //   cout<<endl;
	// 	  cout<<count<<endl;

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int sum=0;
for(int i=0;i<n;i++)
{
   sum+=a[i];
}
if(sum%2==0)
{
	cout<<"true"<<endl;
}
else{
	cout<<"false"<<endl;
}
































   return 0;

}
