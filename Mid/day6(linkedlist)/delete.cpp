#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to delete a node with a given value
void deleteNode(Node*& head, int value) {
    // Store head node
    Node* temp = head;
    Node* prev = nullptr;

    // If head node itself holds the value to be deleted
    if (temp != nullptr && temp->data == value) {
        head = temp->next; // Changed head
        delete temp;       // Free old head
        return;
    }

    // Search for the value to be deleted, keep track of the previous node
    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If value was not present in the linked list
    if (temp == nullptr) {
        cout << "Value not found in the list." << endl;
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;

    delete temp; // Free memory
}

// Function to print the elements of the linked list
void traverseLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Creating an initial list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    // Traverse and print the initial linked list
    cout << "Initial linked list: ";
    traverseLinkedList(head);

    // Delete node with value 2
    deleteNode(head, 2); // List: 1 -> 3

    // Traverse and print the linked list after deletion
    cout << "Linked list after deletion: ";
    traverseLinkedList(head);

    // Free the allocated memory
    Node* current = head;
    Node* next;
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }

    return 0;
}