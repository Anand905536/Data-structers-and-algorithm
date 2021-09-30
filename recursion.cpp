#include<bits/stdc++.h>
using namespace std;
// bool sorted(int a[],int n)
// {
// 	if(n==0)
// 	{
// 		return true;
// 	}
// 	if(n==1)
// 	{
// 		return true;
// 	}
// 	if(a[0]>a[1])
// 	{
// 		return false;
// 	}
// 	bool forsmaller=sorted(a+1,n-1);
// 	return forsmaller;
// }
// bool desc(int a[],int n)
// {
// 	if(n==0)
// 	{
// 		return true;
// 	}
// 	if(n==1)
// 	{
// 		return true;
// 	}
// 	if(a[0]<a[1])
// 	{
// 		return false;
// 	}
// 	bool forsmaller=desc(a+1,n-1);
// 	return desc;
// }
// int sum(int a[],int n)
// {
// 	if(n==0)
// 	{
// 		return 0;
// 	}
	
	
// 	int isum=a[0]+sum(a+1,n-1);
// 	return isum;
// }
// bool present(int a[],int n,int k)
// {
// 	if(n==0)
// 	{
// 		return false;
// 	}

// 	if(a[0]==k)
// 	{
// 		return true;
// 	}
// 	else {
// 		present(a+1,n-1,k);
// 	}
// }
// int first(int a[],int n,int k)
// {
// 	if(n==0)
// 	{
//       return -1;
// 	}
// 	if(a[0]==k)
// 	{
// 		return 0;
// 	}
// 	int store=first(a+1,n-1,k);
// 	if(store!=-1)
// 		{
// 			return store+1;
// 		}
// 	else{
// 			return -1;
// 		}
// 	//return store+1;
// }
// int last(int a[],int n,int k)
// {
// 	if(n==0)
// 	{
//       return -1;
// 	}
	
//   int store=last(a+1,n-1,k);
  	
//   if(store!=-1)
// 	{
// 		return store+1;
// 	}
//   if(a[0]==k)
// 	{
// 		return 0;
// 	}
//    else{
//         return -1;
//       }
//   }
 //  int allindices(int a[],int n,int k)
 //  {
 //  	if(n==0)
 //  	{
 //  		return 0;
 //  	}
 //  int store=allindices(a+1,n-1,k);
 //  	if(a[0]==k)
	// {
		
	// 	cout<<store+1<<" ";
	// }
 //   else{
 //        return store;
 //    }
 //  }
//   int mult(int m,int n)
//   {
//      if(n==0)
//      {
//      	return 0;
//      }
   
//      return m+mult(m,n-1);
//   }
//   int count(int n)
//   {
//   	 if(n/10==0){
//   	 	  if(n==0)
//   	 	  {
//   	 	  	return 1;
//   	 	  }
//   	 	  else {
//   	 	  	return 0;
//   	 	  }
//   	 }
//      if(n %10 ==0)
//         return 1+count(n / 10);
//     else
//         return count(n/10); 
//   }
//   double geosum(int k)
//   {
//   	if(k==0)
//       {
//       return 1;
//      }
//  double isum=1/double(pow(2,k))+geosum(k-1);
//        return isum;

//   }
 // int add(int a[],int size)
 // {
 // 	if(size==0)
 // 	{
 // 		return 0;
 // 	}
 // 	int isum=add(a+1,size-1);
 // 	return a[0]+isum;
 // }
void replacepi(string s)
{
	if(s.length()==0)
	{
		return;
	}
	if(s[0]=='p' && s[1]=='i')
	{
		s[0]='3';
		s[1]='.';
		s[2]='1';
		s[3]='4';
		
	}
	replacepi(s+2);
}
int main()

{
// {
// 	int n,x;
// 	cin>>n>>x;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
	//int* a2=new int [n];
	
	//cout<<add(a,k);
   // int n,k;
    // int m,n;
     //cin>>m>>n;
    //cin>>n>>k;
// int a[n];
 //for(int i=0;i<n;i++)
 //{
 	//cin>>a[i];
 //}
 //cout<<sorted(a,n);
 //cout<<endl;
 //cout<<desc(a,n);
 //cout<<sum(a,n);
// cout<<present(a,n,k);
 //cout<<first(a,n,k);
  //cout<<last(a,n,k);
 //int size=allindices(a,n,x);
 // for(int i=0;i<size;i++)
	// {
	// 	cout<<a2[i]<<" ";
	// }
	// delete [] a2;
 // cout<<mult(m,n);
	//cout<<count(k);
//	cout<<geosum(k);
     string s;
     cin>>s;
     replacepi(s);
     cout<<s<<" ";
	return 0;
}