#include<stdio.h>
#define max 100
struct Stack{
    int top;
    int node[max];
};
void initialized(struct Stack *ps){
  ps->top = -1;
}
void push(struct Stack *ps, int item){
  if(ps->top == max-1){
    printf("Overflowed\n");
  }
    else{
      ps->top = ps->top+1;
      ps->node[ps->top] = item;
    }
}
int isEmpty(struct Stack *ps)
{
  return ps->top = -1;
}
int pop(struct Stack *ps){
  if(!isEmpty(ps->node[ps->top])){
    printf("Underflowed\n");
    return -1;
  }
    else{
        return ps->node[ps->top-1];
    }
}
void ClearStack(struct Stack *ps)
{
  while(!isEmpty(ps->node[ps->top])){
    pop(ps->node[ps->top]);
  }
};
int main(){

  struct st;
  int i ,j;

  ClearStack(&st);
  push(&st,15);
  i = pop(&st);
  push(&st,i);
  push(&st,i);
  j = pop(&st);

  printf("Stack after (a): EMPTY\n");
  printf("Stack after (b):%d\n",st.node[st.top]);
  printf("Stack after (c): empty\n");
  printf("Stack after (d): %d\n",st.node[st.top]);
  printf("Stack after (e):%d %d\n",st.node[st.top-1],st.node[st.top]);
  printf("Stack after (f): %d\n", j);


}