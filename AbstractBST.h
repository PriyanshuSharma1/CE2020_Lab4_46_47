/*
Author name: Priyanshu Sharma
Date created : November 7, 2022
Array implementation of Binary Tree using C++
*/
#ifndef AbstractBST_h
#define AbstractBST_h

//Abstract class 
class AbstractBST
{
public:

   virtual void isEmpty()=0;
   virtual void addBST(int value, int index)=0;
   virtual void removeBST(int targetkey, int root)=0;
   virtual  void searchBST(int targetkey)=0;
 
};
#endif