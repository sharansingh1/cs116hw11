#include "product.h"

Product::Product()
{
	description = "none";
	price = 0;
}

Product::Product(string d, int p)
{
	description = d;
	price = p;
}

void Product::setDesc(string d)
{
	description = d;
}

void Product::setPrice(int p)
{
	price = p;
}

string Product::getDesc()
{
	return description;
}

int Product::getPrice()
{
	return price;
}
