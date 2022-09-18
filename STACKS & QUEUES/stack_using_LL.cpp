#include<iostream>
using namespace std;
class Stack
{
    //Write your code here
    Node* head;
    Node* ptr;
int size;
public:
    Stack()
    {
        //Write your code here
        head = NULL;
        //ptr = NULL;
    size = 0;
    }

    int getSize()
    {
        //Write your code here
        return this -> size;
    }

    bool isEmpty()
    {
        //Write your code here 
        if(this -> size == 0)
        {
            return true;
        }
        return false;
    }

    void push(int data)
    {
        //Write your code here
        Node* temp = new Node(data);
        if(!head)
        {
            head = temp;
            //ptr = temp;
        }
        else
        {
            temp -> next = head;
            head = temp;
        }
        this -> size++;
    }

    int pop()
    {
        if(this -> size == 0)
        {
            return -1;
        }
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        int m=temp->data;
        delete temp;
        this -> size--;
        return m;
        //Write your code here
    }

    int top()
    {
        //Write your code here
        if(this -> size == 0)
        {
            return -1;
        }
        return head -> data;
    }
};
