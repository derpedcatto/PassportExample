#include "FullName.h"

/*SET-GET*/
void FullName::SetName(std::string name)
{
	this->name = name;
}
void FullName::SetLastName(std::string lastname)
{
	this->lastname = lastname;
}
void FullName::SetMiddleName(std::string middlename)
{
	this->middlename = middlename;
}

std::string FullName::GetName() const
{
	return name;
}
std::string FullName::GetLastName() const
{
	return lastname;
}
std::string FullName::GetMiddleName() const
{
	return middlename;
}