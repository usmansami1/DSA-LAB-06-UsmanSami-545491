// UsmanSami 545491 CS-D
#include <iostream>
using namespace std;

int items[5], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == 4) {
        cout << "Queue is full. Insertion blocked." << endl;
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    items[rear] = value;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }

    for (int i = front; i <= rear; i++)
        cout << items[i] << " ";

    cout << endl;
}

int main() {
    display();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    enqueue(60);

    display();

    return 0;
}