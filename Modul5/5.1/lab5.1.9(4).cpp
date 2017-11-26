#include <iostream>
#include <string>
using namespace std;
class ShopItemOrder
{
private:
	string name;
	double unitPrice;
	int numItems;
	double totalPrice;
	bool isChange;
public:
	ShopItemOrder(string name, double unitPrice, int numItems);
	void set_name(string name);
	void set_unitPrice(double unitPrice);
	void set_numItems(int numItems);
	string get_name();
	double get_unitPrice();
	int get_numItems();
	double get_totalPrice();
	void print();
};
ShopItemOrder::ShopItemOrder(string name, double unitPrice, int numItems)
{
	this->name = name;
	this->numItems = numItems;
	this->unitPrice = unitPrice;
	this->totalPrice = unitPrice*numItems;
}
string ShopItemOrder::get_name()
{
	return ShopItemOrder::name;
}
double ShopItemOrder::get_unitPrice()
{
	return ShopItemOrder::unitPrice;
}
int ShopItemOrder::get_numItems()
{
	return ShopItemOrder::numItems;
}
double ShopItemOrder::get_totalPrice()
{
	if (ShopItemOrder::isChange)
	{
		ShopItemOrder::isChange = false;
		ShopItemOrder::totalPrice = ShopItemOrder::numItems*ShopItemOrder::unitPrice;
	}
	return ShopItemOrder::totalPrice;
}
void ShopItemOrder::set_name(string name)
{
	if (name != "")
		ShopItemOrder::name = name;
}
void ShopItemOrder::set_numItems(int numItems)
{
	if (numItems < 0)
		return;
	ShopItemOrder::numItems = numItems;
	ShopItemOrder::isChange = true;
}
void ShopItemOrder::set_unitPrice(double unitPrice)
{
	if (unitPrice < 0)
		return;
	ShopItemOrder::unitPrice = unitPrice;
	ShopItemOrder::isChange = true;
}
void ShopItemOrder::print()
{
	cout << "Order: " << this->name << "\nnumItems = " << this->numItems << "\nunitPrice = " << this->unitPrice << "\ntotal price = " << this->get_totalPrice() << endl;
}
int main()
{
	ShopItemOrder s("ORDER", 6, 4);
	s.print();
	return 0;
}