#include "invoiceitem.h"

InvoiceItem::InvoiceItem()
{
	description = "none";
	price = 0;
	quantity = 0;
}

InvoiceItem::InvoiceItem(string d, int p, int q)
{
	description = d;
	price = p;
	quantity = q;
}

void InvoiceItem::setQuant(int q)
{
	quantity = q;
}

int InvoiceItem::getQuant()
{
	return quantity;
}

int InvoiceItem::getTotal()
{
	return quantity * price;
}

ostream& operator<<(ostream& out, InvoiceItem other)
{
	out << other.quantity << " " << other.description << " at " << other.price << " each " << endl;
	return out;
}
