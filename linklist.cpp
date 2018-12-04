#include<iostream>
#include"complex.h"
#include"linklist.h"
using namespace std;
linklist :: linklist()
{
	head= NULL;
	tail= NULL;
}


void linklist:: insertatstart(complex v)
{
	complex*temp = new complex;
	temp->c = v.c;
	temp->d = v.d;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}

}
void linklist :: insertposition(int pos, complex c)
{
	complex*newnode;
	complex*temp;
	newnode = new complex;
	newnode->c = c.c;
	newnode->d = c.d;
	newnode->next = NULL;
	temp = head;
	for (int i = 1; i<pos; i++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;

}
void linklist :: deleteposition(int pos)
{
	complex *current = new  complex;
	complex *previous = new  complex;
	current = head;
	for (int i = 1; i<pos; i++)
	{
		previous = current;
		current = current->next;
	}
	previous->next = current->next;

}
void linklist :: getnth(int po)
{
	int count = 1;
	complex*cur = head;
	while (cur != NULL)
	{
		if (count == po)
			cout << cur->c << "+" << cur->d << "i" << endl;
		count++;
		cur = cur->next;
	}


}
void linklist :: showdatca()
{
	complex* temp = head;
	while (temp)
	{
		cout << temp->c << "+" << temp->d << "i" << "\t";
		temp = temp->next;
	}
	cout << endl;
}