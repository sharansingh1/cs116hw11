#pragma once
#include <string>
#include <iostream>
#include "product.h"
using namespace std;

class InvoiceItem : public Product
{
private:
	int quantity;
public:
	//consts
	InvoiceItem();
	InvoiceItem(string, int, int);
	//set and get
	void setQuant(int);
	int getQuant();
	//others
	int getTotal();
	friend ostream& operator<<(ostream&, InvoiceItem);

};