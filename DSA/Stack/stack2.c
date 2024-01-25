#include<stdio.h>

#define max 101

int top = -1;
int array[max];

void push(int value){
  if(top == array[max] - 1){
    printf("Stack is overflowed\n");
  }
  array[top++] = value;
}