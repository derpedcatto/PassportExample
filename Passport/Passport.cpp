#include "Passport.h"

/*CONSTRUCTORS*/
Passport::Passport()
{
	fullname.SetName("Alexander");
	fullname.SetLastName("Vannovskiy");
	fullname.SetMiddleName("Alexandrovich");
	birthday.SetYear(2002);
	birthday.SetMonth(12);
	birthday.SetDay(27);
	expiredate.SetYear(2022);
	expiredate.SetMonth(2);
	expiredate.SetDay(3);
	sex = 0;
}
Passport::Passport(std::string name, std::string lastname, std::string middlename) : Passport()
{
	fullname.SetName(name);
	fullname.SetLastName(lastname);
	fullname.SetMiddleName(middlename);
}

/*METHODS*/
void Passport::Print()
{
	std::cout << "====================================\n";
	std::cout << "Name: " << fullname.GetName() << "\n";
	std::cout << "Last name: " << fullname.GetLastName() << "\n";
	std::cout << "Middle name: " << fullname.GetMiddleName() << "\n";
	std::cout << "Sex: ";
	if (sex)
		std::cout << "F";
	else
		std::cout << "M";
	std::cout << "\n";
	std::cout << "------------------------------------\n";
	printf("Birthday: %d.%d.%d\n", birthday.GetYear(), birthday.GetMonth(), birthday.GetDay());
	std::cout << "------------------------------------\n";
	printf("Expire date: %d.%d.%d\n", expiredate.GetYear(), expiredate.GetMonth(), expiredate.GetDay());
	std::cout << "====================================\n";
}