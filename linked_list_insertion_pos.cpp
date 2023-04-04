// Insertion of a new list at the middle of a linked list.

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

Node* insert_at_pos(Node *head, int data, int pos){
    Node *temp = NULL, *p1, *p2;
    temp = new Node();
    temp->data = data;
    temp->next = NULL;

    p2 = head;
    for(int i=0; i<pos; i++){
        p1 = p2;
        p2 = p2->next;
    }

    p1->next = temp;
    temp->next = p2;

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

    int pos;
    cout << "Enter the position of the new linked list: ";
    cin >> pos;
    if(pos <= 1){
        cout << "Please Enter position greater than 1 !!";
        return 0;
    }

    cout << "Linked list before insertion: \n";
    while(p != NULL){
        cout << p->data << "->";
        p = p->next;
    }

    head = insert_at_pos(head, 10, pos-1);

    cout << "\nLinked list after insertion: \n";
    while(head != NULL){
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;

    return 0;
}