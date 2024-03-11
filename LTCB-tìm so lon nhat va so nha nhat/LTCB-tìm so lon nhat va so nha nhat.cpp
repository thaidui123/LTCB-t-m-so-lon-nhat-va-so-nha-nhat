// LTCB-tìm so lon nhat va so nha nhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	int a, b, c, max;
	cout << "nhap a=";
	cin >> a;
	cout << "nhap b=";
	cin >> b;
	cout << "nhap c=";
	cin >> c;
	max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	cout << "so lon nhat trong 3 so " << a << " , " << c << "la" << max;
	return 0;
}
