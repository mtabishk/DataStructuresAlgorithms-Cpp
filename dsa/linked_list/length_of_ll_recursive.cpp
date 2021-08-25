#include <iostream>
#include "NodeClass.cpp"
using namespace std;

Node* takeInput() {
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    // using 1 as terminator
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;

}

int length(Node *head) {

    if (head == NULL) {
        return 0;
    }

    int l = length(head->next);

    return l + 1;


}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    Node *head = takeInput();
    print(head);

    int l = length(head);
    cout << "\n" << l;
    return 0;
}

