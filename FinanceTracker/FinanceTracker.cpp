#include "Transaction.h"
#include "TransactionIncome.h"
#include "TransactionExpence.h"
#include <iostream>

int main()
{
	std::vector<int> data = { 1,2,3,4,5,6 };
	TransactionIncome mainTransaction(12.9,"INCOME","yyy",data,"SALARY","hz");
	mainTransaction.Show();
}

