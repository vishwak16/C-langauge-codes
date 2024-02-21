#include <stdio.h>
                                      //adding node in b/w
typedef struct node
{                                          
  int data;
  struct node *next;
  struct node *prev;
}NODE;

void disFList(NODE *);
void disBList(NODE *);

int main()
{
  NODE n1,n2,n3,n4;
  
  NODE *t,*head,*temp;            //for traversing
  
  n1.data=10;
  n1.prev=NULL;
  n1.next=NULL;
  n2.data=20;
  n2.prev=NULL;
  n2.next=NULL;
  n3.data=30;
  n3.prev=NULL;
  n3.next=NULL;
  
  
  n1.next=&n2;
  n2.prev=&n1;
  n2.next=&n3;
  n3.prev=&n2;
  
  head=&n1;
  t=head;
  
  disFList(head);
  printf("\n Backward list \n");
  disBList(head);
  
  printf("\n address of n3: %u",&n3);
  
  temp=n2.next;
  
  printf("address of n3: %u using n2.next",n2.next);
  printf("\n address of n3: %u using temp",temp);
  
  n4.data=40;
  n4.prev=NULL;
  n4.next=NULL;
  
  n2.next=&n4;
  n4.prev=&n2;
  n4.next=temp;    //n4 ki n3 add istunam 
  temp->prev=&n4;
  
  
  disFList(head);
  printf("\n Backward list \n");              //displaying new niode
  disBList(head);
  
}



void disFList(struct node *h)
{
  printf("\nList is\n");
  while(h)
  {
    printf("%d->",h->data);
    h=h->next;
  }
  printf("NULL\n");
  
}


void disBList(struct node *h)
{
  printf("\nList is\n");
  while(h->next !=NULL)
  {
    
    h=h->next;
  }
  
  do{
    printf("\n%d->",h->data);
    h=h->prev;
  }while(h != NULL);
  
  printf("NULL\n");
}
