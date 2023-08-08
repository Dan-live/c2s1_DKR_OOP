#include "Basket of goods.hpp"




string BaseProduct::Type_of_Goods() const
{
	return "";
}
double BaseProduct::Price() const
{
	return 0;
}
double BaseProduct::Quantity_of_Goods() const
{
	return 0;
}



///////////////////////////////////////////////////////////////////////////



double BaseProduct::The_total_Cost( Weight_Goods& w_g, Drinks& dr, Non_food_Products& Nf) const
{

	double Cost = w_g.total_price + dr.total_price + Nf.total_price;
	return Cost;
}


void BaseProduct::PrintAllData(Weight_Goods& w_g, Drinks& dr, Non_food_Products& Nf) const
{

	int j = 0;
	

	for (int i = 0; i < w_g.basket_string.Count(); i++)
	{
		cout << "The type is: "             << w_g.basket_string[i] << endl;

		cout << "The weight is: "           << w_g.basket_double[0 + (3 * j)] << endl;
		cout << "The price per kilogram : " << w_g.basket_double[1 + (3 * j)] << endl;
		cout << "Total prise : "            << w_g.basket_double[2 + (3 * j)] << endl;
		j++;
		cout << "------------------------------"<< endl;
	}
	
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

	j = 0;
	for (int i = 0; i < dr.basket_string.Count(); i++)
	{
		cout << "The type is: "				<< dr.basket_string[i] << endl;

		cout << "The volume : "				<< dr.basket_double[0 + (4 * j)] << endl;
		cout << "The price : "				<< dr.basket_double[1 + (4 * j)] << endl;
		cout << "The quantity:  "			<< dr.basket_double[2 + (4 * j)] << endl;
		cout << "Total prise : "			<< dr.basket_double[3 + (4 * j)] << endl;
		j++;
		cout << "------------------------------" << endl;
	}

	cout << "=====================================================================" << endl;
	j = 0;
	for (int i = 0; i < Nf.basket_string.Count(); i++)
	{
		cout << "The type is: "				<< Nf.basket_string[i] << endl;

		cout << "The price : "				<< Nf.basket_double[0 + (3 * j)] << endl;
		cout << "The quantity:  "			<< Nf.basket_double[1 + (3 * j)] << endl;
		cout << "Total prise : "			<< Nf.basket_double[2 + (3 * j)] << endl;
		j++;
		cout << "------------------------------" << endl;
	}

}

