#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

// Function to sort a linked list in ascending order
void sortLinkedList(Node** head_ref) {
    Node *current = *head_ref, *index = NULL;
    int temp;

    if (*head_ref == NULL) {
        return;
    } else {
        while (current != NULL) {
            index = current->next;

            while (index != NULL) {
                if (current->value > index->value) {
                    // Swap data of current and index nodes
                    temp = current->value;
                    current->value = index->value;
                    index->value = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

int main() {
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* four = NULL;
    Node* three = NULL;

    // Allocate memory for nodes
    one = new Node();
    two = new Node();
    four = new Node();
    three = new Node();

    // Assign values to nodes
    one->value = 4;
    two->value = 7;
    four->value = 2;
    three->value = 1;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    // Print the original linked list values
    cout << "Original linked list: ";
    Node* current = one;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;

    // Sort the linked list
    sortLinkedList(&one);

    // Print the sorted linked list values
    cout << "Sorted linked list: ";
    current = one;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}
