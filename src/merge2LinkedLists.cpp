/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};


struct node * merge2LinkedLists(struct node *head1, struct node *head2) 
{
	if (head2 == NULL)
		return head1;
	if (head1 == NULL)
		return head2;
	if (head1 == NULL && head2 == NULL)
		return NULL;
	struct node *p, *result;
	if (head1->num < head2->num)
	{
		p = head1;
		head1 = head1->next;
	}
	else
	{
		p = head2;
		head2 = head2->next;
	}
	result = p;
	while (head1 != NULL && head2 != NULL)
	{
		if (head1->num < head2->num)
		{
			result->next = head1;
			result = head1;
			head1 = head1->next;
		}
		else 
		{
			result->next = head2;
			result = head2;
			head2 = head2->next;
		}
	}
	if (head1 == NULL)
		result->next = head2;
	else
		result->next = head1;

	return p;
}