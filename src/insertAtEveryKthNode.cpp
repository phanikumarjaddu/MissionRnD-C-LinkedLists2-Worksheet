/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node *insertAtEveryKthNode(struct node *head, int K) {


	
	int i = 0, len = 0, j;
	struct node *temp, *p;
	temp = head;
	if (head == NULL || K<=0)
		return NULL;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (K > len)
		return head;
	temp = head;
	
	j = 1;
	for (i = 0; temp != NULL;i++)
	{
		p = (struct node *)malloc(sizeof(struct node));
		if ( j % K == 0)
		{
			p->num = K;
			p->next = temp->next;
			temp->next = p;
			temp = temp->next;
		}
		temp = temp->next;
		j++;
	}
	return head;
}
