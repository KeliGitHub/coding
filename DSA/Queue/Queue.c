#include<stdio.h>
#include<stdbool.h>
#define Max 15
#define empty (-1)


int front;
int Rear;
int A[Max];


void Front(){
  if(front == empty){
      printf("Queue is Empty");

  }
  else{
    return A[front];
  }
}
void enqueue(int x){
  if(IsFull()){
    printf("Queue is fulled \n");
    return ;
    
  }
  if (IsEmpty()){
      front = Rear = 0;
  }
  else{
    Rear = (Rear+1)%Max;
  }
  A[Rear] = x;
      

  
}
int dequeue(){
  if(IsEmpty()){
    printf("Queue is Empty");
  }
  else if(front == Rear){
    front = Rear = -1;
  }
  else{
    front = (front+1)%Max;
  }

}
bool IsEmpty(){
      if(front == empty && Rear == empty){
        return true;
      }
      return false;
}
bool IsFull(){
  return (Rear+1)%Max == front ? true : false;
}
void Print(){
int length = (Rear + Max - front)%Max + 1;
int i;
for( i = 0; i<length;i++){
printf("%d ", A[(front+i)%Max]);
}
printf("\n");
}

int main(){



front = empty;
Rear =  empty;
enqueue(2); Print();
enqueue(4); Print();
enqueue(6); Print();
dequeue(); Print();
enqueue(10); Print();
return 0;
}


