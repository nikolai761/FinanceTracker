#include "TransactionIncome.h"

inline TransactionIncome::IncomeCategory TransactionIncome::GetCategory()
{
    return category;
}

inline std::string TransactionIncome::GetSource()
{
	return this->source;
}

void TransactionIncome::ShowCategory()
{

	switch (category)
	{
	case  IncomeCategory::SALARY : {std::cout << "SALARY\n"; break;}
	case  IncomeCategory::CASHBACK: {std::cout << "CASHBACK\n"; break;}
	case  IncomeCategory::TRANSFER: {std::cout << "TRANSFER\n"; break;}
	}
}

void TransactionIncome::ShowSource()
{
	std::cout << "Source: " << source << std::endl;
}

void TransactionIncome::Show()
{
	Transaction::Show();
	std::cout << "Category: "; TransactionIncome::ShowCategory(); 
	std::cout << "Source: "; TransactionIncome::ShowSource();
	std::cout << "***************************************\n";
}
