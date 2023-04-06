#pragma once
#include <string>
#include <iostream>
using namespace std;

//node class
class Product
{
private:
	string description;
	int price;
public:
	//contructors
	Product();
	Product(string, int);
	//set and get
	void setDesc(string);
	void setPrice(int);
	string getDesc();
	int getPrice();

};