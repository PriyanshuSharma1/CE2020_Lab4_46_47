#include<iostream>
using namespace std;
struct Node
{ int data;
    Node *left;
    Node *right;
    Node()
    {
        data=0;
        left=NULL;
        right=NULL;
    }
    Node(int val)
    {
        data=val;
        left = NULL;
        right = NULL;
    }

};
Node* addBST(Node *rootptr, int val)
{
    if(rootptr==NULL)
    {
        return new Node(val);
    }
    if(val<rootptr->data)
    {
        rootptr->left=addBST(rootptr->left,val);
    }
    if(val>rootptr->data)
    {
        rootptr->right=addBST(rootptr->right,val);
    }
    return rootptr;
}
void searchBST(Node *root, int target_key)
{
    if(root==NULL)
    {
        cout<<"target key doesn't exist"<<endl;
        return;
    }
    if(root->data==target_key)
    {
        cout<<"target key exists"<<endl;
    }
    if(target_key<root->data)
    {
        searchBST(root->left,target_key);
    }
    if(target_key>root->data)
    {
        searchBST(root->right,target_key);
    }

}
void deleteBST(Node *root, int target_key)
{
     if(root==NULL)
    {
        cout<<"target key doesn't exist"<<endl;
        return;
    }
    if(root->data==target_key)
    {
         root->data=0;
        cout<<"target key deleted"<<endl;
    }
    if(target_key<root->data)
    {
        deleteBST(root->left,target_key);
    }
    if(target_key>root->data)
    {
        deleteBST(root->right,target_key);
    }
}
void inorder(Node *root)
{
     if(root==NULL)
    {
        return;
    }
    else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main()

{
    Node *root=NULL;
    root=addBST(root,30);
    addBST(root,10);
    addBST(root,40);
    addBST(root,20);
    addBST(root,50);
    inorder(root);
    cout<<endl;
    searchBST(root,78);
    searchBST(root,20);
    deleteBST(root,50);
    deleteBST(root,34);
    inorder(root);

    delete[] root;
    
}