#include "Date.h"

/*SET-GET*/
void Date::SetDay(int day)
{
	this->day = day;
}
void Date::SetMonth(int month)
{
	this->month = month;
}
void Date::SetYear(int year)
{
	this->year = year;
}

int Date::GetDay() const
{
	return day;
}
int Date::GetMonth() const
{
	return month;
}
int Date::GetYear() const
{
	return year;
}