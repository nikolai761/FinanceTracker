#pragma once
#include<string>
#include<iostream>

class Transaction
{
private:

	enum class Type
	{
		INCOME,
		EXPENCE
	};

	enum class ExpenceCategory
	{
		FOOD,
		CLOSES,
		HOME
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
	//ExpenceCategory expence;
	std::string tag;
	Date date;

public:

	//Получение значения суммы double
	double GetAmount();

	//Получение знаяения типа транзакции Transaction::Type
	Type GetType();

	//Получение строки описания 
	std::string GetTag();

	//Получение структуры даты Transaction::Date
	Date GetDate();

	//Вывод типа в консоль
	void ShowType();

	//Вывод даты в консоль
	void ShowDate();

	//Вывод информации о транзакции в консоль
	virtual void Show();

	//Чисто виртуальная функция
	virtual void getCategory() = 0;
	
};

