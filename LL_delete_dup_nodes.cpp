

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
struct SinglyLinkedListNode* cur = head;
/* struct SinglyLinkedListNode* n = head->next;
struct SinglyLinkedListNode* node; */

 while(cur->next!=NULL){ 
    if(cur->data == cur->next->data) 
       cur->next = cur->next->next;  
    else 
       cur = cur->next; 
   } 
   return head;

}



