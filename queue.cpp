#include<bits/stdc++.h>
using namespace std;
#include"queueclass.cpp"
void reversequeue(queue<int>&q)
{
	if(q.size()>0)
	{
        int store=q.front();
        q.pop();
        reversequeue(q);
        q.push(store);
	}
}
int main()
{
// 	queueusingarray<int>q(4);
// 	q.enqueue(10);
// 	q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//      cout<<q.getsize()<<endl;
//      q.enqueue(50);
//      cout<<q.isempty()<<endl;
//      // cout<<q.dequeue()<<endl;
//      cout<<q.dequeue()<<endl;
//      cout<<q.dequeue()<<endl;
//       cout<<q.dequeue()<<endl;
// cout<<q.front()<<endl;
//        cout<<q.dequeue()<<endl;
        
//       cout<<q.getsize()<<endl;
	queue<int>q;
	int n,val;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		q.push(val);
	}
	reversequeue(q);
	for(int i=0;i<n;i++)
{
      cout<<q.front()<<" ";
      q.pop();
}
}