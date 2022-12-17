#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};
struct node* insert(struct node* root, int data){
    if (root==0){
        root=(struct node*)malloc(sizeof(struct node));
        root->data=data;
        root->lchild=NULL;
        root->rchild=NULL;
    }
    else if(data < root->data){
        root->lchild=insert(root->lchild, data);
    }
    else if(data > root->data){
        root->rchild=insert(root->rchild, data);
    }
    else{
        printf("Duplicate Element Entered\n");
    }
    return root;
}
int count=0;
int inorder(struct node *ptr, int l, int h){
    if (ptr==NULL){
        return count;
    }
    inorder(ptr->lchild, l, h);
    if (ptr->data >= l && ptr->data <= h){
        count++;
        printf("%d ", ptr->data);
    }
    inorder(ptr->rchild, l, h);
}
int main(){
    system("cls");
    struct node *root;
    root=0;
    int data, choice, count;
    int l_range, h_range;
    printf("For Inserting the node: 1;\nFor Showing the Inorder and Number of nodes in the Tree: 2;\nExit: 3;\n");
    repeat:
    printf("Enter your Choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("Enter the Data: ");
        scanf("%d", &data);
        root=insert(root, data); 
        break;
        case 2:
        printf("Enter the lower bound and the upper bound range: ");
        scanf("%d %d", &l_range, &h_range);
        count=inorder(root, l_range, h_range);
        printf("\nNumber of nodes in the Range is: %d\n", count);
        break;
        case 3:
        break;
        default:
        printf("Invalid Entry.\n");
        break;
    }
    int n;
    printf("For Yes: 1;\nFor NO: 0;\nDo you want to repeat the program: ");
    scanf("%d", &n);
    if (n)
    goto repeat;
    else
    printf("Thanks for trying out the program.\n");
    return 0;
}