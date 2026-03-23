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
	//Getters

	//Получение значения суммы double
	inline double GetAmount();

	//Получение знаяения типа транзакции Transaction::Type
	inline Type GetType() ;

	//Получение строки описания 
	inline std::string GetTag();

	//Получение структуры даты Transaction::Date
	inline Date GetDate();



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
	virtual void getCategory() = 0;
	
};


