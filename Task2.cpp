// UsmanSami 545491 CS-D
#include <iostream>
using namespace std;

class StackUsingLinkedList
{

    struct Node
    {
        int data;
        Node *next;
    };
    Node *top = nullptr;

public:
    bool isEmpty()
    {
        return top == nullptr;
    }

    void push(int value)
    {
        Node *n = new Node();
        n->data = value;
        n->next = top;
        top = n;
        cout << "Pushed " << value << " to stack" << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = top;
        cout << "Removed " << top->data << " from stack" << endl;
        top = top->next;
        delete temp;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element is " << top->data << endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *current = top;
        cout << "Stack elements: ";
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void clearStack(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return;
        }
        while (!isEmpty())
        {
            Node* temp = top;
            top = top->next;
            delete temp;
            cout<<"Stack is cleared"<<endl;
        }
    }
};
int main()
{
    StackUsingLinkedList st;
    st.push(5);
    st.push(15);
    st.push(25);

    st.display();
    st.pop();
    st.peek();
    
    //testing an empty pop
    st.pop();
    st.pop();
    st.pop();

    st.clearStack();

    return 0;
}