#pragma once
#include <iostream>
#include <string>

class FullName
{
private:
	std::string name;
	std::string lastname;
	std::string middlename;

public:
	/*SET-GET*/
	void SetName(std::string name);
	void SetLastName(std::string lastname);
	void SetMiddleName(std::string middlename);
	std::string GetName() const;
	std::string GetLastName() const;
	std::string GetMiddleName() const;
};