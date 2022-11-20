    #include "arrayBST.h"
    #include<iostream>
    Node::Node(){
        key=0;
        value=0
    }
    Node::Node(int key,int value)
    {
        this->key=key;
        this->value=value;
    }
    arrayBST::arrayBST()
    {
        for (int i = 0; i < Max; i++)
        {
            list[i].key=0;
        }
    }
    ~arrayBST();
     bool arrayBST:: isEmpty()
     {
        if (list[1].key==0)

        {
            return true;
        }
        else
            return false;
     }
    void arrayBST::  addBST(int data,int index)
    {
        for (int i = 0; i < Max; i++)
        {
            if (isEmpty())
            {
                list[i].value=data;
                break;
            }
            int val= list[i].value

            
        }
        
    }
    virtual void max();
    virtual void min();
    virtual void removeBST();
    virtual void searchBST();
