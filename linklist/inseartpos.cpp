#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp, *newNode;
    int n, value, pos;

    // Create linked list
    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> value;

        newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Insert at position
    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> value;

    newNode = new Node();
    newNode->data = value;

    if(pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        temp = head;
        for(int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if(temp == NULL) {
            cout << "Invalid position";
            return 0;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Display
    cout << "Linked List:\n";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}