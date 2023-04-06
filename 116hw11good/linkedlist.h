#pragma once
#include <string>
#include <iostream>
using namespace std;

template<typename T>
//node class
class Node
{
public:
	T data;
	Node* next;

	Node<T>() { data = ""; next = nullptr; }
	Node<T>(T d) { data = d; next = nullptr; }

};


template<typename T>
class LinkedList
{
protected:
	Node<T>* head;

public:
	//default constructor
	LinkedList();
	~LinkedList();
	void append(T);  //put at end of list
	void insert(T);   //insert in order
	void display();
	bool deleteval(T);

	//copy constructor
	void copyList(const LinkedList&);
	LinkedList(const LinkedList&);

};

template<typename T>
//default constructor
LinkedList<T>::LinkedList()
{
	head = nullptr;  //empty list
}


template<typename T>
//destructor
LinkedList<T>::~LinkedList()
{
	Node<T>* nodeptr;  //walks the list
	Node<T>* nextnode;  //keeps next node
	//start at beginning of list
	nodeptr = head;
	//loop while nodes to delete
	while (nodeptr != nullptr)
	{
		//deleting node at nodeptr
		//cout << "Deleting " << nodeptr->data << endl;
		//but must save address of next node first
		nextnode = nodeptr->next;
		//now delete nodeptr
		delete nodeptr;
		//move to next node
		nodeptr = nextnode;
	}
}


template<typename T>
void LinkedList<T>::insert(T val)
{
	//insert in order
	//declare some pointers
	Node<T>* nodeptr;
	//create new node
	Node<T>* newnode = new Node<T>(val);
	Node<T>* previous = nullptr;

	//if empty list, make this first node
	if (head == nullptr)
	{
		head = newnode;
	}
	else
	{
		//start at first node
		nodeptr = head;
		//skip all nodes less than val
		while (nodeptr != nullptr && nodeptr->data < val)
		{
			//move to next
			previous = nodeptr;
			nodeptr = nodeptr->next;
		}
		//is it the new first node?
		if (previous == nullptr)
		{
			head = newnode;
			newnode->next = nodeptr;
		}
		else
		{
			//insert between previous and nodeptr
			previous->next = newnode;
			newnode->next = nodeptr;
		}
	}
}


template<typename T>
void LinkedList<T>::copyList(const LinkedList& other)
{
	//make a copy of the list in other, node by node
	Node<T>* nodeptr;
	Node<T>* newnode;
	Node<T>* previous = nullptr;
	//if empty list there are no nodes to be created
	if (other.head == nullptr)
	{
		head = nullptr;
		return;
	}
	//if here then there is at least one node to copy
	//start at first node
	nodeptr = other.head;
	//copy first node, allocate a node
	head = new Node<T>(nodeptr->data);
	previous = head;
	//move to next node
	nodeptr = nodeptr->next;
	//copy remaining list
	while (nodeptr != nullptr)
	{
		//copy this node
		newnode = new Node<T>(nodeptr->data);
		//conncect to previous node
		previous->next = newnode;
		//move to next node
		previous = newnode;
		nodeptr = nodeptr->next;
	}
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList& orig)
{
	copyList(orig);
}


template<typename T>
void LinkedList<T>::append(T val)
{
	//cout << "append" << endl;
	//add a node to the end of the list with val as data
	//declare some pointers
	Node<T>* nodeptr;
	//create new node
	Node<T>* newnode = new Node<T>(val);
	//2 cases
	//empty list, this is now the first node
	if (head == nullptr)
	{
		//make this the first node
		head = newnode;
	}
	else	//non empty list, need to find the end
	{
		//start at beginning
		nodeptr = head;
		//loop until you find nullptr
		while (nodeptr->next != nullptr)
		{
			//move to next node
			nodeptr = nodeptr->next;
		}
		//when loop ends nodeptr is on the last value in list
		//newnode goes after this one
		nodeptr->next = newnode;
	}
}


template<typename T>
void LinkedList<T>::display()
{
	//print data at each node
	Node<T>* nodeptr;
	//start at beginning
	nodeptr = head;
	while (nodeptr)  //nodeptr != nullptr
	{
		cout << nodeptr->data << endl;
		//move to next
		nodeptr = nodeptr->next;
	}
}


template<typename T>
bool LinkedList<T>::deleteval(T val)
{
	//delete first node with val in it
	//return true if delete happens, false if not found
	//declare some pointers
	Node<T>* nodeptr;  //walker
	Node<T>* previous = nullptr;

	//if list is empty do nothing
	if (head == nullptr)
		return false;

	//is it the first node?
	if (head->data == val)
	{
		//delete first node
		//this means second node becomes head, save this value
		nodeptr = head->next;
		//delete first node
		delete head;
		//reset beginning of list
		head = nodeptr;
		return true;
	}
	//search list for val
	nodeptr = head;
	//look for val or end of list
	while (nodeptr != nullptr && nodeptr->data != val)
	{
		//keep looking
		//update previous
		previous = nodeptr;
		//move to next
		nodeptr = nodeptr->next;
	}
	//when the loop ends either it was found or reached end of list
	if (nodeptr == nullptr)
		return false;  //not found
	//nodeptr has the value to delete
	//link around nodeptr
	previous->next = nodeptr->next;
	//delete node
	delete nodeptr;
	return true;

}