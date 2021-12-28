#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root = NULL, *cur, *temp;

struct node *create(){
	cur = (struct node *)malloc(sizeof(struct node));
	printf("Enter element: ");
	scanf("%d", &(cur -> data));
	cur -> left = NULL;
	cur -> right = NULL;
	if (root == NULL)
		root = cur;
	else{
		temp = root;
		while (temp != NULL){
			if ((cur -> data < temp -> data) && (temp -> left == NULL)){
				temp -> left = cur;
				return root;
			}
			else if ((cur -> data < temp -> data) && (temp -> left != NULL))
				temp = temp -> left;
			else if ((cur -> data > temp -> data) && (temp -> right == NULL)){
				temp -> right = cur;
				return root;
			}
			else if ((cur -> data > temp -> data) && (temp -> right != NULL))
				temp = temp -> right;
		}
	}
}

void preorder(struct node *root){
	if (root != NULL){
		printf("%d\t", root -> data);
		preorder(root -> left);
		preorder(root -> right);
	}
}

void inorder(struct node *root){
	if (root != NULL){
		inorder(root -> left);
		printf("%d\t", root -> data);
		inorder(root -> right);
	}
}

void postorder(struct node *root){
	if (root != NULL){
		postorder(root -> left);
		postorder(root -> right);
		printf("%d\t", root -> data);
	}
}


int main(){
	int ch;
	while (1){
		printf("\n1 - Create \n2 - Preorder \n3 - Inorder \n4- Postorder \n5 - Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				root = create();
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				exit(0);
		}
	}
}


/* output:
1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 1
Enter element: 38

1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 1
Enter element: 42

1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 1
Enter element: 30

1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 1
Enter element: 43

1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 1
Enter element: 11

1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 1
Enter element: 76

1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 1
Enter element: 115

1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 1 
Enter element: 123

1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 1
Enter element: 37

1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 2
38	30	11	37	42	43	76	115	123	
1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 3
11	30	37	38	42	43	76	115	123	
1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice: 4
11	37	30	123	115	76	43	42	38	
1 - Create 
2 - Preorder 
3 - Inorder 
4- Postorder 
5 - Exit
Enter your choice:  5
*/
