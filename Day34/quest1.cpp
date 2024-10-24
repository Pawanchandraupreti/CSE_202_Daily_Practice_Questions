#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

void appendNode(ListNode*& head, int data) {
    ListNode* newNode = new ListNode(data);
    if (!head) {
        head = newNode;
    } else {
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, value;
    ListNode* head = NULL;

    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter node value: ";
        cin >> value;
        appendNode(head, value);
    }

    head = oddEvenList(head);

    cout << "Reordered list: ";
    printList(head);

    return 0;
}
