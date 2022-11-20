#ifndef linkedlist_h
#define linkedlist_h
#include "AbstractBSTlist.h"
#include <iostream>
using namespace std;
class TreeNode 
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode();
    TreeNode(int data);
    
};
class linkedlist{
    public:
    TreeNode * root;
    bool isEmpty();
    void addBSTNode(int key);
    bool searchBSTNode(int key);
    void preorderdisplayNode(TreeNode*r);
    TreeNode*removeBSTNode(TreeNode*,int key);
    TreeNode*minvalueBSTNode(TreeNode*);
};

#endif