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

	//Получение значения категории 
	inline ExpenceCategory GetCategory();


	//Вывод значения категории транзакции
	void ShowCategory();


	//Вывод всей информации о транзакции Перегруженный метод
	void Show() override;

	
	//Ввод категории
	void SetCatogory(std::string _category);

};

