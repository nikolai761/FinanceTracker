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

	template<typename T>
	void SetAmount(T _amount);

	void SetType(std::string _type);

	template<typename T>
	void SetTag(T _tag);

	template<typename T>
	void SetDate(T day, T month, T year, T hours, T minutes, T seconds);



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


