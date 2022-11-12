#ifndef bst_h
#define bst_h
#include<iostream>
#include"AbstractBST.h"


class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data=val;
        *left = *right = NULL;
    }
};
class ArrayBST : public Node
{
    public:
    virtual Node* addBST(Node *rootptr,int val);
    virtual void removeBST();
    virtual void searchBST();
    
};
#endif