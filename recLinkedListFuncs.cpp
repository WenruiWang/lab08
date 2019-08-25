#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
      double sum=head->data;  
   Node* p=head;      
   
      if(p->next==NULL){
             return sum ;}
 else{
		sum+=p->data;
               
		return	recursiveSum(p->next);
   } }

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
      int x=head->data;
      if(head->next==NULL){
	      return x;}
      else{
	      if(head->next->data>x){
		      return recursiveLargestValue(head->next);}
	      else{
		      return x;}
      }

  
}
