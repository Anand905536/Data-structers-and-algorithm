#include<bits/stdc++.h>
#include"treeclass.cpp"
using namespace std;
void print(node<int>* root)
{
	if(root==NULL)
	{
		return ;
	}
	cout<<root->data<<":";
	if(root->left!=	NULL)
	{
		cout<<"L"<<root->left->data<<" ";
	}
	if(root->right!=	NULL)
	{
		cout<<"R"<<root->right->data;
	}
	cout<<endl;
	print(root->left);
     print(root->right);
}
node<int>* takeinput()
{
  int rootdata;
  cout<<"enter data"<<endl;
  cin>>rootdata;
  if(rootdata==-1)
  {
  	return NULL;
  }
  node<int>* root=new node<int>(rootdata);
  node<int>* leftchild=takeinput();
  node<int>*rightchild=takeinput();
  root->left=leftchild;
   root->right=rightchild;
  return root ;
}
int countnode(node<int>* root)
{ if(root==NULL)
	{
       return 0;
	}
	int store=countnode(root->left);
	int store2=countnode(root->right);
	return 1+store+store2;

}
bool findnode(node<int>* root,int x)
{
	if(root==NULL)
	{
		return false;
	}
	if(root->data==x)
	{
		return true ;
	}
	bool left=findnode(root->left,x);
	if(left)
	{
		return  true;
	}
	bool right=findnode(root->right,x);
    if(right)
    	{
    		return true;
    	}
}
int height(node<int>* root)
{
	if(root==NULL)
	{
		return 0;
	}
	else{
	int left=height(root->left);
	int right=height(root->right);
	if(left>right)
	{
		return left+1;
	}
	else{
		return right+1;
	}
}
}
void mirrorBinaryTree(node<int>* root) {
   if (root == NULL)
   {
        return;
   }
   
       node<int>*  temp;
        mirrorBinaryTree(root->left);
       mirrorBinaryTree(root->right);
        temp= root->left;
        root->left = root->right;
        root->right = temp;
}
int main()
{
	node<int>* root=new node<int>(10);
	node<int>* first=new node<int>(20);
	node<int>* second=new node<int>(30);
	node<int>* third=new node<int>(40);
	node<int>* forth=new node<int>(50);
	node<int>* fifth=new node<int>(60);
	node<int>* six=new node<int>(70);
	node<int>* seven=new node<int>(80);
	node<int>* eight=new node<int>(90);
	node<int>* ninth=new node<int>(100);
     root->left=first;
     root->right=second;
    first->left=third;
     first->right=forth;
     second->left=fifth;
     second->right=six;
     third->left=seven;
     third->right=eight;
     six->left=ninth;
      // node<int>* root=takeinput();
     print(root);
    //  cout<<countnode(root)<<endl;
    //  cout<<findnode(root,80)<<endl;
     cout<<height(root)<<endl;
     mirrorBinaryTree(root);
      print(root);
     delete(root);
      
	

   







	// node<int>* root=new node<int>(10);
	// node<int>* first=new node<int>(20);
	// node<int>* second=new node<int>(30);
	// node<int>* third=new node<int>(40);
	// node<int>* forth=new node<int>(50);
 //     root->left=first;
 //     root->right=second;
 //    first->left=third;
 //     second->right=forth;


	
 
}
































































































// treenode<int>* levelwise()
// {
// 	int rootData;
// 	cout << "Enter root data" << endl;
// 	cin >> rootData;
// 	treenode<int>* root = new treenode<int>(rootData);

// 	queue<treenode<int>*> pendingNodes;
	
// 	pendingNodes.push(root);
// 	while (pendingNodes.size() != 0) {
// 		treenode<int>* front = pendingNodes.front();
// 		pendingNodes.pop();
// 		cout << "Enter num of children of " << front->data << endl;
// 		int numChild;
// 		cin >> numChild;
// 		for (int i = 0; i < numChild; i++) {
// 			int childData;
// 			cout << "Enter " << i << "th child of " << front->data << endl;
// 			cin >> childData;
// 			treenode<int>* child = new treenode<int>(childData);
// 			front->children.push_back(child);
// 			pendingNodes.push(child);
// 		}
// 	}
// 	return root;
// }
// int countnodes(treenode<int>*root)
// {
// 	int ans=1;
// 	for(int i=0;i<root->children.size();i++)
// 	{
// 		ans+=countnodes(root->children[i]);
// 	}
// 	return ans;
// }
// int findsum(treenode<int>*root)
// {
// 	int store=root->data;
// 	for(int i=0;i<root->children.size();i++)
// 	{
// 		store+=countnodes(root->children[i]);
// 	}
// 	return store;
// }
// treenode<int>* maxdata(treenode<int>*root)
// {
// 	treenode<int>* store=root;
// 	for(int i=0;i<root->children.size();i++)
// 	{
// 		treenode<int>* res=maxdata(root->children[i]);
// 		if(res->data>store->data)
// 		{
// 			store=res;
// 		}
// 	}
// 	return store;
// }
// void printatlevelk(treenode<int>*root,int k)
// {
// 	if(k==0)
// 	{
// 		cout<<root->data<<endl;
// 		return ;
// 	}
// 	for(int i=0;i<root->children.size();i++)
// 	{
// 		printatlevelk(root->children[i],k-1);
// 	}
// }
// void preorder(treenode<int>* root)
// {
// 	if(root==NULL)
// 	{
// 		return ;
// 	}
// 	cout<<root->data<<" ";
// 	for(int i=0;i<root->children.size();i++)
// 	{
// 		preorder(root->children[i]);
// 	}
	
