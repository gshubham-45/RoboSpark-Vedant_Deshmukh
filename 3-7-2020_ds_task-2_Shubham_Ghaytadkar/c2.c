#include<stdio.h>
int push(char elem,char*stack,int top)
{
    top=top+1;
    stack[top]=elem;
    return top;

}
int pop(char*stack,int top)
{
    if (top==-1)
    return top;
    else
    {
        top-=1;
        return top;
    }

}
int main()
{
    char stack[100];
    char ref[100];
    int top=-1;
    int temp=-1;
    int i;
    printf("\n give input bracket");
    scanf("%s",stack);
    for( i=0;stack[i]!='\0';i++)
    {
        if (stack[i]=='(')
        temp=push('(',ref,temp);
        
        else 
        temp=pop(ref,temp);
        
        if (temp==-1)
        break;
    }
    if ((temp==-1) && (stack[i+1]=='\0'))
    printf("balance bracket");
    else
    printf("not balance bracket");
    

    



}
