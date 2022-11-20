#ifndef BST_h
#define BST_h
#include <iostream>
#include "AbstractBSTlist.h"
#include "BSTlinkedlist.h"
using namespace std;
class BST:public AbstractBST{
    public:
    linkedlist *tree;
  BST()
    {
       tree = new linkedlist();
    }
  ~BST();
    void isEmpty();
     void addBST(int key);
      void removeBST(int key);
      void searchBST(int key);
    void preorderdisplay();
};

#endif