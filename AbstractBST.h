#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST
{
public:
    virtual void isEmpty()=0;
    virtual void addBST()=0;
    virtual void removeBST()=0;
    virtual void searchBST()=0;
};

#endif