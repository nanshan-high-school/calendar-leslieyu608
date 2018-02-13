#include <iostream>

using namespace std;

void spaces(int x) {
	for(int spaces = 1; spaces < x; spaces++) {
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
			cout << "只有12個月好嗎，難不成你是外星人?" << endl;
		}
	}
	monthNo--;
	
	int day;
	cout << "這個月的一號是星期幾:"; 
	cin >> day;
	cout << "--------------------------------" << endl;
	
	cout << "一　二　三　四　五　六　日" << endl;
	spaces(day);
	
	for (int i = 1; i <= month[monthNo]; i++) {
		
		if(day > 7) {
			day = 1; 
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
}