// like arrays, Linked list is a linear data structure.
// unlike arrays, linked lists are not stored at contiguous
// (continuously in a single memory block) location.
// The elements are linked using pointers.

#include<stdio.h>
#include<stdlib.h>    //malloc is defined in this library.

// This creates the list.
struct node {
  int data;
  struct node *next;
};

// This function prints the linked list.
void printList(struct node *n) {
  while (n != NULL) {
    printf("%d\n", n -> data);
    n = n -> next;
  }
}

// This function creates a new node at the start of the linked list.
void push(struct node** head_ref, int new_data) {
  struct node* new_node = (struct node*)malloc(sizeof(struct node));
  new_node -> data = new_data;
  new_node -> next = head_ref;

  (*head_ref) = new_node;
}

// We are creating and linking 3 nodes manually in the main function
int main() {

  // Creating a new node;
  struct node* head = NULL;
  struct node* second = NULL;
  struct node* third = NULL;

  // Allocation of node in memory.
  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));

  head -> data = 1;   // Entering data in the node.
  head -> next = second;    // Making the next of new node as head.

  second -> data = 2;
  second -> next = third;

  third -> data = 3;
  third -> next = NULL;

  push(third, 7);

  printList(head);

  return 0;
}
