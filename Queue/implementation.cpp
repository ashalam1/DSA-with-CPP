#include<iostream>
using namespace std;
class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};
int main()
{
    Queue myQueue;

    // Check if the queue is empty
    if (myQueue.isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Enqueue elements
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    // Display the front element
    cout << "Front element: " << myQueue.front() << endl;

    // Dequeue elements
    cout << "Dequeued element: " << myQueue.dequeue() << endl;

    // Display the front element after dequeue
    cout << "Front element after dequeue: " << myQueue.front() << endl;

    // Check if the queue is empty after dequeue
    if (myQueue.isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
 return 0;
}