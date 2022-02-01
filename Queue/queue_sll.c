#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*front = NULL,*rear = NULL,*cur;
void enqueue(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    cur->link = NULL;
    if(front==NULL){
        front = rear = cur;
    }
    else{
        rear->link = cur;
        rear = cur;
    }

}
void dequeue(){
    if(front == NULL){
        printf("Queue underflow");
    }
    else if(front == rear){
        printf("deleted element is %d",front->data);
        front = rear = NULL;
    }
    else{
        printf("deleted element is %d",front->data);
        front=front->link;
    }
}
void display(){
    if(front == NULL){
        printf("Queue is empty");
    }
    else{
        cur = front;
        while(cur!=NULL){
            printf("%d\n",cur->data);
            cur = cur->link;
        }
    }
}

int main(){
    int ch,ele;
    while(1){
        printf("\n 1-enqueue \n 2-dequeue \n 3-display \n 4-exit \n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1 : printf("Enter element to be inserted :");
                     scanf("%d",&ele);
                     enqueue(ele);
                     break;
            case 2 : dequeue();
                     break;
            case 3 : display();
                     break;
            case 4 : exit(0);

       }
    }
}
