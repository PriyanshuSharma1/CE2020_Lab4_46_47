#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST
{
public:
    virtual bool isEmpty()=0;
    virtual void addBST(int index,int data)=0;
    virtual void max()=0;
    virtual void min()=0;
    virtual void removeBST()=0;
    virtual void searchBST()=0;
};

#endif