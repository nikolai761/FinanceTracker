#include "Transaction.h"


inline double Transaction::GetAmount()
{
	return this->amount;
}

inline Transaction::Type Transaction::GetType()
{
	return this->type;
}

inline std::string Transaction::GetTag()
{
	return this->tag;
}

inline Transaction::Date Transaction::GetDate()
{
	return this->date;
}

Transaction::Transaction()
{

}

Transaction::Transaction(double _amount, std::string _type, std::string _tag, std::vector<int> date)
{
	SetAmount(_amount);
	SetType(_type);
	SetTag(_tag);
	SetDate(date[0], date[1], date[2], date[3], date[4], date[5]);
}

void Transaction::ShowType()
{
	switch (type)
	{
	case  Type::EXPENCE: {std::cout << "EXPENCE\n"; break;}
	case  Type::INCOME: {std::cout << "INCOME\n"; break;}
	}
}

void Transaction::ShowDate()
{
	std::cout << date.day << "." << date.month <<"."<< date.year<<std::endl;
	std::cout <<"Time: "<< date.time.hours << ":" << date.time.minutes << ":" << date.time.seconds << std::endl;
}

void Transaction::Show()
{
	    std::cout << "***************************************\n";
		std::cout << "Amount: " << amount << std::endl;
		std::cout << "Description: " << tag << std::endl;
		std::cout << "Type: "; ShowType(); 
		std::cout << "Date: "; ShowDate();

}

inline void Transaction::SetAmount(double _amount)
{
	amount =static_cast<double>(_amount);
}


void Transaction::SetType(std::string _type)
{
	if (_type == "INCOME") type = Type::INCOME;
	else if (_type == "EXPENCE") type == Type::EXPENCE;
	else std::cout << "Input error. Enter valid type";
}

void Transaction::SetTag(std::string _tag)
{
	tag = _tag;
}

void Transaction::SetDate(int _day, int _month, int _year, int _hours, int _minutes, int _seconds)
{
	date.day = _day;
	date.month = _month;
	date.year = _year;
	date.time.hours = _hours;
	date.time.minutes = _minutes;
	date.time.seconds = _seconds;
}



