#include <iostream>
using namespace std;


struct Node{
    int data;
    Node *next;
};

void traverseLinkedList(Node* head){
    Node* current = head;
    while(current!=nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main() {
    // Creating nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Initialize the nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    // Traverse and print the linked list
    traverseLinkedList(head);

    // Free the allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}