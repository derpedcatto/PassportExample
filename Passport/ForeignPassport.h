#pragma once
#include <iostream>
#include <string>
#include "Passport.h"
#include "Date.h"

class ForeignPassport : public Passport
{
private:	
	std::string reg_num;
	std::string placeofissue;

public:
	/*CONSTRUCTORS*/
	ForeignPassport();
	ForeignPassport(std::string reg_num, std::string placeofissue);

	/*METHODS*/
	void Print();

	/*SET-GET*/
	void SetRegNum(std::string other);
	void SetPlaceOfIssue(std::string other);
	std::string GetRegNum() const;
	std::string GetPlaceOfIssue() const;
};