#include "Ejercicio01.h"
#include <iostream>


Node<char>* Ejercicio01::remove(Node<char>* head)
{
	Node<char>* temp = head;
	Node<char>* current = head;

	while (current != nullptr && current->next != nullptr)
	{
		if (current->value == current->next->value)
		{
			Node<char>* tempNext = current->next->next;
			delete current->next;
			current->next = tempNext;
		}
		else
		{
			current = current->next;
		}
	}

	current = head;
	while (current != nullptr && current->next != nullptr)
	{
		if (tolower(current->value) == tolower(current->next->value))
		{
			Node<char>* tempNext = current->next->next;
			delete current->next;
			current->next = tempNext;
		}
		else
		{
			current = current->next;
		}
	}

	return head;
}
