#pragma once
#include "Transaction.h"
class TransactionExpence :public Transaction
{
private:

	enum class ExpenceCategory
	{
		FOOD,
		CLOSES,
		HOME
	};


	ExpenceCategory category;



public:

	//Конструкторы
	TransactionExpence();
	TransactionExpence(double _amount, std::string _type, std::string _tag, std::vector<int>_date, std::string _category) :Transaction(_amount, _type, _tag, _date)
	{
		SetType(_type);
		SetCategory(_category);
	};

	//Получение значения категории 
	inline ExpenceCategory GetCategory();


	//Вывод значения категории транзакции
	void ShowCategory();


	//Вывод всей информации о транзакции Перегруженный метод
	void Show() override;

	
	//Ввод категории
	void SetCategory(std::string _category);

};

