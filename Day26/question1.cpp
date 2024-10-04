#include <iostream>
using namespace std;

class PriorityQueue {
private:
    int* arr;
    int capacity;
    int size;

public:
    PriorityQueue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        size = 0;
    }

    ~PriorityQueue() {
        delete[] arr;
    }

    void insert(int value) {
        if (size == capacity) {
            cout << "Priority Queue is full" << endl;
            return;
        }
        arr[size] = value;
        size++;
        heapifyUp(size - 1);
    }

    int remove() {
        if (size == 0) {
            cout << "Priority Queue is empty" << endl;
            return -1;
        }
        int root = arr[0];
        arr[0] = arr[size - 1];
        size--;
        heapifyDown(0);
        return root;
    }

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (arr[index] > arr[parent]) {
                swap(arr[index], arr[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int index) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && arr[left] > arr[largest]) {
            largest = left;
        }
        if (right < size && arr[right] > arr[largest]) {
            largest = right;
        }
        if (largest != index) {
            swap(arr[index], arr[largest]);
            heapifyDown(largest);
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq(10);
    pq.insert(3);
    pq.insert(1);
    pq.insert(5);
    pq.insert(2);
    pq.insert(4);

    cout << "Priority Queue elements: ";
    pq.display(); 

    cout << "Removed element: " << pq.remove() << endl; 
    cout << "Priority Queue elements after removal: ";
    pq.display(); 

    return 0;
}
