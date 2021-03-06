#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

node *deleteAtHead(node *head)//time comp. O(1) ; space comp. O(1)
{
	if (head == NULL)
	{
		return NULL;
	}

	node *curr = head;
	head = head->next;
	delete curr;

	return head;
}

void print(node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	/*
	Linked list here is :
	10 -> 20 -> 30 -> NULL
	*/
	node *head = new node(10);
	node *second = new node(20);
	node *third = new node(30);

	head->next = second;
	second->next = third;

	print(head);
	head = deleteAtHead(head);
	print(head);

	return 0;
}