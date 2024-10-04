#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;
    
    DoublyLinkedList() : head(nullptr) {}

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void insertAtPosition(int pos, int data) {
        Node* newNode = new Node(data);
        Node* temp = head;
        for (int i = 0; i < pos && temp; i++) {
            temp = temp->next;
        }
        if (!temp) return;
        newNode->next = temp->next;
        if (temp->next) temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    int p = 2, x = 6;
    dll.insertAtPosition(p, x);
    dll.display();
    
    return 0;
}
