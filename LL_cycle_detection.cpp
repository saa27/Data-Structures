

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {

if (head == NULL){
        return false;
    }

struct SinglyLinkedListNode* slow = head;
struct SinglyLinkedListNode* fast = head;

while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast){
            return true;
        }
    }

return false;
}

