#include<iostream>
using namespace std;
#define max 10 
void insertion_BST(int *arr,int value,int index)
{
    static int i,j;
    if(arr[index]==-1)
    {
        arr[index]=value;
        return;
    }
    else
    {
        if (value<arr[index])
        {
            i=index*2;
            insertion_BST(arr,value,i);
            
        }
        else{
            j=index*2+1;
            insertion_BST(arr,value,j);
        }
        
    }

}
void show(int *arr)
{
    for (int i = 0; i < max; i++)
    {
        cout<<"key"<<i<<"value: "<<arr[i]<<endl;
    }
    
    
}
int main()
{
    int array[max];
    for (int i = 0; i < max; i++)
    {
        array[i]=-1;
    }
    
    insertion_BST(array,30,1);
    insertion_BST(array,10,1);
    insertion_BST(array,40,1);
    insertion_BST(array,20,1);
    insertion_BST(array,50,1);
    show(array);
    

}