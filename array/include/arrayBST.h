#pragma once
#include "AbstractBST.h"
#define Max 10

class Node
{
public:
int key;
int value;

    Node();
    Node(int ,int);
    ~Node();
};

class arrayBST:public AbstractBST
{
private:
Node list[Max];
 public:
    arrayBST();
    ~arrayBST();
     virtual bool isEmpty();
    virtual void addBST(int index,int value);
    virtual void max();
    virtual void min();
    virtual void removeBST();
    virtual void searchBST();
};

