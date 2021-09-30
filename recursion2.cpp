#include<bits/stdc++.h>
using namespace std;
void returnpermutation(string s,string ouput[])
{
      
}
int main()
{
	string s;
	getline(cin,s);
	string output[1000];
	int count=returnpermutation(s,output);
   for(int i=0;i<count && i<1000;i++)
   {
   	cout<<output[i]<<endl;
   }

































// void print(int input[], int size, int output[]){
    
//     if(input[0]=='\0'){
//         for(int i=0;i<size;i++)
//             cout<<output[i]<<" ";
//         cout<<endl;
//         return;
//     }
//     int new_output[size+1];
//     for(int i=0;i<size;i++){
//         new_output[i]=output[i];
//     }
//     new_output[size]=input[0];
//     print(input+1,size,output);
//     print(input+1,size+1,new_output);
    
// }

// void printSubsetsOfArray(int input[], int size){
//     int output[size];
//     output[0]='\0';
//     print(input,0,output);
// }

// void helper(int a[],int n,int a2[],int m)
// {
// 	int output[n];
// 	if(n==0)
// 	{
// 	  for(int i=0;i<m;i++)
// 	  {
// 	  	cout<<output[i]<<endl;
// 	  }
// 	  return;
// 	}
	
// 	for(int i=0;i<m-1;i++)
// 	{
// 		output[i]=a2[i];
// 	}

// 	helper(a,n-1,a2,m);
	
// 	helper(a,n-1,output,m+1);
// }
// void printsubarray(int a[],int n)
// {
// 	int m=n;
//    int a2[m];
//    a2[0]='\0';
//    helper(a,n,a2,m);
// }
// int main()
// {
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// {
// 	cin>>a[i];
// }
//   printsubarray(a,n);  



































       // return keypad

// const string str[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
// int keypad(int num, string output[])
// 	{
//        if(num<=1){
//         output[0]="";
//         return 1;
//     }
//     string tempOutput[1000];
// 	int lastDigit = num%10;
//     int smallOutput = keypad(num/10,tempOutput);
//     int k=0; 
//     for(int i=0;i<str[lastDigit].size();i++){
//      for(int j=0;j<smallOutput;j++){
//             output[k] = tempOutput[j] + str[lastDigit][i];
//             k++;
//         }
//     }
//     //return smallOutput*str[lastDigit].size();
//     return k;
// }
// int main()
// {
//    int num;
//    cin>>num;
//   string output[1000];
//   int count=keypad(num,output);
//   for(int i=0;i<count && i<1000;i++)
//   {
//   	cout<<output[i]<<endl;
//   }




     // printsubs


// void printsubs(string input,string output)
// {
// 	if(input.empty())
// 	{
// 		cout<<output<<endl;
// 		return;
// 	}
// 	printsubs(input.substr(1),output);
// 	printsubs(input.substr(1),output+input[0]);
// }
// int main()
// {
// 	string input;
// 	getline(cin,input);
// 	string output="";
// 	printsubs(input,output);





        // staircase 


// int staircase(int n)
// {
// 	 if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return 1;
//     }
//     int first=staircase(n-1);
//     int sec=staircase(n-2);
//     int third=staircase(n-3);
//     return first+sec+third;

// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	cout<<staircase(n)<<endl;
	



      // return subsequence

// int subs(string s,string *so)
// {
// 	if(s.empty())
// 	{
// 	 so[0]="";
// 	 return 1;
// 	}
// 	string subsequence=s.substr(1);
// 	int subscount=subs(subsequence,so);
// 	for(int i=0;i<subscount;i++)
// 	{
// 		so[i+subscount]=s[0]+so[i];
// 	}
// 	return 2*subscount;
// }
// int main()
// {
//  string s;
//  getline(cin,s);
//  string so[100];
//  int count=subs(s,so);
//  for(int i=0;i<count;i++)
//  {
//      cout<<so[i]<<endl;
//  }
     







     // quick sort


// int partition(int *a,int start,int end)
// {
// 	int n=end-start+1;
// 	int store=a[start];
// 	int count=start;
// 	for(int i=start+1;i<=end;i++)
// 	{
// 		if(a[i]<=store)
// 		{
// 			count++;
// 		}
// 	}
// 	// cout<<count<<endl;
// 	swap(a[count],a[start]);
// 	int i=start;
// 	int j=end;
//     while(i<count && count<j)
// 	{
//          if(a[i]<=a[count])
//          {
//             i++;
            
//          }
//         else if(a[j]>a[count])
//         {
//         	j--;
//         }
//         else{
//         	swap(a[i],a[j]);
//         	i++;
//         	j--;
//         }
// 	}
// 	return count;
// }
// void helper(int *a,int start,int end)
// {
// 	int n=end-start+1;
// 	if(start>=end)
// 	{
// 		return;
// 	}
// 	 int pivotindex=partition(a,start,end);

// 	helper(a,start,pivotindex-1);
// 	helper(a,pivotindex+1,end);

// }
// void quicksort(int *a,int n)
// {
// 	helper(a,0,n-1);
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	quicksort(a,n);
// 	for(int i=0;i<n;i++)
// 	{
// 		cout<<a[i]<<" ";
// 	}





      // merge sort



// void helper2(int a[],int start,int end)
// {
// 	int mid=(start+end)/2;
// 	int n1=end-start+1;
// 	int a2[n1];
// 	int i=0;
// 	int k=start;
//      int imid=mid+1;
//      while(k<=mid && imid<=end){
//      	if(a[k]>=a[imid])
//         {
//     	   a2[i]=a[imid];
//     	   imid++;
//     	   i++;
//         }
//         else if(a[k]<a[imid])
//         {
//         	a2[i]=a[k];
//         	k++;
//         	i++;
//         }
//         // i++;
//      }

//     while(k<=mid)
//     {
//     	a2[i]=a[k];
//     	k++;
//     	i++;
//     }
//       while(imid<=end)
//     {
//     	a2[i]=a[imid];
//     	imid++;
//     	i++;
//     }
//     int m=0;
//     for(int i=start;i<=end;i++)
//     {
//     	a[i]=a2[m];
//     	 m++;
//     }
// }
// void helper(int a[],int start,int end)
// {
// 	int mid=(start+end)/2;
	
// 	if(start>=end)
// 	{
// 		return;
// 	}
// 	helper(a,start,mid);
// 	helper(a,mid+1,end);
// 	helper2(a,start,end);
     
// }
// void mergesort(int a[],int size)
// {
// 	int n=size;
// 	helper(a,0,n-1);
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// int a[n];

// for(int i=0;i<n;i++)
// {
// 	cin>>a[i];
// }
// mergesort(a,n);
// for(int i=0;i<n;i++)
// {
// 	cout<<a[i]<<" ";
// }



         // removeduplicates


// void removeduplicate(char input[])
// {
// 	if(strlen(input)==0)
// 	{
// 		return;
// 	}
// 	if(input[0]==input[1])
// 	{
//         int count=0;
//         int i=0;
//         while(input[i]!='\0')
//         {
//         	count++;
//         	i++;
//         }

// 		for(int i=1;i<=strlen(input);i++)
// 		{
// 			input[i-1]=input[i];
// 		}
//         removeduplicate(input);
// 	}
// 	removeduplicate(input+1);
// }

// int main()
// {
// 	char input[100];
// 	cin.getline(input,100);
// 	removeduplicate(input);
// 	cout<<input<<endl;







     // replacecharcter


// void replacechar(char s[],char c1,char c2)
// {
//     if(strlen(s)==0)
//     {
//     	return ;
//     }
//     if(s[0]==c1)
//     {
//     	s[0]=c2;
//     	replacechar(s+1,c1,c2);
//     }
//     replacechar(s+1,c1,c2);
// }

// int main()
// {
// char s[100];
// char c1,c2;
// cin.getline(s,100);
// cin>>c1>>c2;
// replacechar(s,c1,c2);
// cout<<s<<endl;







        // pairstar


// void pairstar(char a[])
// {
// 	if(strlen(a)==0)
// 	{
// 		return ;
// 	}
// 	if(a[0]==a[1])
// 	{
// 		for(int i=strlen(a);i>=1;i--)
// 		{
// 			a[i+1]=a[i];
// 		}
// 		a[1]='*';
// 		pairstar(a+1);
// 	}
// 	pairstar(a+1);
// }
// int main()
// {

// 	char a[100];
// 	cin.getline(a,100);
// 	pairstar(a);
// 	cout<<a<<endl;






      // convetr to number



// int convertnum(char a[])
// {
// 	int n=strlen(a);
//    if(strlen(a)==1)
//    {
//    	return a[0]-48;
//    }
// int c=a[0]-48;
//    int b=convertnum(a+1);
   
//    return c*pow(10,n-1)+b;
// }
// int main()
// {
//  char a[50];
//  cin>>a;
//  cout<<convertnum(a)<<endl;
	


               // replace PI



// void replacepi(char a[])
// {
// 	if(strlen(a)==0)
// 	{
// 		return;
// 	}
// 	  if(a[0]=='p' && a[1]=='i')
//     {
//           int count=0;
//           int i=0;
//           while(a[i]!='\0')
//           {
//             count++;
//             i++;
              
//          }
//          for(int i=count;i>=2;i--)
//          {
//          a[i+2]=a[i];
//          }
//          a[0]='3';
          
//         a[1]='.';
//         a[2]='1';
//         a[3]='4';
//          replacepi(a+2);
//     }
//     else{
//         replacepi(a+1);
//     }
// }
// 





                // remove X

// void removeX(char a[]) {
   
//        if(strlen(a)==0)
//        {
//            return;
//        }
//     if(a[0]=='x')
//     {

//         int count=0;
//         int i=0;
//         while(a[i]!='\0')
//         {
//             count++;
//             i++;
//         }
//         for(int i=1;i<=count;i++)
//         {
//             a[i-1]=a[i];
//        }
//       removeX(a);
//     }
//     else{
//          removeX(a+1);
//     }
   
// }





          // string to number

// void stringtonumber(char a[])

// {
// 	if(strlen(a)==0)
// 	{
// 	return;
//     }
 








// }
// int main()
// {
     
//     char a[10000];
//     cin.getline(a,10000);
//     int n=strlen(a);
//   //  replacepi(a);
//     // removeX(a);
//     stringtonumber(a);
//     cout<<a<<" ";
     
	return 0;
}