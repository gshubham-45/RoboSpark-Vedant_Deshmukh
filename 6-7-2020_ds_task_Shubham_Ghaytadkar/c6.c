#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* addLinlkAsHead(struct node*head, int i)
{
    struct node *temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->data=i;
    temp1->next=head;
    return temp1;
}
void addLinlk(struct node*prev, int i)
{
    struct node *temp2 = (struct node *)malloc(sizeof(struct node));
    if (prev->next==NULL)  //at th end
    {
        temp2->data=i;
        temp2->next=NULL;
        prev->next=temp2;
    }
    if (prev->next!=NULL)   //insert in middle
    {
        temp2->data=i;
        temp2->next=prev->next;
        prev->next=temp2;
        
    }
}

void deleteEnd(struct node*head)
{
   struct node *p,*p1;
   p=head;
   while (p->next!=NULL)
   {
       p1=p;
       p=p->next;
   }
   p1->next=NULL;
   free(p);
    
}
void deleteMiddle(struct node*prev,struct node*current)
{
    prev->next=current->next;
    current->next=NULL;
    free(current);
    
}
struct node* deleteHead(struct node*head)
{
    struct node *p2=head;
    head=head->next;
    p2->next=NULL;
    free(p2);
    return head;
}

int main()
{   
    struct node *start = (struct node *)malloc(sizeof(struct node));

    start->data = 15;
    start->next = NULL;


    struct node *second = (struct node *)malloc(sizeof(struct node));
    second->data = 30;
    second->next = NULL;

    start-> next = second;


    struct node *third = (struct node *)malloc(sizeof(struct node));
    third->data = 45;
    third->next = NULL;

    second->next = third;

    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    fourth->data = 60;
    fourth->next = NULL;

    third->next = fourth;

     struct node *temp;
    int n,num;
    printf("if you want to insert link at front press <<<1\n otherwise enter random num other than 1\n");
    scanf("%d",&n);
    printf("\ninput number which you want to be in list  : ");
    scanf("%d",&num);
    if (n==1)
    
        temp=addLinlkAsHead(start,num);
    else
    {
        addLinlk(second, num);
        temp=start;
    }
    //temp=deleteHead(temp);
    //deleteMiddle(temp,second);
    while(temp->next!=NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d -> NULL ", temp->data);
}