// }
// void postorder(treenode<int>* root)
// {

// 	if(root==NULL)
// 	{
// 		return ;
// 	}
	
// 	for(int i=0;i<root->children.size();i++)
// 	{
// 		postorder(root->children[i]);
// 	}
// 	cout<<root->data<<" ";
// }
// void deletetree(treenode<int>* root)
// {
//    for(int i=0;i<root->children.size();i++)
//    {
//    	deletetree(root->children[i]);
//    }
//    delete root;
// }


// treenode<int>* takeinput()
// {
// 	int rootdata;
// 	cout<<"enter data"<<endl;
// 	cin>>rootdata;
// 	treenode<int>*root=new treenode<int>(rootdata);

// 	int n;
// 	cout<<"enter number of children of"<<rootdata<<endl;
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		treenode<int>*child=takeinput();
// 		root->children.push_back(child);
// 	}
	
// 	return root;
// }
// void printtree(treenode<int>*root)
// {
// 	if(root==NULL)
// 	{
// 		return;
// 	}
// 	cout<<"root->data<<";
// 	for(int i=0;i<root->children.size();i++)
// 	{
// 		cout<<root->children[i]->data<<" ";
// 	}
// 	cout<<endl;
// 	for(int i=0;i<root->children.size();i++)
// 	{
// 		printtree(root->children[i]);
// 	}
// }
// int main()
// {

//       // genric tree


// 	treenode<int>*root=new treenode<int>(9);
// 	treenode<int>*node1=new treenode<int>(2);
// 	treenode<int>*node2=new treenode<int>(3);
// 	treenode<int>*node3=new treenode<int>(4);
// 	treenode<int>*node4=new treenode<int>(5);
// 	treenode<int>*node5=new treenode<int>(6);
// 	treenode<int>*node6=new treenode<int>(7);
// 	root->children.push_back(node1);
// 	root->children.push_back(node2);;
// 	node1->children.push_back(node3);
// 	node1->children.push_back(node4);
// 	node2->children.push_back(node5);
// 	node2->children.push_back(node6);
	
// 	// treenode<int>*root=takeinput();
// 	// treenode<int>*root=levelwise();
// 	   // printtree(root);
// 	 // cout<<countnodes(root)<<endl;
// 	 // cout<<findsum(root)<<endl;
// 	  // treenode<int>* ans=maxdata(root);
// 	  // if(root!=NULL)
// 	  // {
// 	  // 	cout<<root->data<<endl;
// 	  // }
// 	  // int k=3;
// 	  // printatlevelk(root,k);
// 	// preorder(root);
// 	cout<<endl;
// 	// postorder(root);
// 	// deletetree(root);
// 	// delete root;
// 	preorder(root);
// 	// length

//  }










































// #include <iostream>
// #include "Treeclass.cpp"
// using namespace std;



// TreeNode<int>* takeInput() {
// 	int rootData;
// 	cout << "Enter data" << endl;
// 	cin >> rootData;
// 	TreeNode<int>* root = new TreeNode<int>(rootData);
	
// 	int n;
// 	cout << "Enter num of children of " << rootData << endl;
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		TreeNode<int>* child = takeInput();
// 		root->children.push_back(child);
// 	}
// 	return root;
// }

// void printTree(TreeNode<int>* root) {
// 	if (root == NULL) {
// 		return;
// 	}

// 	cout << root->data << ":";
// 	for (int i = 0; i < root->children.size(); i++) {
// 		cout << root->children[i]->data << ",";
// 	}
// 	cout << endl;
// 	for (int i = 0; i < root->children.size() ; i++) {
// 		printTree(root->children[i]);
// 	}
// }

// int main() {
// 	TreeNode<int>* root = new TreeNode<int>(1);
// 	TreeNode<int>* node1 = new TreeNode<int>(2);
// 	TreeNode<int>* node2 = new TreeNode<int>(3);
// 	root->children.push_back(node1);
// 	root->children.push_back(node2);
	
// 	TreeNode<int>* root = takeInput();
// 	printTree(root);
// 	// TODO delete the tree
// }













