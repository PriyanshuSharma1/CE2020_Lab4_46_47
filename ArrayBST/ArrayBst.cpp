#include<iostream>
using namespace std;
#define max 15 
class Node
{
    public:
    int key;
    int value;
    Node();
    Node(int , int );
};
class ArrayBST{
    public:
    Node list[max];
    ArrayBST();
    void insertion_BST(int value, int index);
    void remove(int targetkey);
    void high();
    void search(int targetkey);
    void show();

};
Node::Node()
{
    key=0;
    value=0;
}
Node::Node(int key, int value)
{
    this->key=key;
    this->value=value;
}
ArrayBST::ArrayBST()
{
    for (int i = 0; i < max; i++)
    {
        list[i].value=-1;
        list[i].key=i;
    }

    
}
void ArrayBST::insertion_BST(int data,int index)
{
    static int i,j;
    if(list[index].value==-1)
    {
        list[index].value=data;
        return;
    }
    else
    {
        if (data<list[index].value)
        {
            i=index*2;
            insertion_BST(data,i);
            
        }
        else{
            j=index*2+1;
            insertion_BST(data,j);
        }
        
    }

}
void ArrayBST:: show()
{
    for (int i = 0; i < max; i++)
    {
        cout<<"key: "<<list[i].key<<" value: "<<list[i].value<<endl;
    }
    
    
}
void ArrayBST::high()
{
    int i=1;
    for (; i < max;)
    {
        if(list[i].value!=-1){i=2*i+1;}
    }
    cout<<"maxvalue: "<<list[i-1].value<<endl;
    

}


void ArrayBST::search(int targetkey)
    {
    static int i=1;
    while (i<= max)
    {
        if (targetkey == list[i].value)
        {
            cout<<"The given key exists "<<endl;
        }
        else if (targetkey > list[i].value)
        {
            i = 2 * i + 1;

        }
        else
        {
            i = 2 * i;
        }
    }
    cout<<"The given key doesn't exist "<<endl;
    }

int main()
{
    ArrayBST *BST=new ArrayBST();
    BST->insertion_BST(30,1);
    BST->insertion_BST(10,1);
    BST->insertion_BST(40,1);
    BST->insertion_BST(20,1);
    BST->insertion_BST(50,1);
    BST->insertion_BST(7,1);
    BST->insertion_BST(35,1);
    BST->insertion_BST(45,1);
    BST->search(50);
    BST->search(44);
    BST->show();
    BST->high();
}