#include <iostream>
#define MAX 100
using namespace std;

class Queue {
private:
    int items[MAX], front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    
    bool isFull() {
        return (rear == MAX - 1);
    }
    
    bool isEmpty() {
        return (front == -1 || front > rear);
    }
    
    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) front = 0;
            items[++rear] = element;
            cout << "Inserted " << element << endl;
        }
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Removed " << items[front++] << endl;
            if (front > rear) {
                front = rear = -1;
            }
        }
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}