#pragma once
#include <iostream>
#include <string>
#include "FullName.h"
#include "Date.h"

class Passport
{
private:
	FullName fullname;
	Date birthday;
	Date expiredate;
	bool sex;	//0 - M, 1 - F

public:
	/*CONSTRUCTORS*/
	Passport();
	Passport(std::string name, std::string lastname, std::string middlename);

	/*METHODS*/
	void Print();
};