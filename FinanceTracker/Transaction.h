#pragma once
#include<string>
#include<iostream>
#include <vector>

class Transaction
{
private:

	enum class Type
	{
		INCOME,
		EXPENCE
	};

	struct Time
	{
		int seconds;
		int minutes;
		int hours;
	};

	struct Date
	{
		int day;
		int month;
		int year;
		Time time;
	};


	double amount;
	Type type;
	std::string tag;
	Date date;



public:
	//Getters

	//Получение значения суммы double
	inline double GetAmount();

	//Получение знаяения типа транзакции Transaction::Type
	inline Type GetType() ;

	//Получение типа транзакции строкой 
	std::string GetTypeString(Type);

	//Получение строки описания 
	inline std::string GetTag();

	//Получение структуры даты Transaction::Date
	inline Date GetDate();

	std::string GetDateString(Date data);

	std::string GetTimeString(Date data);


	//Constuctors
	Transaction();
	Transaction(double, std::string,std::string,  std::vector<int>);


	//Setters

	void SetAmount(double _amount);

	void SetType(std::string _type);

	void SetTag(std::string _tag);

	void SetDate(int day, int month, int year, int hours, int minutes, int seconds);



	//Showing
	
	//Вывод типа в консоль
	void ShowType();

	//Вывод даты в консоль
	void ShowDate();

	//Вывод информации о транзакции в консоль
	virtual void Show();

	//Чисто виртуальная функция
	virtual ~Transaction() = 0
	{
		std::cout << "TransactionDestructor";
	}
	
};


