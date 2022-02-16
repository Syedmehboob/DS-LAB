#include <stdio.h>
#define size 3
int top=-1;
int stack[size];
void push(int);
int pop();
void display();
int stackempty();
int main(int argc, char **argv)
{

    int choice,element;
    char ch;
    do
    {
    printf("Enter your choice\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Enter the element to be pushed \n");
                scanf("%d",&element);
                push(element);
                break;
        case 2: if(!stackempty())
                {
                  element=pop(stack);

                  printf("Poped element is %d \n",element);
                }
                else
                  printf("stack is empty\n");

                break;
        case 3: display();
                break;
        default: printf("Invalid choice\n");
    }
    printf("Do you want to continue:\n");
    fflush(stdin);
    scanf("%c",&ch);
    } while(ch=='y'||ch=='Y');
	return 0;
}

int stackempty ()
{
    if(top==-1) return 1;
    else
    return 0;
}
void push(int ele)
{
    if (top==size-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top]=ele;
    }
}

int pop()
{
    int popele;

       popele=stack[top];

    top--;
    return (popele);


}

void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The stack elemements\n");
    for(i=top;i>=0;i--)
    {

        printf("%d\t",stack[i]);
    }

    }
}
