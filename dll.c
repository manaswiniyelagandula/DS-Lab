#include <stdio.h>
#include <stdlib.h>
 
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
 
struct node *head = NULL, *tail = NULL, *cur, *temp, *temp1;
 
struct node *create(){
	int n;
	printf("Enter no.of nodes: ");
	scanf("%d", &n);
	while(n--){
		cur = (struct node *)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &(cur -> data));
		cur -> prev = NULL;
		cur -> next = NULL;
		if(head == NULL){
			head = cur;
		}
		else{
			temp = head;
			while(temp -> next != NULL)
				temp = temp -> next;
			tail = temp -> next = cur;
			cur -> prev = temp;
		}
	}
	return head;
}
 
struct node *insert_begin(struct node *head, int ele){
	cur = (struct node *)malloc(sizeof(struct node));
	cur -> data = ele;
	cur -> prev = NULL;
	cur -> next = head;
	head = cur;
	return head;
}
 
struct  node *insert_end(struct node *tail, int ele){
	cur = (struct node *)malloc(sizeof(struct node));
	cur -> data = ele;
	cur -> next = NULL;
	tail -> next = cur;
	tail = cur;
	return tail;
}
 
struct node *insert_pos(struct node *head, int ele, int pos){
	int c = 1;
	cur = (struct node *)malloc(sizeof(struct node));
	cur -> data = ele;
	temp = head;
	while(c < pos){
		temp1 = temp;
		temp = temp -> next;
		c++;
	}
	cur -> prev = temp1;
	temp1 -> next = temp -> prev = cur;
	cur -> next = temp;
	return head;
}
 
struct node *delete_begin(struct node *head){
	temp = head;
	head = head -> next;
	printf("Deleted element: %d", temp -> data);
	free(temp);
	return head;
}
 
struct node *delete_end(struct node *tail){
	temp = tail;
	tail = tail -> prev;
	printf("Deleted element: %d", temp -> data);
	free(temp);
	tail -> next = NULL;
	return tail;
}
 
struct node *delete_pos(struct node *head, int pos){
	temp = head;
	int c = 1;
	while(c < pos){
		temp1 = temp;
		temp = temp -> next;
	c++;
	}    
	temp1 -> next = temp -> next;
	temp -> prev = temp1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	printf("Deleted element: %d", temp -> data);
	free(temp);
	return head;
}
 
void display(struct node *head){
	temp = head;
	while (temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}
}
int main() {
	// your code goes here
	int ch, ele, pos;
	while(1){
		printf("1 - Create\n2 - Display\n3 - Insert at begin\n4 - insert at end\n5 - insert at position\n 6 - delete at begin\n7 - delete at end\n8 - delete at position\n9 - exit\n");
	printf("Enter your choice: ");	
	scanf("%d", &ch);
	switch(ch){
		case 1:
			head = create();
			break;
		case 2:
			display();
			break;
		case 3:
			printf("Enter element: ");
			scanf("%d", &ele);
			head = insert_begin(head, ele);
			break;
		case 4:
			printf("Enter element: ");
			scanf("%d", &ele);
			tail = insert_end(tail, ele);
			break;
		case 5:
			printf("Enter element: ");
			scanf("%d", &ele);
			printf("Enter pos: ");
			scanf("%d", &pos);
			head = insert_pos(head, ele, pos);
			break;
		case 6:
			head = delete_begin(head);
			break;
		case 7:
			tail = delete_end(tail);
			break;
		case 8:
			head = delete_pos(head, pos);
			break;
		case 9:
			exit(0);
		}
	}
	return 0;
}
 
