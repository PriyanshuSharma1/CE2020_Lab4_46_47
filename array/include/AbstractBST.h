#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST
{
public:
    virtual bool isEmpty()=0;
    virtual Node* addBST(Node *rootptr, int val)=0;
    virtual void removeBST()=0;
    virtual void searchBST()=0;
};

#endif