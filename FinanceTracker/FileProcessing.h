#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include"Transaction.h"



class FileProcessing
{
private:

	std::string filename;
	std::fstream file;
	bool isOpen;

public:

	FileProcessing() : isOpen(false) {};
	explicit FileProcessing(std::string name)
	{
		filename = name;
		isOpen = (false);
	}

	~FileProcessing()
	{
		file.close();
	}

	bool open(const std::string& name, std::ios::openmode mode = std::ios::in)
	{
		close();
		filename = name;
		file.open(filename, mode);
		isOpen = file.is_open();
		return isOpen;
	}

	void close()
	{
		if (isOpen)
		{
			file.close();
			isOpen = false;
		}
	}

	bool GetOpen()
	{
		return isOpen;
	}

	bool writeLine(const std::string& line) {
		if (!isOpen || !(file.is_open())) {
			return false;
		}
		file << line << "\n" << std::endl;
		return !file.fail();
	}

	bool writeTransaction(Transaction* transaction)
	{
		if (!isOpen || !(file.is_open())) {
			return false;
		}
		file << "Amount : " << transaction->GetAmount()<<std::endl;
		file << "Type of transaction : " << transaction->GetTypeString(transaction->GetType()) << std::endl;
		file << "Description : " << transaction->GetTag() << std::endl;
		file << "Date : " << transaction->GetDateString(transaction->GetDate()) << std::endl
	}


};

