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

    items[++rear] = value;
}

void serve() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Served customer: " << items[front] << endl;

    if (front == rear)
        front = rear = -1;
    else
        front++;
}

void viewNext() {
    if (front == -1)
        cout << "Queue is empty." << endl;
    else
        cout << "Next customer: " << items[front] << endl;
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
    int choice, value;

    do {
        cout << "\n1. Add customer";
        cout << "\n2. Serve next";
        cout << "\n3. View next";
        cout << "\n4. Display queue";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter customer number: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                serve();
                break;

            case 3:
                viewNext();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "ThankYou for using our program!" << endl;
                break;

            default:
                cout << "Please enter a valid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}