#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int front=-1;
int rear=-1;

int queue[MAX];

void Enque(int);
int Deque();
void display();
int main(int argc, char **argv)
{
	int option;
    int item;
    do{
        printf("\n 1. Insert to Queue (EnQueue)");
        printf("\n 2. delete from the Queue (DeQueue)");
        printf("\n 3. Display the content ");
        printf("\n 4. Exit\n");
        printf("Enter the option :");
        scanf("%d",&option);
        switch(option)
        {
            case 1:  printf("Enter the element\n");
                     scanf("%d",&item);
                     Enque(item);
                     break;
            case 2:  if(front == -1)
                     {
                           printf("Queue is empty\n"); break;
                     }
                     else{
                     item=Deque();
                   
                    printf("Removed element from the queue %d",item);
                    
                     }
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
        }
    } while (option!=4);
	return 0;
}

void Enque(int ele)
{
    if (rear==MAX-1)
       printf("Queue is full\n");
    else
    {
      if(front == -1)
          front=0;
      rear++;
      queue[rear]=ele;
                    
    }
}
int Deque()
{
    int item;
           
        item=queue[front];
        front++;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
        return item;
        
}

void display()
{
    int i;
    if((front==-1)&& (rear==-1))
        printf("Queue is empty\n");
    else
    {
        printf("\n Queue contents:");
        for(i=front;i<=rear;i++)
            printf("%d", queue[i]);
    }
}
