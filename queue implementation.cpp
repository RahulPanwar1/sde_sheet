#include <bits/stdc++.h> 
class Queue {
public:
 int *arr;
 int qf;
 int rear;
 int size;
    Queue() {
        // Implement the Constructor
        size= 10001;
        arr = new int[size];
        qf  = 0;
        rear = 0;
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qf == rear)
        return true;

        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear != size)
        {
            arr[rear++] = data;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(rear == qf)
        {
            return -1;
        }
        else
        {
            int temp = arr[qf++];
            if(qf == rear)
            {
                qf =0;
                rear = 0;
            }
            return temp;
        }
    }

    int front() {
        // Implement the front() function
        if(rear == qf)
        {
            return -1;
        }
        return arr[qf];
    }
};