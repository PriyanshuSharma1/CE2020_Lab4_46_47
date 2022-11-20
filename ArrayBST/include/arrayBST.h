/*
Author name: Priyanshu Sharma
Date created : November 7, 2022
Array implementation of Binary Tree using C++
*/
#ifndef arrayBST_h
#define arrayBST_h
#include "AbstractBST.h"
#include <iostream> // includes headers files to use functions like cout and cin
#define MAX 15
class Node
{
public:
    int key;
    int value;
    Node(); // default constructor
    Node(int, int); //parameterized constructor
};
class ArrayBST
{
public:
    ArrayBST(); //default constructor
    bool isEmpty();
    void addBST(int value, int index);
    void removeBST(int targetkey, int root);
    void maximum();
    void searchBST(int targetkey);
    void show();
private:
    Node list[MAX];

};

#endif