#include "ForeignPassport.h"

/*CONSTRUCTORS*/
ForeignPassport::ForeignPassport()
{
	SetRegNum("00000457");
	SetPlaceOfIssue("ODESSA");
}
ForeignPassport::ForeignPassport(std::string reg_num, std::string placeofissue)
{
	SetRegNum(reg_num);
	SetPlaceOfIssue(placeofissue);
}

/*METHODS*/
void ForeignPassport::Print()
{
	Passport::Print();
	std::cout << "Registration number: " << GetRegNum() << "\n";
	std::cout << "Place of issue: " << GetPlaceOfIssue() << "\n";
	std::cout << "====================================\n";
}

/*SET-GET*/
void ForeignPassport::SetRegNum(std::string other)
{
	reg_num = other;
}
void ForeignPassport::SetPlaceOfIssue(std::string other)
{
	placeofissue = other;
}
std::string ForeignPassport::GetRegNum() const
{
	return reg_num;
}
std::string ForeignPassport::GetPlaceOfIssue() const
{
	return placeofissue;
}