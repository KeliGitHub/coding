#include<stdio.h>
#include<stdbool.h>
#include<limits.h>


#define Stack_len 20
#define empty (-1)
#define StackEmpty INT_MIN

int top = empty;
int Mystack[Stack_len];


bool push(int value){
  if(top >= Stack_len-1)
    return false;

    top++;
    top[Mystack] = value;
    return true;

}
int pop(int result){
  if(top == empty)
  return StackEmpty;
  
  result = top[Mystack];
  top--;

  return result;
}




int main(){

  int i,j;
   push(12);
   push(32);
   push(321);

   i = pop(top[Mystack]);
   j = pop(top[Mystack]);

   printf("i = %d\n",i);
   printf("j = %d\n",j);

   return 0;
}
