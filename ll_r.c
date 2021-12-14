#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct node node;
void add( node ** head, int data){
node *temp =(node*)malloc(sizeof(node));
if(temp==NULL)printf("\nmemory not assigned\n");

temp->data=data;
temp->next=NULL;
if(*head==NULL){
*head=temp;
}
else{
node*n=*head;
while(n->next!=NULL){
n=n->next;
}
n->next=temp;
temp->next=NULL;
}
}

void display(node* head){
if(head==NULL){
printf("list is empty:\n");
}
else{
while(head!=NULL){
printf(" %d ",head->data);
head=head->next;
}
}
}


int main(){
int x=1,choice=1;node* head=NULL;
while(choice){
printf("enter value to be stored:\t");
scanf("%d",&x);
add(&head,x);
printf("\nDo you want to contiue\n1.YES\n0.NO\t");
scanf("%d",&choice);
}
printf("linked list before: \n");
display(head);

//reverse(&head);

}
