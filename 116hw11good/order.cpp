#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "linkedList.h"
#include "product.h"
#include "invoiceitem.h"
#include "order.h"

//create static variable
int Order::nextnum = 1001;

void Order::setName(string n)
{
	name = n;
}

void Order::setOrdnum(int o)
{
	ordnum = o;
}

string Order::getName()
{
	return name;
}

int Order::getOrdNum()
{
	return ordnum;
}

void Order::DisplayInvoice()
{
	//show info
	cout << "Customer name: " << name << endl;
	cout << "Order number: " << ordnum << endl;
	cout << "\n" << "Qty" << "\t" << "Description" << "\t" << "Each" << "\t" << "Item total" << endl;

	//print data at each node
	Node<InvoiceItem>* nodeptr;
	// start at head
	nodeptr = head;
	while (nodeptr)  //nodeptr != nullptr
	{
		//print the values
		//cout << nodeptr->data << endl;
		cout << nodeptr->data.getQuant() << "\t" << nodeptr->data.getDesc() << "    \t" << nodeptr->data.getPrice() << "\t" << nodeptr->data.getTotal() << endl;


		//use iterator and get total
		total += nodeptr->data.getTotal();

		//move to next
		nodeptr = nodeptr->next;
	}

}
