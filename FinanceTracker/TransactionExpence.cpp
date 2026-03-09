#include "TransactionExpence.h"

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
	std::cout << "Date: "; ShowCategory();
}


