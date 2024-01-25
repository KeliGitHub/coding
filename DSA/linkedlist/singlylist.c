#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

void insert(int x)
{
  struct Node* temp = malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = head;

  head = temp;
}

void print() {
  struct Node* temp = head;

  printf("list : \n");

  while (temp != NULL)  // Change head to temp here
  {
    printf("%d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}


int main () {
  head = NULL;
  printf("How many number :\n");
  
  int n,i,x;
  scanf("%d",&n);

  for (i = 0; i<n; i++){
    printf("Enter the number :\n");
    scanf("%d",&x);

    insert(x);
    print();
  }
}