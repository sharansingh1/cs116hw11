#include "stringlist.h"
#include "linkedlist.h"
#include <iostream>
#include "product.h"
#include "order.h"
#include"invoiceitem.h"
using namespace std;

int main()
{
	Order test;
	test.setName("zayn");
	test.append(InvoiceItem("sword", 50, 3));
	test.append(InvoiceItem("shield", 100, 1));
	test.append(InvoiceItem("chain shirt", 115, 2));
	test.DisplayInvoice();
	/*
	Order receipt1;
	receipt1.setName("Jane Doe");
	receipt1.append(InvoiceItem("sword", 50, 3));
	receipt1.append(InvoiceItem("shield", 100, 1));
	receipt1.DisplayInvoice();


	//STEP 4
	LinkedList<InvoiceItem> cart;
	cart.append(InvoiceItem("sword", 50, 3));
	cart.append(InvoiceItem("shield", 100, 1));
	cart.append(InvoiceItem("chain shirt", 115, 2));
	cart.display();

	Order test;
	test.setName("zayn");
	test.setOrdnum(123);
	cout << test.getName() << endl;
	cout << test.getOrdNum() << endl;
	test.DisplayInvoice();

	/*
	//InvoiceItem test;
	InvoiceItem test("Chips", 4, 5);

	cout << test.getDesc() << endl;
	cout << test.getPrice() << endl;
	cout << test.getQuant() << endl;
	cout << test.getTotal() << endl;
	cout << test;

	/*
	Product test;
	cout << test.getDesc() << endl;
	cout << test.getPrice() << endl;

	Product test2("Coca Cola", 3);
	cout << test2.getDesc() << endl;
	cout << test2.getPrice() << endl;

	Product test;
	test.setDesc("water");
	test.setPrice(3);
	cout << test.getDesc() << endl;
	cout << test.getPrice() << endl;
	*/


	/*
	// Linked List test
	LinkedList<double> colors;
	colors.insert(1);
	colors.insert(30);
	colors.insert(23);
	colors.insert(7);
	colors.display();
	//should display blue, green, pink, red, one on each line
	cout << endl;
	colors.deleteval(7);
	colors.display();
	//should display blue, pink, red

	/*
	LinkedList<string> colors;
	colors.insert("red");
	colors.insert("blue");
	colors.insert("pink");
	colors.insert("green");
	colors.display();
	//should display blue, green, pink, red, one on each line
	cout << endl;
	colors.deleteval("green");
	colors.display();
	//should display blue, pink, red
	*/





	/*
	StringList colors;
	colors.insert("red");
	colors.insert("blue");
	colors.insert("pink");
	colors.insert("green");
	colors.display();
	//should display blue, green, pink, red, one on each line
	cout << endl;
	colors.deleteval("green");
	colors.display();
	//should display blue, pink, red
	*/
}

