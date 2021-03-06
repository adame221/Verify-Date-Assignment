// VerifyDateFunctions.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "VerifyDate.h"
using namespace std;
int main() {
	int day, month, year;
	cout << "Enter a month (eg. 04): ";
	cin >> month;
	cout << "Enter a day (eg. 09): ";
	cin >> day;
	cout << "Enter a year (eg. 2018): ";
	cin >> year;
	cout << endl;

	VerifyDate date(day, month, year);

	if (date.CheckDate()) {
		date.PrintDate();
		cout << " is a valid date." << endl;
	}
	else {
		date.PrintDate();
		cout << " is an invalid date." << endl;
	}
}

