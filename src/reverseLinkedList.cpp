/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {

	int i;
	struct node *temp;
	struct node *p;

	if (head == NULL)
		return NULL;
	p = NULL;
	while (head != 0)
	{
		temp = head->next;
		head->next = p;
		p = head;
		head = temp;
	}
//	head->next = temp;
	//temp = NULL;

	//temp->next = head;
	//head = NULL;

	return p;
}
