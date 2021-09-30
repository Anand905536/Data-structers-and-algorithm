#include<bits/stdc++.h>
using namespace std;
#include "linkedlistclass.cpp"
 node* input()
  {
    int data;
    cin>>data;
    node *head=NULL;
    while(data!=-1)
    {
       node *newnode=new node(data);
             if(head==NULL)
             {
                 head=newnode;
             }
             else
             {
             node *temp=head; 
             while(temp->next!= NULL)
                  {
                     temp=temp->next;
                  }
             temp->next=newnode;
            }
       cin>>data;
    }
    return head;
  }
  node* input2()
  {
  	int data;
  	cin>>data;
  	node* head=NULL;
  	node* tail=NULL;
  	while(data!=-1)
  	{
  		node* newnode=new node(data);
  		if(head==NULL)
  		{
          head=newnode;
          tail=newnode;
  		}

  		else{

  			tail->next=newnode;
  			tail=tail->next;
  			// or 
  			// tail=newnode;
  		}
        cin>>data;
  	}
  	return head;
  }
  node *insertion(node* head,int i,int data)
  {
  	node* newnode=new node(data);
  	if(i==0)
  	{
       newnode->next=head;
       head=newnode;
       return head;
    }
    else{
     int count=1;
    
  
  	node* temp=head;
  	while(temp!=NULL && count<i)
  	{
  		count++;
  		temp=temp->next;
  	}
  	if(temp!=NULL )
  	{
  		 newnode->next=temp->next;
      temp->next=newnode;
  	}
  }

     return head;
  }
  node* deletion(node* head,int i)
  {
  if(i==0)
  {
  	return head=head->next;
  }
  	int count=0;
  	int counter=0;
  	node* temp1=head;
  	while(temp1!=NULL)
  	  {
  		counter++;
  	// cout<<counter<<endl;;
  		temp1=temp1->next;
  	  }
  	if(counter>=i) 
  	 {
  	node* temp=head;
  	while(temp!=NULL && count<i-1)
     	{
  		count++;
  		temp=temp->next;
  	    }
  	    node* todelete=temp->next;
     temp->next=temp->next->next;
     delete todelete;
     return head;
     }
    else
        {
         return head;
        }
  
   }
  	
void print(node *head)
  {
    node* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"->";
      temp=temp->next;
    }
    cout<<endl;
  }
node* check(node* head,int i)
{
	if(head==NULL)
	{
		return head;
	}

     if(i==0){
       //  node *temp=head;
       // head=head->next;
       //  delete temp;
        return head->next;
         
    }
}
	
	int checklength(node* head)
	{
		if(head==NULL)
		{
			return 0;
		}
		return 1+checklength(head->next);
	}
 node* lastappend(node* head,int n)
 {
 	node* temp=head;
 	node* tail=head;
 	if(head==NULL)
 	{
 		return NULL;
 	}
 	int i=-n;
 	while(temp->next!=NULL)
 	{
 		if(i>=0)
 		{
 			tail=tail->next;
 		}
 		temp=temp->next;
 		i++;
 	}
 	temp->next=head;
 	node* newhead=tail->next;
 	tail->next=NULL;
 	return newhead;
 }
 node* duplicate(node* head)
 {
 	if(!head)
 	{
 		return NULL;
 	}
 	node* temp=head;
 	while(temp->next!=NULL)
 	{
 		if(temp->data==temp->next->data)
 		{
 			temp->next=temp->next->next;

 		}
 		else{
              temp=temp->next;
 		}
 	}
 	return head;

 }

 //  1 recursive method for reverse
 node* reverse(node* head)
 {
 	
 	if(head==NULL ||head->next==NULL)
 	{
 		return head;
 	}
 	node* newhead=reverse(head->next);
 	node* headnext=head->next;
 	headnext->next=head;
 	head->next=NULL;
 	return newhead;
 }
 //2 recursive mmethod for revrese
 node* ireverse2(node* head)
 {
 	if(head==NULL || head->next==NULL)
 	{
 		return head;
 	}
 	node* temp=ireverse2(head->next);
   node* store=temp;
   while(store->next!=NULL)
   {
   	store=store->next;
   }
   store->next=head;
   head->next=NULL;
   return temp;
 }

 
 // iterative method of reverse
 node* ireverse(node* head)
 {
   node* prev=NULL;
   node* curr=head;
   while(curr!=NULL)
   {
   	node* temp=curr->next;
   	curr->next=prev;
   	prev=NULL;


   	prev=curr;
   	curr=temp;
   }
   return prev;
 
 }
 bool palindrome(node* head)
 {
 	node* slow=head;
 	node* fast=head;
 	while(fast!=NULL && fast->next!=NULL)
 	{
 		slow=slow->next;
 		fast=fast->next->next;
 	}
 	node* prev=NULL;
 	node* curr=slow;
 	node* nextptr;
 	while(curr!=NULL)
 	{
 		nextptr=curr->next;
 		curr->next=prev;

 		prev=curr;
 		curr=nextptr;
 	}
 	fast=head;
 	while(prev!=NULL)
 	{
 		if(fast->data!=prev->data)
 		{
 			return false;
 		}
 		prev=prev->next;
 		fast=fast->next;
 	}
    return  true;
}
int findrec(node* head,int n)
{
	if(head==NULL)
	{
		return -1;
	}
	if(head->data==n)
	{
		return 0;
	}
	int store=findrec(head->next,n);
	if(store!=-1)
	{
		return 1+store;
	}
	else{
		return -1;
	}
}
// insert node recursively 

