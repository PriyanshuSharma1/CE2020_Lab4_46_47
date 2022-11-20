#include <iostream>
#include "AbstractBSTlist.h"
#include "BST.h"
#include "BSTlinkedlist.h"
using namespace std;
int main(){
     
    AbstractBST*Btree = new BST();
        Btree->isEmpty();
        Btree->addBST(5);
        Btree->addBST(5);
        Btree->addBST(4);
        Btree->addBST(2);
        Btree->addBST(3);
        Btree->addBST(7);
        Btree->addBST(8);
        Btree->searchBST(4);
        Btree->searchBST(2);
        Btree->searchBST(5);
        Btree->searchBST(1);
        Btree->preorderdisplay();
        Btree->removeBST(7);
        Btree->preorderdisplay();
       
}