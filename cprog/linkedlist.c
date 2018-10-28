#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *head= NULL;

void push(NODE *head,int num)
{
	NODE *temp;
	 head = (NODE*)malloc(sizeof(NODE));
	
/*	if(head == NULL)
	{
		head = temp;
		temp->data = num;
		temp->next = NULL;
		printf("f part %d",temp->data);
	}*/
	temp = head;
	printf("addr temp: %u",&temp);

		while(temp != NULL)
		{	
			
			temp = temp->next;
		}
		temp->data = num;
		temp->next = NULL;
		printf("data = %d \n",temp->data);
	
	
}

int main()
{	
	push(head,4);
	push(head,5);
	push(head,6);
	push(head,7);
	return 0;
}
