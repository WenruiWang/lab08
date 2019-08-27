#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
     if(head==0)  return 0;
     double sum;
     sum=recursiveSum(head->next);
     return head->data+sum;     }
//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
     
      if(head->next==NULL){
	      return head->data;}
              int max=recursiveLargestValue(head->next);
	      if(head->data>max){
		      return head->data;}
	      else{
		      return max;}
      }

 
