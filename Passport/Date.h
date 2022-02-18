#pragma once
#include <iostream>

class Date
{
private:
	int day;
	int month;
	int year;

public:
	/*SET-GET*/
	void SetDay(int name);
	void SetMonth(int lastname);
	void SetYear(int middlename);
	int GetDay() const;
	int GetMonth() const;
	int GetYear() const;
};