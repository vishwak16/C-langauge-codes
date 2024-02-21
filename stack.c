#include<stdio.h>
#define n 5
int top = -1;
int arr[5]
int push(int a){
  if (top>n) {
    printf("insertion is not possible");
  }
  else {
    ++top;
    arr[top] =a
  }
}
 
int pop(int b){
  if (top<0) {
    printf("stack is empty");
  }
  else{
    top--;
  }
}

int peep
