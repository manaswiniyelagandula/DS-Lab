#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node *head = NULL, *cur, *temp, *temp1;
int ele, pos, c;

struct node *Create(){
	int n;
	printf("Enter no.of nodes\n");
	scanf("%d",&n);
	while(n--){
		cur = (struct node *)malloc(sizeof(struct node));
		printf("Enter data value: ");
		scanf("%d", &(cur -> data));
		
		if (head == NULL)
			head = cur;
		else{
			temp = head;
			while (temp -> link != NULL)
				temp = temp -> link;
			temp -> link = cur;
		}
	}
	return head;
}

void display(struct node *head){
	temp = head;
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> link;
	}
}

struct node *Insert_begin(){
	cur = (struct node *)malloc(sizeof(struct node));
	printf("Enter value to insert at begin: ");
	scanf("%d", &(cur -> data));
	cur -> link = head;
	head = cur;
}

struct node *Insert_end(){
	cur = (struct node *)malloc(sizeof(struct node));
	printf("Enter value to insert at end: ");
	scanf("%d", &(cur -> data));
	temp = head;
	while(temp -> link != NULL)
		temp = temp -> link;
	temp -> link = cur;
	cur -> link = NULL;

	return head;	
}

struct node *Insert_pos(){
	cur = (struct node *)malloc(sizeof(struct node));
    printf("Enter value to insert: ");
 	scanf("%d", &(cur -> data));
	printf("Enter where the element should be inserted: ");
	scanf("%d", &pos);
	c = 1;
	temp = head;
	while (c < pos){
		temp1 = temp;
		temp = temp -> link;
		c++;
	}
	temp1 -> link = cur;
	cur -> link = temp;

	return head;
}

struct node *Delete_begin(){
	temp = head;
	printf("deleted element %d\n", temp  -> data);
	head = head -> link;
	free(temp);
	return head;
}

struct node *Delete_end(){
	temp = head;
	while(temp -> link != NULL){
		temp1 = temp;
		temp = temp -> link;
	}
	temp1 -> link = NULL;
	printf("deleted element %d\n", temp -> data);
	free(temp);
	return head;
}

int main(){
	Create();
	display(head);
	Insert_begin();
	display(head);
	Insert_end();
	display(head);
	Insert_pos();
	display(head);
	Delete_begin();
	display(head);
	Delete_end();
	display(head);
}
