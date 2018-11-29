#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"



void addIntToEndOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.
  
  Node *p = new Node;
  p->next = NULL;
  p->data = value;

  if (list->head == NULL) {
    list->head = p;
    list->tail = p;	    
  } else {
    list->tail->next = p;
    list->tail = p;
  }

    // (5) The current node at the tail? Make it point to p instead of NULL

    // (6) Make the tail of the list be p now.

  }


void addIntToStartOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.
  Node* p = list->head;
  Node* add = new Node;
  add->data = value;
  add->next = p;

  list->head = add;

  if(add->next == NULL){
	  list->tail = add;
  }
  // Add code for this.  
  // HINTS:
  //  You will need to allocate a new Node.
  //  You will need two cases just as in addIntToEndOfList,
  //  one for when list->head is NULL and another for when it is not.
  // You need to consider how to make sure that list->head changes to point to the new node
  // that you allocated.  And you will need to make sure that when you are done, 
  // that if the new node is now the ONLY thing on the list, that tail points to it also,
  // and that the new node is pointing to NULL.
  // Otherwise, you'll need to be sure that 
  //   if it is the only node on the list, or to the "old" head if there 

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);

  Node* max = list->head;
  Node* p = list->head; //traversal pointer

  while(p != NULL){
    if(p->data > max->data){
	    max = p;
    }
    p = p->next;
  }

  return max;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  Node* min = list->head;
  Node* p = list->head; //traversal pointer

  while(p != NULL){
    if(p->data < min->data){
	    min = p;
    }
    p = p->next;
  }

  return min; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  int max = list->head->data;
  Node* p = list->head; //traversal pointer

  while(p != NULL){
    if(p->data > max){
	    max = p->data;
    }
    p = p->next;
  }

  return max; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   smallest value in list (which may not be unique).

  int min = list->head->data;
  Node* p = list->head; //traversal pointer

  while(p != NULL){
    if(p->data < min){
	    min = p->data;
    }
    p = p->next;
  }

  return min; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  int sum = 0;
  Node* p = list->head; //traversal pointer

  while(p != NULL){
    sum += p->data;
    p= p->next;
  }
  return sum; // STUB!  Replace this line with correct code

}

