#include "stdafx.h"
#include <iostream>
#include "VerifyDate.h"

using namespace std;

VerifyDate::VerifyDate() {
	day = 1;
	month = 1;
	year = 2000;
}

VerifyDate::~VerifyDate()
{
}

VerifyDate::VerifyDate(int dayParam, int monthParam, int yearParam) {
	day = dayParam;
	month = monthParam;
	year = yearParam;
}

int VerifyDate::getDay() {
	return day;
}

int VerifyDate::getMonth() {
	return month;
}

int VerifyDate::getYear() {
	return year;
}

void VerifyDate::setDay(int dayParam) {
	day = dayParam;
}

void VerifyDate::setMonth(int monthParam) {
	month = monthParam;
}

void VerifyDate::setYear(int yearParam) {
	year = yearParam;
}

void VerifyDate::PrintDate() {
	cout << month << "/" << day << "/" << year;
}

bool VerifyDate::IsLeap(int y) {
	return ((!(year % 4) && year % 100) || !(year % 400));
}

bool VerifyDate::CheckDate() {
	int numOfDays;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		numOfDays = 31;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		numOfDays = 30;
	}
	if (month == 2) {
		if (IsLeap(year)) {
			numOfDays = 29;
		}
		else {
			numOfDays = 28;
		}
	}
	if (month < 1 || month > 12) {
		return false;
	} else if (day <= 0 || day > numOfDays) {
		return false;
	} else if (year < 1850 || year > 2100) {
		return false;
	}
	return true;
}
