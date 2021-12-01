#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *top = NULL, *cur, *temp;
int ele;
void push(int ele){
    cur = (struct node *)malloc(sizeof(struct node));
    cur -> data = ele;
    if (top == NULL)
        cur -> link = NULL;
    else
        cur -> link = top;
    top = cur;
}

int pop(){
    temp = top;
    if (top == NULL)
        printf("Stack Underflow\n");
    else{
        top = top -> link;
        return (temp -> data);
        free(temp);
    }
}

int peek(){
    return (top -> data);
}

void display(){
    temp = top;
    while(temp != NULL){
        printf("%d\n", temp -> data);
        temp = temp -> link;
    }
}

int main(){
    int ch;
    while(1){
        printf("1 - PUSH\n2 - POP\n3 - PEEK\n4 - DISPLAY\n5 - EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter element: ");
                scanf("%d", &ele);
                push(ele);
                break;
            case 2:
                printf("Deleted element is %d\n", pop());
                break;
            case 3:
                if (top == NULL)
                    printf("Stack Underflow\n");
                else
                    printf("Top element is %d\n", peek());
                break;
            case 4:
                if (top == NULL)
                    printf("Stack Underflow\n");
                else
                    display();
                break;
            case 5:
                exit(0);
        }
    }
}
