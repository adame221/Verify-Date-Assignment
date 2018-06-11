#include <iostream>
using namespace std;

#pragma once
class VerifyDate {
	private:
		int month;
		int day;
		int year;
		bool IsLeap(int);
	public:
		VerifyDate();
		~VerifyDate();
		VerifyDate(int, int, int);
		int getDay();
		int getMonth();
		int getYear();
		void setDay(int);
		void setMonth(int);
		void setYear(int);
		void PrintDate();
		bool CheckDate();
};

