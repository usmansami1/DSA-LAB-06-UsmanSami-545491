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
        cout << "Queue items: ";
    for (int i = front; i <= rear; i++)
        cout << items[i] << " ";

    cout << endl;
}

void dequeue() {
    if (front == -1) {
        cout << "Queue is empty. Removal blocked." << endl;
        return;
    }

    cout << "Removed: " << items[front] << endl;

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
}

void peekFront() {
    if (front == -1) {
        cout << "Queue is empty. No front item." << endl;
        return;
    }

    cout << "Front item: " << items[front] << endl;
}

int main() {
    display();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    peekFront();
    display();
    // clearing the queue
    dequeue();
    dequeue();
    dequeue(); 
    // checking the queue after clearing
    enqueue(40);
    display();

    return 0;
}