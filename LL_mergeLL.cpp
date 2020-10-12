#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void MoveNode(struct SinglyLinkedListNode** destRef, struct SinglyLinkedListNode** sourceRef){
    struct SinglyLinkedListNode* newnode = *sourceRef;
    assert(newnode != NULL);
    *sourceRef = newnode ->next;
    newnode->next = *destRef;
    *destRef = newnode;

}

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
struct SinglyLinkedListNode dummy(2);
struct SinglyLinkedListNode* tail = &dummy;
struct SinglyLinkedListNode* tail1 = &dummy;

tail->next = NULL;

while(1){
    if(head1 == NULL){
        tail->next = head2;
        break;
    }
    else if(head2 == NULL){
        tail->next = head1;
        break;
    }

    if(head1->data <= head2->data)
    MoveNode(&(tail->next), &head1);
    else
    MoveNode(&(tail->next), &head2);

    tail = tail->next;
}
return (tail1->next);
}

int main()