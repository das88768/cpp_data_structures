// Insertion of a new list at begining of a linked list.

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

Node* insert_at_begining(Node *head, int data){
    Node *temp = NULL;

    temp = new Node();
    temp->data = data;
    temp->next = head;

    head = temp;

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
    p = head;

    cout << "Linked list before insertion: \n";
    while(p != NULL){
        cout << p->data << "->";
        p = p->next;
    }

    head = insert_at_begining(head, 10);

    cout << "\n Linked list after insertion: \n";
    while(head != NULL){
        cout << head->data << "->";
        head = head->next;
    }
}