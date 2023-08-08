#include "Basket of goods.hpp"




string Non_food_Products::GetType()
{
	return type;
}

void Non_food_Products::SetType(string type)
{
	this->type = type;
	basket_string.Add(type);
}

string Non_food_Products::Type_of_Goods() const
{
	cout << "The type is: " << type << endl;


	return type;
}

///////////////////////////////////////////////////////////////////////////


double Non_food_Products::GetPrice()
{
	return price;
}

void Non_food_Products::SetPrice(double price)
{
	this->price = price;
	basket_double.Add(price);
}

double Non_food_Products::Price() const
{
	cout << "The price : " << price << " UAH" << endl;
	return price;
}




///////////////////////////////////////////////////////////////////////////


double Non_food_Products::Get_Quantity_of_Goods()
{
	return quantity;
}

void Non_food_Products::Set_Quantity_of_Goods(double quantity)
{
	this->quantity = quantity;
	this->quantity_price = quantity * this->price;
	this->total_price += this->quantity_price;

	basket_double.Add(quantity);
	basket_double.Add(quantity_price);
}

double Non_food_Products::Quantity_of_Goods() const
{
	cout << "The quantity: " << quantity << endl;
	cout << "Total prise : " << quantity_price << " UAH" << endl;
	return quantity;
}
