#include "bst.h"
#include <iostream>
using namespace std;

Node* ArrayBST ::addBST(Node *rootptr, int val)
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
int main()
{
    Node *root=nullptr;
    root= addBST(root,30);
}