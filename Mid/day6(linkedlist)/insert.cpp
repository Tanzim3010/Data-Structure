#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void insertAtEnd(Node*&head, int newData){
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if(head == nullptr){
        head = newNode;
    }else{
        Node *current = head;
        while(current->next!=nullptr){
            current = current->next;   
        }
        current->next = newNode;
    }
}
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
    head->data = 1;
    head->next = nullptr;

    traverseLinkedList(head);

    // Insert at the end
    insertAtEnd(head, 2); 
    insertAtEnd(head, 3); 

    // Traverse and print the linked list
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