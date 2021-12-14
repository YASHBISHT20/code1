#include<stdio.h>
#inlude<stdlib.h>
struct node{
int info;
struct node *next;
};
typedef struct node node;
void add( node ** head, int data){
node *temp =(node*)malloc(sizeof(node));
if(temp==NULL)printf("\memory not assigned\n");

temp->info=data;
temp->next=NULL;
if(*head==NULL){
*head=temp;
}
else{
node*n=*head;
while(n->next!=NULL){
n=n->next;

}
}


}
