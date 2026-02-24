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

public:

	//Получение значения категории 
	IncomeCategory GetCategory();

	//Вывод значения категории транзакции
	void ShowCategory();

	void Show() override;

};

