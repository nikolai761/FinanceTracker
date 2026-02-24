#include "TransactionIncome.h"

TransactionIncome::IncomeCategory TransactionIncome::GetCategory()
{
    return category;
}

void TransactionIncome::ShowCategory()
{

	switch (category)
	{
	case  IncomeCategory::SALARY : {std::cout << "SALARY"; break;}
	case  IncomeCategory::CASHBACK: {std::cout << "CASHBACK"; break;}
	case  IncomeCategory::TRANSFER: {std::cout << "TRANSFER"; break;}
	}
}

void TransactionIncome::Show()
{
	std::cout << "Category: "; ShowCategory(); std::cout << std::endl;
}
