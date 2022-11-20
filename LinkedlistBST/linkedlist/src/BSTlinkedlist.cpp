#include<iostream>
#include "BSTlinkedlist.h"
using namespace std;
TreeNode::TreeNode(){
    data = 0;
    left = NULL;
    right =NULL;
}
TreeNode::TreeNode(int data){
    this-> data = data;
    left = NULL;
    right =NULL;
}
bool linkedlist::isEmpty(){
   if(root==NULL){
        return 1;
     }
    else
     {
        return 0;
     }
}
void linkedlist::addBSTNode(int key){
   TreeNode *new_node = new TreeNode ();
   
   new_node->data=key;
   if (root == NULL ){
      root= new_node;
      cout<<"added in root"<<endl;
   }
   else
   {
      TreeNode* temp = root;
      temp->data=root->data;
      
      while(temp != NULL)
      {
        if( new_node->data == temp -> data){
          cout << "same data is not valid for insertion"<<endl;
          break;
        }  
        else if ((new_node->data < temp -> data) && ( temp->left == NULL))
        {
          temp->left = new_node;
          cout<<"added to left of node"<<endl;
          break;
        } 
        else if (new_node->data < temp -> data )
        {
           temp= temp->left;
        }
        else if ((new_node->data > temp -> data) && ( temp->right == NULL))
        {
         temp->right = new_node;
         cout<<"added to right of node"<<endl;
         break;
        }
        else
        {
          temp= temp->right;
        }
    
      }
   }
}
bool linkedlist::searchBSTNode(int key){
          if (root == NULL){
      return 0;
   }
   else{
        TreeNode* temp = root;
        temp->data = root->data;
       while(temp != NULL)
       {
        if ( key == temp->data){
          return 1;
        }
        else if(key < temp->data){
            temp=temp->left;

        }
        else{
          temp=temp->right;
        }
          
       }
       return 0;
   }
}
void linkedlist::preorderdisplayNode(TreeNode*r){
    if(r==NULL)
    return;
    cout<<r->data <<endl;
    preorderdisplayNode(r->left);
    preorderdisplayNode(r->right);
}
TreeNode* linkedlist::removeBSTNode(TreeNode*r,int key){
    TreeNode*temp = root;
    if (r == NULL) 
    return r;
    else if(key<r ->data){
        r->left = removeBSTNode(r->left,key);
    }
    else if (key>r ->data)
    {
         r->right = removeBSTNode(r->right,key);
    }
    else {
      if (r->left == NULL){
        temp= r->right;
        delete r;
        return temp;
      }
      else if(r->right == NULL)
      {
        temp= r->left;
        delete r;
        return temp;
      }
    else 
    {
        temp=minvalueBSTNode(r->right);
        r->data=temp->data;
        r->right =removeBSTNode(r->right,temp->data);
    }

    
    }
    return r;


}
TreeNode* linkedlist::minvalueBSTNode(TreeNode*r){
    TreeNode* current=r;
    while(current->left!=NULL){
       current=current->left;
       return current;
    }
}

