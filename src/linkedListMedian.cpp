/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};


int linkedListMedian(struct node *head) {
	
	struct node *temp;
	int i, len = 0;
	if (head == NULL)
		return -1;
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	temp = head;
	if (len % 2 == 0)
	{
		for (i = 0; i < (len/2)-1; i++)
		{
			temp = temp->next;
		}
		return (temp->num + temp->next->num) / 2;
	}
	else
	{
		for (i = 0; i < len/2 ; i++)
		{
			temp = temp->next;
		}
		return temp->num;
	}

	return -1;
}
