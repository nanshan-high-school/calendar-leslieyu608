#include <iostream>

using namespace std;

void spaces(char x) {
	if(x > '6') {
		x = '0';
	}
	
	for(char spaces = '0'; spaces < x; spaces++) {
		cout <<  "    ";
	}
}

int main()
{
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31}, monthNo = 0;
	while (monthNo < 1 || monthNo > 12) {
		cout << "請輸入幾月:";
		cin >> monthNo;
		
		if (monthNo < 1 || monthNo > 12) {
			cout << "一年只有12個月好嗎，難不成你是外星人?" << endl;
		}
	}
	monthNo--;
	
	char day = '7';
	while (day < '0' || day > '6') {
		cout << "此月的1號是星期幾(星期天是0):";
		cin >> day;
		
		if (day < '0' || day > '6') {
			cout << "一星期只有7天好嗎，難不成你是外星人?" << endl;
		}
	}
	
	cout << "--------------------------" << endl;
	
	for (; monthNo < 12; monthNo++) {
		if (monthNo+1 > 9) {
			cout << "    ";
		} else {
			cout << "     ";
		}
		cout << monthNo+1 << "　月　份　月　曆" << endl;
		cout << "日　一　二　三　四　五　六" << endl;
		spaces(day);
		
		if(day > '6') {
			day = '0';
		}
		
		for (int i = 1; i <= month[monthNo]; i++) {
			if(day > '6') {
				day = '0';
				cout << endl;
			}
			day++;
			
			if (i < 10) {
				cout << " " << i;
			} else {
				cout << i;
			}
			
			cout << "  ";
		}
		
		cout << endl << "--------------------------" << endl;
	}
}