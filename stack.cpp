#include<bits/stdc++.h>
using namespace std;
#include "stackclass.cpp"
bool checkbrackets(string st)
{
	int count=0;
   int n=st.size();
   stack<char>s;
   for(int i=0;i<n;i++)
   {
   	if(st[i]=='[' || st[i]=='{' || st[i]=='(')
   	{
   		s.push(st[i]);
   		// cout<<s.top();
   	}
   	else if(st[i]==']' || st[i]=='}' || st[i]==')')
   	{
   		if(s.size()>=1){
   			if(s.top()!=st[i])
   			{
   				s.pop();
   				
   			}
   			else{
   				return 0;
   				break;
   			}
   	    }
   	}
   }
   if(s.size()==0)
        {
       return 1;
       }
 
   

}
int* stockSpan(int *price, int size)  
{
 stack<int> s; 
    int *output = new int[size]; 
    
    for(int i = 0; i < size; i++) { 
        while(!s.empty() && price[s.top()] < price[i]) {
            s.pop(); 
    }
    if(s.empty()) {
     output[i] = i + 1; 
    } 
    else { 
    output[i] = i - s.top(); 
    } 
    s.push(i); 
} 
    return output;
}
int minimumreversal(string st)
{
	stack<char>s;
   int n=st.size();
   int  count=0;
   if(n%2!=0)
   {
   	return -1;
   }
   for(int i=0;i<n;i++)
   {
   	if(st[i]=='{')
   	{
   		s.push(st[i]);
   	}
   		else if(st[i]=='}' && s.empty())
   	{
         s.push(st[i]);
   	}
   		else if(st[i]=='}' && s.top()=='}')
   	{
   		s.push(st[i]);
   	}
   	else if(st[i]=='}' && s.top()=='{')
   	{
   		s.pop();
   	}
   }
   while(!s.empty())
   {
   	char c1=s.top();
   	s.pop();
   	char c2=s.top();
   	s.pop();
   	if(c1==c2)
   	{
   		count++;
   	}
   	else{
   		count =count+2;
   	}
   	
   }
   return count;
}
bool checkredundent(string expression)
{
	int count=0;
    stack<int>s;
    int n=expression.size();
    for(int i=0;i<n;i++)
    {
        if(expression[i]!=')')
        {
            s.push(expression[i]);
       }
        else if(expression[i]==')')
        {
            while(s.top()!='(')
            {
            s.pop();
            count++;
             // cout<<count<<endl;
            }
            if(count<=1) // change
            {
//                 redundent 
                return true  ;
                // break;
             }
            else if(count>1)
            {
                count=0;
                s.pop(); // change (
             }
         }
    }
//     not redundent
   return false;
}
 void reversestack(stack<int>&s1,stack<int>&s2)
 {
 	s2=s1;
 	while(!s1.empty())
 	{
 		s1.pop();
 	}
 	while(!s2.empty())
 	{
 		// int store=s2.top();
 		s1.push(s2.top());
 		s2.pop();
 	}
 }
    


int main()
{
	// stackusingarray<int>s;
	// s.push(2);
	// s.push(3);
	// s.push(4);
	// s.push(5);
	// s.push(6);
	// cout<<s.isempty()<<endl;
	// s.push(4);
	// s.push(3);
	// cout<<s.pop()<<endl;;
	// cout<<s.pop()<<endl;;
	// cout<<s.top()<<endl;
	// cout<<s.pop()<<endl;
	// cout<<s.top()<<endl;



	// template
	  // pair<int,int>p2;
   //  Pair<pair<int,int>,char>p;
  
   //  p.setx(p2);
   //  p.sety('r');
    
   //  cout<<p.getx().getx()<<" "<<p.gety()<<endl;


	//inbuilt stack
	// stack<int>s1;
	// s1.push(1);
	// s1.push(2);
	// s1.push(3);
	// s1.push(4);
	// cout<<s1.top()<<endl;
	// s1.pop();
	// cout<<s1.top()<<endl;
	// s1.pop();
	// s1.pop();
	// s1.pop();
	// cout<<s1.size()<<endl;;
	// cout<<s1.empty()<<endl; 

// string st;
// cin>>st;
// int store=checkbrackets(st);
// if(store==1)
// {
// 	cout<<"balance"<<endl;
// }
// else{
// 	cout<<"unbalance"<<endl;
// }

// }
// int n;
// cin>>n;
// int price[n];
// for(int i=0;i<n;i++)
// {
// 	cin>>price[i];
// }
//   int *output = stockSpan(price,n);
//     for (int i = 0; i <n; i++) {
//         cout << output[i] << " ";
//     }

//     cout <<endl;
//     delete[] output;
   // string st;
   // cin>>st;
   // cout<<minimumreversal(st);

   // string st;
   // cin>>st;
   // int store=checkredundent(st);
   // if(store==1)
   // {
   // 	cout<<"true"<<endl;
   // }
   // else{
   // 	cout<<"false"<<endl;
   // }
  
  stack<int>s1;
  stack<int>s2;
  int n,val;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	cin>>val;
  	s1.push(val);
  }
  reversestack(s1,s2);
  for(int i=0;i<n;i++)
  {
  	cout<<s1.top()<<" ";
  	s1.pop();
  }
}