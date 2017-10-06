#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	double x, y;
	char operation;
	bool f = true;
	string stroka;
	
	getline(cin, stroka);
	istringstream stream(stroka);
	stream >> x;
	while (stream >> operation) {
		stream >> y;
		if (operation == '+') {
			x += y;
		}
		if (operation == '-') {
			x -= y;
		}
		if (operation == '*') {
			x = x*y;
		}
		if (operation == '/') {
			if (y != 0) {
				x = x / y;
			}
			else {
				cout << "Error" << endl;
				f = false;
				return -1;
			}
		}
	}
	if (f) {
		cout << x << endl;
		return 0;
	}
}



