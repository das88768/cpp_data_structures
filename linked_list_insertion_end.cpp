// Insertion of a new list at end of a linked list.

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

Node* insert_at_end(Node *head, int data){
    Node *temp = NULL;
    temp = new Node();
    temp->data = data;
    temp->next = NULL;

    Node *p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = temp;
    
    return head;
}

int main(){
    Node *head, *p;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    one = new Node();
    two = new Node();
    three = new Node();

    one->data = 1;
    two->data = 2;
    three->data = 3;

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

    head = insert_at_end(head, 20);

    cout << "\nLinked list after insertion: \n";
    while(head != NULL){
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;

    return 0;
}