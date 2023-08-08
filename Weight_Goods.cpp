#include "Basket of goods.hpp"



string Weight_Goods::GetType()
{
	return type;
}

void Weight_Goods::SetType(string type)
{
	this->type = type;
	basket_string.Add(type);
	
}

string Weight_Goods::Type_of_Goods() const
{

	cout << "The type is: " << type << endl;
	return type;
}

///////////////////////////////////////////////////////////////////////////



double Weight_Goods::GetWeight()
{
	return weight;
}

void Weight_Goods::SetWeight(double weight)
{
	this->weight = weight;
	basket_double.Add(weight);
}

double Weight_Goods::Weight() const
{

	cout << "The weight is: " << weight << endl;
	return weight;
}

///////////////////////////////////////////////////////////////////////////



double Weight_Goods::GetPrice()
{
	return price_per_kilogram;
}

void Weight_Goods::SetPrice(double price)
{

	this->price_per_kilogram = price;
	this->quantity++;
	this->quantity_price = weight * this->price_per_kilogram;
	this->total_price += this->quantity_price;

	basket_double.Add(price);
	basket_double.Add(quantity_price);

}

double Weight_Goods::Price() const
{


	cout << "The price per kilogram : " << price_per_kilogram << " UAH" << endl;
	cout << "Total prise : " << quantity_price << " UAH" << endl;
	return price_per_kilogram;
}

///////////////////////////////////////////////////////////////////////////



//double Weight_Goods::Get_Quantity_of_Goods()
//{
//	return quantity;
//}
//
//void Weight_Goods::Set_Quantity_of_Goods(double quantity)
//{
//	this->quantity = quantity;
//	this->quantity_price = quantity * this->price_per_kilogram;
//	this->total_price += this->quantity_price;
//	
//}
//
//double Weight_Goods::Quantity_of_Goods() const
//{
//	Basket<double> basket;
//	int i = basket.Add();
//	basket[i] = quantity;
//
//	cout << "The quantity: " << basket[i]  << endl;
//	return quantity;
//}




//auto Weight_Goods::Weight() const
//{
//	//Basket<char, 5> c(flour);
//}
