#include <iostream>
#include "Basket of goods.hpp"

int main()
{

	Drinks dr;
	dr.SetType("PEPSI");
	dr.Type_of_Goods();
	dr.SetVolume(1.5);
	dr.Volume();
	dr.SetPrice(25);
	dr.Price();
	dr.Set_Quantity_of_Goods(15);
	dr.Quantity_of_Goods();

	cout << "------------------------------" << endl;


	
	dr.SetType("COLA");
	dr.Type_of_Goods();
	dr.SetVolume(2);
	dr.Volume();
	dr.SetPrice(50);
	dr.Price();
	dr.Set_Quantity_of_Goods(15);
	dr.Quantity_of_Goods();



	cout << endl;
	cout << "------------------------------" << endl;
	cout << endl;

	Weight_Goods wg;
	wg.SetType("FLOUR");
	wg.Type_of_Goods();
	wg.SetWeight(150);
	wg.Weight();
	wg.SetPrice(15);
	wg.Price();
	


	cout << "------------------------------" << endl;

	
	wg.SetType("SUGAR");
	wg.Type_of_Goods();
	wg.SetWeight(100);
	wg.Weight();
	wg.SetPrice(16);
	wg.Price();



	cout << endl;
	cout << "------------------------------" << endl;
	cout << endl;


	

	Non_food_Products Nf;
	Nf.SetType("DOMESTOS");
	Nf.Type_of_Goods();
	Nf.SetPrice(125);
	Nf.Price();
	Nf.Set_Quantity_of_Goods(2);
	Nf.Quantity_of_Goods();

	cout << endl;
	cout << "------------------------------" << endl;
	cout << endl;


	Nf.SetType("SOAP");
	Nf.Type_of_Goods();
	Nf.SetPrice(5);
	Nf.Price();
	Nf.Set_Quantity_of_Goods(20);
	Nf.Quantity_of_Goods();

	cout << endl;
	cout << "------------------------------" << endl;
	cout << endl;
	

	BaseProduct b;
	cout << "The total cost is: " << b.The_total_Cost(wg, dr, Nf) << endl;
	
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl;

	cout << "Printing all data" << endl << endl;
	b.PrintAllData(wg, dr, Nf);
	cout << "The total cost is: " << b.The_total_Cost(wg, dr, Nf) << endl;

}
