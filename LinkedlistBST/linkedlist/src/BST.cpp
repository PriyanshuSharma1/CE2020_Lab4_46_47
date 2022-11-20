#include <iostream>
#include "BST.h"
#include "BSTlinkedlist.h"
using namespace std;
void BST:: isEmpty(){
    if(tree->isEmpty()){
        cout<<"Tree is Empty"<<endl;
     }
    else
     {
        cout<<"Tree is not Empty"<<endl;
     }

}
void BST::addBST(int key){
   tree->addBSTNode(key);
}
void BST::searchBST(int key){
   cout<<tree->searchBSTNode(key)<<endl;
}
void BST::preorderdisplay(){
   cout<<"Nodes of Binary Tree"<<endl;
   TreeNode*temp=tree->root;
   tree->preorderdisplayNode(temp);
   
}
void BST :: removeBST(int key){
      TreeNode*temp=tree->root;
      tree->removeBSTNode(temp,key);
      cout<< "Removed Node"<<key<<endl; 

    }
