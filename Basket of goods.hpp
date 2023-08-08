#ifndef BASKET
#define BASKET
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BaseProduct;
class Weight_Goods;
class Drinks;
class Non_food_Products;


template<typename T>
class Basket
{
private:
	vector<T> myVector;

public:

	void Add(T elem)
	{
		myVector.push_back(elem);

	}


	T* GetAddress(int ItemKey)
	{
		return &(myVector[ItemKey]);
	}

	void Remove()
	{

		myVector.pop_back();
	}

	void Clear(void) //Clear the collection
	{
		myVector.clear();
	}

	int Count(void)
	{
		return myVector.size(); //One Based
	}

	T& operator[](int index)
	{
		return myVector[index];
	}

};




class BaseProduct
{

public:
	Basket<string> basket_string;
	Basket<double> basket_double;


	BaseProduct() {};
	

	virtual double Quantity_of_Goods() const;
	double The_total_Cost( Weight_Goods & w_g , Drinks & dr, Non_food_Products& Nf) const;
	virtual string Type_of_Goods() const ;
	virtual void PrintAllData(Weight_Goods& w_g, Drinks& dr, Non_food_Products& Nf) const ;
	virtual double Price() const;


	

private:
	

};


class Weight_Goods :public BaseProduct
{

	friend BaseProduct;

public:


	
	
	string GetType();
	
	void SetType(string type);
	string Type_of_Goods() const override;
	//////////////////////////////////////////////////////

	double GetPrice();
	void SetPrice(double price);
	double Price() const override;
	 
	//////////////////////////////////////////////////////

	double GetWeight();
	void SetWeight(double weight);
	double Weight() const;
	

	

private:

	double price_per_kilogram;
	double quantity = 0;
	double quantity_price = 0;
	double total_price = 0 ;
	double weight;

	string type;
};




class Drinks : public BaseProduct
{

	friend BaseProduct;

public:
	


	string GetType();
	void SetType(string type);
	string Type_of_Goods() const override;
	//////////////////////////////////////////////////////

	double GetPrice();
	void SetPrice(double price);
	double Price() const override;
	//////////////////////////////////////////////////////

	double Get_Quantity_of_Goods();
	void Set_Quantity_of_Goods(double price);
	double Quantity_of_Goods() const override;
	//////////////////////////////////////////////////////

	double GetVolume();
	void SetVolume(double price);
	double Volume() const ;

private:

	double volume;
	double price;
	double quantity;
	double quantity_price = 0;
	double total_price = 0;
	string type;
};

class Non_food_Products : public BaseProduct
{
	friend BaseProduct;

public:
	string GetType();

	void SetType(string type);
	string Type_of_Goods() const override;
	//////////////////////////////////////////////////////

	double GetPrice();
	void SetPrice(double price);
	double Price() const override;
	//////////////////////////////////////////////////////

	double Get_Quantity_of_Goods();
	void Set_Quantity_of_Goods(double price);
	double Quantity_of_Goods() const override;

private:
	double price;
	double quantity;
	double quantity_price = 0;
	double total_price = 0;
	string type;
};


#endif