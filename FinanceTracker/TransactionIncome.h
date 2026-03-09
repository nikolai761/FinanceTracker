#pragma once
#include "Transaction.h"
class TransactionIncome : public Transaction
{
private:

	enum class IncomeCategory
	{
		SALARY,
		CASHBACK,
		TRANSFER
	};

	IncomeCategory category;

	std::string source;

public:

	//Получение значения категории 
	inline IncomeCategory GetCategory();

	//Получение значения источника
	inline std::string GetSource();

	//Вывод значения категории транзакции
	void ShowCategory();

	//Вывод значения источника
	void ShowSource();

	//Вывод всей информации о транзакции Перегруженный метод
	void Show() override;

};

