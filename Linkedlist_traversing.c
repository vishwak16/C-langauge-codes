// linkedlist traversing
#include <stdio.h>
struct node {
    int val;
    struct node *ptr;
};
int main() {
    struct node n1, n2, n3;
    struct node *temp, *head;
     n1.val = 10;
     n1.ptr = NULL;
     n2.val = 20;
     n2.ptr = NULL;
     n3.val = 30;
     n3.ptr = NULL;
     
     n1.ptr = &n2;
     n2.ptr = &n3;
     
     head = &n1;
     temp = head;
     /*
     printf("values of  n1 is %d \n", temp->val); 
     temp = temp->ptr;
     printf("values of  n2 is %d\n ", temp->val); 
     temp = temp->ptr;
     printf("values of  n3 is %d ", temp->val);
     */
     while (temp){
         printf("%d->",temp->val);
         temp = temp->ptr;
     }
     printf("NULL");
     

    return 0;
}
