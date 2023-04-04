// Deletion from the end of the linked list.

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

Node* deletion_at_end(Node *head){
    Node *p1, *p2;
    p2 = head;
    while(p2->next != NULL){
        p1 = p2;
        p2 = p2->next;
    }
    p1->next = NULL;
    free(p2);

    return head;
}

int main(){
    // Creation of node which points to null.
    Node *head, *p;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    // Allocation of memory.
    one = new Node();
    two = new Node();
    three = new Node();

    // Filling of linked list with datas.
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Connecting each list with another list to form linked list.
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    cout << "Linked list before deletion: \n";
    p = head;
    while(p != NULL){
        cout << p->data << "->";
        p = p->next;
    }

    head = deletion_at_end(head);
    cout << "\n Linked list after deletion: \n";
    while(head != NULL){
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;

    return 0;
}