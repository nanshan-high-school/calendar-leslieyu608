#include <iostream>

using namespace std;

void cal_table(int a) {
	if (a+1 > 9) {
		cout << "    ";
	} else {
		cout << "     ";
	}
	cout << a+1 << "　月　份　月　曆" << endl;
	cout << "日　一　二　三　四　五　六" << endl;
}

void spaces(int b) {
	if(b > 6) {
		b = 0;
	}
	
	for(int spaces = 0; spaces < b; spaces++) {
		cout <<  "    ";
	}
}

void corr(int c) {
	if(c > 6) {
		c = 0;
	}
}

void date_spaces(int d) {
	if (d < 10) {
		cout << " " << d;
	} else {
		cout << d;
	}
}

int main()
{
	int year = -46, month[12] = {31,28,31,30,31,30,31,31,30,31,30,31}, monthNo = 0;
	
	while (year < -45) {
		cout << "請輸入西元幾年:";
		cin >> year;
		
		if (year < -45) {
			cout << "回去讀歷史!" << endl;
		} else if (year%400 == 0) {
			month[1] = 29;
		} else if (year%100 == 0) {
			month[1] = 28;
		} else if (year%4 == 0) {
			month[1] = 29;
		} else {
			month[1] = 28;
		}
	}
	
	year--;
	cout << year << endl;
	int day, w, century = year/100;
	year = year%100;
	w = year+(year/4)+(century/4)-(century*2)+36;
	day = w%7;
	
	cout << "--------------------------" << endl;
	for (; monthNo < 12; monthNo++) {
		cal_table(monthNo);
		spaces(day);
		corr(day);
		
		for (int i = 1; i <= month[monthNo]; i++) {
			if(day > 6) {
				day = 0;
				cout << endl;
			}
			day++;
			date_spaces(i);
			cout << "  ";
		}
		
		cout << endl << "--------------------------" << endl;
	}
}