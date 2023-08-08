#include "Basket of goods.hpp"



string Drinks::GetType()
{
	return type;
}

void Drinks::SetType(string type)
{
	this->type = type;
	basket_string.Add(type);
}

string Drinks::Type_of_Goods() const
{

	cout << "The type is: " << type << endl;
	return type;
}

///////////////////////////////////////////////////////////////////////////


double Drinks::GetPrice()
{
	return price;
}

void Drinks::SetPrice(double price)
{
	//this->total_price += price;
	this->price = price;
	basket_double.Add(price);
}

double Drinks::Price() const
{


	cout << "The price : " << price << " UAH" << endl;
	return price;
}



///////////////////////////////////////////////////////////////////////////

double Drinks::Get_Quantity_of_Goods()
{
	return quantity;
}

void Drinks::Set_Quantity_of_Goods(double quantity)
{
	this->quantity = quantity;
	this->quantity_price = quantity * this->price;
	this->total_price += this->quantity_price;

	basket_double.Add(quantity);
	basket_double.Add(quantity_price);


}

double Drinks::Quantity_of_Goods() const
{


	cout << "The quantity: " << quantity << endl;
	cout << "Total prise : " << quantity_price << " UAH" << endl;
	return quantity;
}

///////////////////////////////////////////////////////////////////////////


double Drinks::GetVolume()
{
	return volume;
}

void Drinks::SetVolume(double volume)
{
	this->volume = volume;
	basket_double.Add(volume);
}

double Drinks::Volume() const
{

	cout << "The volume : " << volume << endl;
	return volume;
}


