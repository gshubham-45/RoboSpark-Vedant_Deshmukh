#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct  node *left,*right;
};
struct node* newNode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main()
{
    struct node* n1=newNode(1);
    struct node* n3=newNode(3);
    struct node* n4=newNode(4);
    struct node* n5=newNode(5);
    struct node* n6=newNode(6);
    struct node* n7=newNode(7);
    struct node* n10=newNode(10);
    struct node* n11=newNode(11);
    struct node* n12=newNode(12);
    struct node* n17=newNode(17);
    struct node* n22=newNode(22);
    struct node* n30=newNode(30);

    n10->left=n6;
    n10->right=n12;
    n6->right=n7;
    n6->left=n3;
    n3->left=n1;
    n3->right=n4;
    n4->right=n5;
    n12->left=n11;
    n12->right=n22;
    n22->left=n17;
    n22->right=n30;

    postorder(n10);
    return 0;
}


