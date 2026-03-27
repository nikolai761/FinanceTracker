#include "TransactionExpence.h"

TransactionExpence::TransactionExpence()
{
	std::cout << "ky";
}

inline  TransactionExpence::ExpenceCategory TransactionExpence::GetCategory()
{
	return category;
}

void TransactionExpence::ShowCategory()
{
	switch (category)
	{
	case  ExpenceCategory::FOOD: {std::cout << "SALARY"; break;}
	case  ExpenceCategory::CLOSES: {std::cout << "CASHBACK"; break;}
	case  ExpenceCategory::HOME: {std::cout << "TRANSFER"; break;}
	}
}

void TransactionExpence::Show()
{
	Transaction::Show();
	std::cout << "Category: "; ShowCategory();
}

void TransactionExpence::SetCategory(std::string _category)
{
	if (_category == "FOOD") category = ExpenceCategory::FOOD;
	else if (_category == "CLOSES") category == ExpenceCategory::CLOSES;
	else if (_category == "HOME") category == ExpenceCategory::HOME;
	else std::cout << "Input error. Enter valid type";
	
}


