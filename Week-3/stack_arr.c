#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int top = -1, stack[SIZE], ele, i;
void push(int ele){
    stack[++top] = ele;
}
int pop(){
    return stack[top--];
}
int peek(){
    return stack[top];
}
void display(){
    for (i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main(){
    int ch;
    while(1){
        printf("1 - PUSH\n 2 - POP\n 3 - PEEK\n 4 - DISPLAY\n 5 - EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                if (top == SIZE - 1)
                    printf("Stack Overflow\n");
                else{
                    printf("Enter element: ");
                    scanf("%d", &ele);
                    push(ele);
                }
                break;
            case 2:
                if (top  == -1)
                    printf("Stack Underflow\n");
                else
                    printf("Deleted element is %d\n", pop());
                break;
            case 3:
                if (top == -1)
                    printf("Stack Underflow\n");
                else
                    printf("Top element is %d\n", peek());
                break;
            case 4:
                if (top == -1)
                    printf("Stack Underflow\n");
                else
                    display();
                break;
            case 5:
                exit(0);
        }
    }
}
