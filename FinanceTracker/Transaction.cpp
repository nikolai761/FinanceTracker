#include "Transaction.h"


double Transaction::GetAmount()
{
	return this->amount;
}

Transaction::Type Transaction::GetType()
{
	return this->type;
}

std::string Transaction::GetTag()
{
	return this->tag;
}

Transaction::Date Transaction::GetDate()
{
	return this->date;
}

void Transaction::ShowType()
{
	switch (type)
	{
	case  Type::EXPENCE: {std::cout << "EXPENCE"; break;}
	case  Type::INCOME: {std::cout << "INCOME"; break;}
	}
}

void Transaction::ShowDate()
{
	std::cout << date.day << "." << date.month <<"."<< date.year<<std::endl;
	std::cout << date.time.hours << ":" << date.time.minutes << ":" << date.time.seconds << std::endl;
}

void Transaction::Show()
{
	    std::cout << "***************************************\n";
		std::cout << "Amount: " << amount << std::endl;
		std::cout << "Description: " << tag << std::endl;
		std::cout << "Type: "; ShowType(); std::cout << std::endl;
		std::cout << "Date: "; ShowDate(); std::cout << std::endl;

}

