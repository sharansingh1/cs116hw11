#pragma once
#include <string>
#include <iostream>
#include "linkedlist.h"
#include"invoiceitem.h"
using namespace std;

class Order : public LinkedList<InvoiceItem>
{
private:
	string name;
	int ordnum;
	static int nextnum;
	int total;
public:
	//sets and gets
	void setName(string);
	void setOrdnum(int);
	string getName();
	int getOrdNum();
	//others
	void DisplayInvoice();
};