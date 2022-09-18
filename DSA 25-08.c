#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
	
};

void main(){
	struct node *temp;int ch=0;
	struct node *last,*header;
	last=header=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter value of first node\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	header=last=temp;
	printf("Enter choice 1 for more node otherwise 0\n");
	scanf("%d",&ch);
	while(ch==1){
			temp=(struct node*)malloc(sizeof(struct node));
			printf("Enter value of new node\n");
			scanf("%d",&temp->data);
	temp->next=NULL;
	last->next=temp;
	last=temp;
	printf("1 to make more node otherwise 0\n")
	;scanf("%d",&ch);
	}
	printf("Now list is \n");
	temp=header;
	while(temp!=NULL){
		printf("->%d",temp->next);
		temp=temp->next;
	}
}