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
struct node* insert(struct node* root,int i)
{
    if (root == NULL)
    {
        printf(" \ndataSucessfully added at proper position in BST,DON'T WORRY! ");
        return newNode(i);
    }
    else if(i<root->data)
        root->left=insert(root->left,i);
    else if (i>root->data)
        root->right=insert(root->right,i);
    else
    {
        printf("data already exist");
    }

}
int main()
{
    int n;
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
    printf("\n enter integer that you want to insert in BST :  ");
    scanf("%d",&n);
    insert(n10,n);
    return 0;
}

    
    
    
        