node* insertati(node* head,int i,int data)
{
	if(head==NULL)
	{
		return head; 
	}
	if(i==0)
	{
		node* newnode=new node(data);
		newnode->next=head;
		return newnode;
	}
	head->next=insertati(head->next, i-1,data);
	return head;
}
// delete node recursively
 node* deleteati(node* head,int i)
 {
 	if(head==NULL)
 	{
 		return head;
 	}
 	if(i==0)
 	{
 		return head=head->next;
 	}
 	head->next=deleteati(head->next,i-1);
 	return head;
 }
 node* mergetwosorted(node* head1,node* head2)
 {
 	if(head1==NULL)
 	{
 		return head2;
 	}
 	if(head2==NULL)
 	{
 		return head1;
 	}
 	node* newhead=NULL;
 	node* tail=NULL;
 	node* temp1=head1;
 	node* temp2=head2;
 	while(temp1!=NULL && temp2!=NULL)
 	{
 		if(temp1->data>temp2->data)
 		{
 		if(newhead==NULL)
 		{
 			newhead=temp2;
 			tail=temp2;
 			temp2=temp2->next;
 		}
 		else{
 		tail->next=temp2;
 		tail=tail->next;
 		temp2=temp2->next;
 	     }
 	   }
 	   else if(temp2->data>=temp1->data)
 	   {
 	   	if(newhead==NULL)
 	   	{
 	   		newhead=temp1;
 	   		tail=temp1;
 	   		temp1=temp1->next;
 	   	}
 	   	else{
 	   	tail->next=temp1;
 	   	tail=tail->next;
 	   	temp1=temp1->next;
 	   }
 	  }
 	}

      while(temp1!=NULL)
      {
      	tail->next=temp1;
      	tail=tail->next;
      	temp1=temp1->next;

      }

 while(temp2!=NULL)
      {
      	tail->next=temp2;
      	tail=tail->next;
      	temp2=temp2->next;

      }

   return newhead;
}
//   even after odd
// Node *evenAfterOdd(Node *head)
// {
// 	Node* temp=head;
//    Node* oddhead=NULL;
//     Node* oddtail=NULL;
//     Node* evenhead=NULL;
//     Node* eventail=NULL;
//     while(temp<=NULL)
//     {
//         if(temp->data%2==0)
//         {
          
