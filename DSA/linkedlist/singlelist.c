#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* link;
};
void count_of_node(struct node *head){
  int count = 0;
  if(head == NULL)
  printf("List is empty\n");

  struct node *ptr = NULL;
        ptr = head;
          while(ptr != NULL){
            count++;
            ptr = ptr->link;
          }
              printf("%d",count);
}
void print_data(struct node *head){
  if(head == NULL)
  printf("List is empty \n");

  struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
      printf("%d",ptr->data);
     ptr = ptr->link;
    }
}
void add_at_end(struct node *head ,int data ){

struct node *ptr,*temp;
temp = malloc(sizeof(struct node));
temp->data = 67;
temp->link = NULL;

while(ptr->link != NULL){
  ptr = ptr->link;
}
ptr->link = temp;


}
int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 2;
  head->link = NULL;

  struct node *current = malloc(sizeof(struct node));
  current->data = 4;
  current->link = NULL;
  head->link = current;

  current = malloc(sizeof(struct node));
  current->data = 54;
  current->link = NULL;
  head->link->link = current;

  count_of_node(head);
  print_data(head);
  add_at_end(head,67);

  return 0;

}