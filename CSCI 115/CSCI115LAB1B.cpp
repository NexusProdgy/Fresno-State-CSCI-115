#include <iostream>
using namespace std;

//Link list node 
struct Node {
    int data;
    struct Node* next;
};

// Code to remove last node
Node* removeLastNode(struct Node* head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    // Find the second to last node
    Node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;

    // Delete node
    delete (second_last->next);

    // Change the second to last node
    second_last->next = NULL;

    return head;
}

// Code to push the node at the head
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Main  code
int main()
{
    Node* head = NULL;
    push(&head, 20);
    push(&head, 40);
    push(&head, 60);

    head = removeLastNode(head);
    for (Node* temp = head; temp != NULL; temp = temp->next)
        cout << temp->data << " ";

    return 0;
}