//              if(evenhead==NULL)
//            {
//               evenhead=temp;
//                eventail=temp;
//                temp=temp->next;
//            }
//             else
//             {
//                 eventail->next=temp;
//                eventail=eventail->next;
//                 temp=temp->next;
//             }
//         }
//         else
//         {
//              if(oddhead==NULL)
//            {
//                oddhead=temp;
//                oddtail=temp;
//                temp=temp->next;
//            }
//             else
//             {
//                 oddtail->next=temp;
//                 oddtail=oddtail->next;
//                 temp=temp->next;
//             }
//         }
//     }
//     oddtail->next=NULL;
//     eventail->next=NULL;
//     oddtail=evenhead;
//     return oddhead;
    
// }
node* swap(node* head,int i,int j)
{
	node* temp=head;
	node* prevc1;
	node* c1;
	node* prevc2;
	node* c2;
	int count1=0;
	int count2=0;
	int countj=0;
	if(i==0)
	{
      c1=temp;
      while(countj!=j-1)
      {
         countj++;
         temp=temp->next;
      }
      prevc2=temp;
    }
	while(count1!=i-1)
	{
		count1++;
		temp=temp->next;
	}
	prevc1=temp;
	c1=temp->next;
	temp=head;
	while(count2!=j-1)
	{
		count2++;
		temp=temp->next;
	}
	 prevc2=temp;
	 c2=temp->next;
	 prevc1->next=c2;
	 prevc2->next=c1;
	 c1->next=c2->next;
	  c2->next=prevc2;
	return head;
}
node* add1(node* head)
{
 node* temp=head;
    int count1=0;
    while(temp!=NULL)
    {
        count1++;
        temp=temp->next;
        
}
temp=head;
    int count2=0;
    while(temp!=NULL)
    {
      if(temp->data==9)
      {
         count2++;
        
      }
       
        temp=temp->next;
}
    temp=head;
    cout<<count2<<endl;
    cout<<count2<<endl;
    if(count1==count2)
    {
        temp->data=1;
        temp=temp->next;
        while(temp!=NULL)
        {
            temp->data=0;
            temp=temp->next;
        }
        int val=0;
          node* newnode=new node();
          newnode->data=val;
        newnode->next=NULL
       temp->next=newnode;
     
    }
    return head;
}
// node* mergerecursion(node* head1)
// {
// 	node* first=head1;
// 	node* second=head1;
// 	while(second!=NULL && second->next!=NULL)
// 	{
// 		first=first->next;
// 		second=second->next->next;
// 	}
// 	node* store=first;
// 	helper(head,store,second);
// }
int main()
 { 
   // static declaration
     // node n1(1);
     // node *head=&n1;
     // node n2(2);
     // node n3(3);
     // node n4(4);
     // node n5(5);
     // n1.next=&n2;
     // n2.next=&n3;
     // n3.next=&n4;
     // n4.next=&n5;
     // print(head);

// dynamic declaration

     // node* n6=new node(6);
     // node* head=n6;
     // node* n7=new node(7);
     // node* n8=new node(8);
     // node* n9=new node(9);
     // node* n10=new node(10);
     //     n6->next=n7;
     //     n7->next=n8;
     //     n8->next=n9;
     //     n9->next=n10;
      
      // print(head);
      node *head1=input2();
     // head=insertion(head,0,56);
      // print(head1);
     // head=deletion(head,0);
      // print(head);
    // cout<<checklength(head);
       // check(head);
     // head=lastappend(head,3);
     // print(head);
        // head=duplicate(head);
      // head=ireverse(head);
      // print(head);
      // head1=reverse(head1);
      // print(head1);
      // cout<<palindrome(head);
      // cout<<findrec(head,5);
      // head=insertati(head,3,7);
      // print(head);
     // head=deleteati(head,4);
       // print(head1);
      // node* head2=input2();
      //   print(head2);
      // node* newhead=mergetwosorted(head1,head2);
      //  print(newhead);
      // head1=mergerecursion(head1);
      // print(head1);
      // head1=ireverse2(head1);
      // print(head1);
      // head1=swap(head1,2,5);
      // print(head1);

      head1=add1(head1);
      print(head1);

      	return 0;
}