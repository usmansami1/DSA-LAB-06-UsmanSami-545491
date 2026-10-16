// UsmanSami 545491 CS-D
#include <iostream>
using namespace std;

class StackUsingArray{
    int top = -1;
    int items [5];
public:

    bool isEmpty(){
        if (top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(top == 4){
            return true;
        }
        else{
            return false;
        }
    }

    void push (int value){
        if (isFull()){
            cout << "Stack is full" << endl;
        }
        else{
            top++;
            items[top] = value;
            cout << "Pushed " << value << " to stack" << endl;
        }
    }

    void pop (){
        if (isEmpty()){
            cout << "Stack is empty" << endl;
        }
        else{
            cout << "Removed " << items[top] << " from stack" << endl;
            top--;
        }
    }

    void peek (){
        if (isEmpty()){
            cout << "Stack is empty" << endl;
        }
        else{
            cout << "Top element is " << items[top] << endl;
        }
    }

    void display (){
        if (isEmpty()){
            cout << "Stack is empty" << endl;
        }
        else{
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--){
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    StackUsingArray st;
    st.push(10);
    st.push(20);
    st.push(30);  
    st.display();
    st.pop();
    st.peek();

// testing for 6th insertion
    st.push(40);
    st.push(50);
    st.push(60); 
    st.push(70);

// testing for pop after removing all values
    st.pop();
    st.pop();   
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    return 0;
}