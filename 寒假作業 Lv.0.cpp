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
	char day = '7';
	while (day < '0' || day > '6') {
		cout << "這禮拜的1號是星期幾(星期天是0):";
		cin >> day;
		
		if (day < '0' || day > '6') {
			cout << "一星期只有7天好嗎，難不成你是外星人?" << endl;
		}
	}
	
	cout << "--------------------------" << endl;
	cout << "日　一　二　三　四　五　六" << endl;
	spaces(day);
	
	for (int i = 1; i <= '7'-day; i++) {
		cout << " " << i;
		cout << "  ";
	}
	cout << endl << "--------------------------" << endl;
}