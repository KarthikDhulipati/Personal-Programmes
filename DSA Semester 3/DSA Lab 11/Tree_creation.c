#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};
struct node* insert_leaf(struct node *ptr, int data){
    if (ptr==NULL){
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->lchild=NULL;
        ptr->rchild=NULL;
    }
    else if(data<ptr->data){
        ptr->lchild=insert_leaf(ptr->lchild, data);
    }
    else if(data>ptr->data){
        ptr->rchild=insert_leaf(ptr->rchild, data);
    }
    else 
    printf("Duplicate Key.\n");
    return ptr; 
}
void preorder(struct node *ptr){
    if (ptr==0)
    return;
    printf("%d ", ptr->data);
    preorder(ptr->lchild);
    preorder(ptr->rchild);
}
void inorder(struct node *ptr){
    if (ptr==0)
    return;
    inorder(ptr->lchild);
    printf("%d ", ptr->data);
    inorder(ptr->rchild);
}
void postorder(struct node *ptr){
    if (ptr==0)
    return;
    postorder(ptr->lchild);
    postorder(ptr->rchild);
    printf("%d ", ptr->data);
}
int flag=0;
void search_node(struct node *ptr, int search){
    if (ptr==0)
    return ;
    search_node(ptr->lchild, search);
    if (search==ptr->data){
        printf("The number %d exists in the Tree.\n", search);
        flag=1;
    }
    search_node(ptr->rchild, search);
}
struct node* case_1(struct node* root, struct node *prev, struct node *ptr){
    if (prev==NULL){
        root=0;
    }
    else if (ptr==prev->lchild){
        prev->lchild=0;
    }
    else{
        prev->rchild=0;
    }
    free(ptr);
    return root;
}
struct node* case_2(struct node* root, struct node *prev, struct node *ptr){
    struct node* child;
    if (ptr->lchild!=0)
        child=ptr->lchild;
    else
        child=ptr->rchild;
    if (prev==0)
        root=child;
    else if (ptr==prev->lchild)
        prev->lchild=child;
    else
        prev->rchild=child;
    free(ptr);
    return root;
}
struct node* case_3(struct node* root, struct node *prev, struct node *ptr){
    struct node *s, *ps;
    ps=ptr;
    s=ptr->rchild;
    while (s->lchild!=0){
        ps=s;
        s=s->lchild;
    }
    ptr->data=s->data;
    if (s->lchild==NULL && s->rchild==NULL)
        root=case_1(root, ps, s);
    else
        root=case_2(root, ps, s);
    return root;
}
struct node* del(struct node *root, int key){
    struct node *ptr, *prev;
    ptr=root;
    prev=NULL;
    while(ptr!=NULL){
        if(key==ptr->data)
            break;
        prev=ptr;
        if (key<ptr->data){
            ptr=ptr->lchild;
        }
        else{
            ptr=ptr->rchild;
        }
    }
    if (ptr==NULL)
        printf("KEY is not Present.\n");
    else if (ptr->lchild!=0 && ptr->rchild!=0)
        root=case_3(root, prev, ptr);
    else if (ptr->lchild!=0)
        root=case_2(root, prev, ptr);
    else if (ptr->rchild!=0)
        root=case_2(root, prev, ptr);
    else
        root=case_1(root, prev, ptr);
    return root;
}
int main(){
    struct node *root=NULL, *ptr;
    int choice, data, c;
    printf("For inserting data into the tree: 1;\nFor Inorder Display: 2;\nFor Preorder Display: 3;\nFor Postorder Display: 4;\nFor Searching an element in the Tree: 5;\nFor Deleting an element from the Tree: 6;\nExit: 7;\n");
    repeat:
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:{
            printf("Enter the data: ");
            scanf("%d", &data);
            root=insert_leaf(root, data);
            break;
        }
        case 2:{
            printf("The Inorder is as follows: ");
            inorder(root);
            printf("\n");
            break;
        }
        case 3:{
            printf("The preorder is as follows: ");
            preorder(root);
            printf("\n");
            break;
        }
        case 4:{
            printf("The postorder is as follows: ");
            postorder(root);
            printf("\n");
            break;
        }
        case 5:
        int s;
        printf("Enter the number to be searched in the Tree: ");
        scanf("%d", &s);
        search_node(root, s);
        if (flag==0){
            printf("The data %d does not exist in the tree.", s);
        }
        case 6:
        int d;
        printf("Enter the value to be deleted from the Tree: ");
        scanf("%d", &d);
        root=del(root, d);
        break;
        case 7:
        break;
    }
    printf("For YES: 1;\nFor NO: 2;\nDo you want to repeat the program: ");
    scanf("%d", &c);
    if (c)
    goto repeat;
    else
    printf("Thanks for trying out the program.\n");
    return 0;
}