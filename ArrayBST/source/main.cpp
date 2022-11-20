/*
Author name: Priyanshu Sharma
Date created : November 7, 2022
Array implementation of Binary Tree using C++
*/
#include<iostream>
#include"AbstractBST.h"
#include"arrayBST.h"
using namespace std; //declaring std on global namespace

int main()
{
    cout<<endl<<endl<<endl;

    cout<<"Array Implementation of Binary Tree"<<endl;
    cout<<"______________________________________"<<endl<<endl;
    
    ArrayBST *BST = new ArrayBST(); // creating instance of class ArrayBST
    if(BST->isEmpty())
    {
                cout<<"The BST is Empty !"<<endl<<endl;

    }
    else{
                cout<<"The BST is not Empty !"<<endl<<endl;

    }
    
    /*Addition of Data in Binary Search Tree*/
    BST->addBST(30, 1);
    BST->addBST(10, 1);
    BST->addBST(40, 1);
    BST->addBST(20, 1);
    BST->addBST(50, 1);
    BST->addBST(7, 1);
    BST->addBST(35, 1);
    BST->addBST(45, 1);
  
  
    BST->show(); // Displaying elements of Binary Search Tree
    cout<<endl;

    /*Searching elements in Binary Search Tree*/
    BST->searchBST(50);
    BST->searchBST(44);
cout<<endl;
    
    BST->maximum(); // Element with maximum in Binary Search Tree
cout<<endl;
    BST->removeBST(30, 0);//Removal of Element from BST

    BST->show();
    cout<<endl;


    BST->removeBST(50,0);

    BST->maximum();
cout<<endl;
    BST->removeBST(10, 0);
    BST->show();
}