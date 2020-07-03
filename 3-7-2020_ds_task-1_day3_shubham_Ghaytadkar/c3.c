#include <stdio.h>
#include<stdlib.h>
struct StudentsInfo
{
    int rollNo;
    char name[20];
};
typedef struct Queue
{
    int arr[50];
    int front,rear;
}Queue;
void initialize(Queue* q)
{
    q->front=0;
    q->rear=0;
}
void enqueue(Queue* q,int x)
{
    q->arr[q->rear++]=x;
    
}
void print(Queue* q)
{
    if (q->front!=q->rear)
    {
        for(int k=q->front;k<q->rear;k++)
        {
            printf("%d, ",q->arr[k]);
        }
        
    }
}
int main()
{
    int n;
    Queue*que=(Queue*) malloc(sizeof(Queue));
    printf("\n enter no of Students\n");
    scanf("%d",&n);
    int i,j;
    struct StudentsInfo Student[n];
    initialize(que);
    for (i=1;i<=n;i++)
    {
        Student[i].rollNo=i;
        printf("\n(roll no.wise entry) enter name of student%d name ",i);
        scanf("%s",Student[i].name);
    }
    
    for (j=1;j<=n;j++)
    {
        if ((Student[j].rollNo)%2==0)
        enqueue(que,Student[j].rollNo) ;
    }
    printf("\n roll no." );
    print(que);
     printf("\n Student names   " );
    for(int l=que->front;l<(que->rear)-1;l++)
        {
            printf("%s, ",Student[que->arr[l]].name);
        }
        printf("%s. ",Student[(que->rear)-1].name);
    printf("\nThese are the student with even roll no.");

return 0;

}