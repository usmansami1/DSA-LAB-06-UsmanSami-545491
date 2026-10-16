// UsmanSami 545491 CS-D
#include <iostream>
#include <string>
using namespace std;

class StackUsingArray{
    int top = -1;
    char items [20];
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
        if(top == 19){
            return true;
        }
        else{
            return false;
        }
    }

    void push (char value){
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
            top--;
        }
    }

    void reverseWord(string word){
        for (int i = 0; i < word.length(); i++){
            push(word[i]);
        }
        cout << "Reversed word: ";
        while (!isEmpty()){
            cout << items[top];
            pop();
        }
        cout << endl;
    }
};
int main() {
    string word;
    cout << "Enter a word (max 20 characters): ";
    cin >> word;
    StackUsingArray stack;
    stack.reverseWord(word);

    return 0;
}