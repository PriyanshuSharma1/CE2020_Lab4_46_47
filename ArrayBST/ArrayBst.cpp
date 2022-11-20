#include <iostream>
using namespace std;
#define MAX 20
class Node
{
public:
    int key;
    int value;
    Node();
    Node(int, int);
};
class ArrayBST
{
public:
    Node nodes[MAX];
    ArrayBST();
    void insertion_BST(int value, int index);
    void remove(int targetkey, int root);
    void high();
    void search(int targetkey);
    void show();
};
Node::Node()
{
    key = 0;
    value = 0;
}
Node::Node(int key, int value)
{
    this->key = key;
    this->value = value;
}
ArrayBST::ArrayBST()
{
    for (int i = 0; i < MAX; i++)
    {
        nodes[i].value = -1;
        nodes[i].key = i;
    }
}
void ArrayBST::insertion_BST(int data, int index)
{
    static int i, j;
    if (nodes[index].value == -1)
    {
        nodes[index].value = data;
        return;
    }
    else
    {
        if (data < nodes[index].value)
        {
            i = index * 2;
            insertion_BST(data, i);
        }
        else
        {
            j = index * 2 + 1;
            insertion_BST(data, j);
        }
    }
}
void ArrayBST::show()
{
    for (int i = 0; i < MAX; i++)
    {
        cout << "key: " << nodes[i].key << " value: " << nodes[i].value << endl;
    }
}
void ArrayBST::high()
{
    int i = 1;
    for (; i < MAX;)
    {
        if (nodes[i].value == -1)
        {
            i = (i - 1) / 2;
            break;
        }
        i = 2 * i + 1;
    }
    cout << "MAXvalue: " << nodes[i].value << endl;
}

void ArrayBST::search(int targetkey)
{
    static int i = 1;
    while (i <= MAX)
    {
        if (targetkey == nodes[i].value)
        {
            cout << "The given key exists " << endl;
            break;
        }
        else if (targetkey > nodes[i].value)
        {
            i = 2 * i + 1;
        }
        else
        {
            i = 2 * i;
        }
    }
}
void ArrayBST:: remove(int targetkey,int root ){
    int i = root;
    for(;i<MAX;i++){
    if (nodes[i].value == targetkey)
    {
        Node right = nodes[2 * i + 1];
        Node left = nodes[2 * i];
        if (right.value == -1 && left.value == -1)
        {
            nodes[i].value = -1;
        }
        else if (right.value == -1)
        {
            nodes[i].value = left.value;
            remove(left.value, 2 * i );
        }
        else if (left.value == -1)
        {
            nodes[i].value = right.value;
            remove(right.value, 2 * i+1);
        }
        else
        {
            int max;
            int j = 2 * i; // position of the right child
            while (nodes[j].value != -1)
            {
                j = 2 * j + 1;
            }
            max = (j - 1) / 2;
            nodes[i].value = nodes[max].value;
            nodes[max].value = -1;
        }
    }
        }
}
int main()
{
    ArrayBST *BST = new ArrayBST();
    BST->insertion_BST(30, 1);
    BST->insertion_BST(10, 1);
    BST->insertion_BST(40, 1);
    BST->insertion_BST(20, 1);
    BST->insertion_BST(50, 1);
    BST->insertion_BST(7, 1);
    BST->insertion_BST(35, 1);
    BST->insertion_BST(45, 1);
    BST->search(50);
    BST->search(44);
    BST->show();
    BST->high();
    BST->remove(30, 0);
    BST->show();
    BST->remove(50,0);
    BST->high();
    BST->remove(10, 0);
    BST->show();
}