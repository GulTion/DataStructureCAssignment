#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;

}*head;

void createLL(int A[],int n){
  
  struct Node *p,*last;
  int i;
  p =  (struct Node*)malloc(sizeof(struct Node));
  p->data=A[0];
  p->next=NULL;
  head=p;
  last=head;

  for(int i=1;i<n;i++){
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = last->next;
  }


}
void print(struct Node *start){
  while(start!=NULL){
    printf("%d➔ ",start->data);
    start=start->next;
  }
   printf("NULL");
  printf("\n");
  
}
struct Node * reverse(struct Node *start){
  struct Node *p,*r,*q;
  p=start;
  r=q=NULL;
  while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next = r;
  }
 
  return q;
}
int main(void) {
  
  int A[] = {9,8,1,2,5,8,7,1,6,3};
  createLL(A, 10);
  print(head);
  printf("After Apply Reverse \n");
  print(reverse(head));
  return 0;
}