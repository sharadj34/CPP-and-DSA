/*

What is Linked List?
-> A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

Why Linked List?
-> Dynamic data structure
-> Grow/Shrink at runtime
-> No memory wastage

*/


#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

int main()
{
    Node* node1 = new Node(15);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    return 0;
}