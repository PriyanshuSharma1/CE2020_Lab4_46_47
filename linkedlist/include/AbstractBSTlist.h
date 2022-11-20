#ifndef AbstractBSTlist_h
#define AbstractBSTlist_h


class AbstractBST{
   public:
    AbstractBST(){};
    ~AbstractBST(){};
     virtual void isEmpty()=0;
    virtual void addBST(int key)=0;
    virtual void removeBST(int key)=0;
    virtual void searchBST(int key)=0;
    virtual void preorderdisplay()=0;
    
};

#endif