#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	float s = (b - a) / 100.0;
	int h, m;
	h = s / 3600;
	m = (s - h * 3600) / 60;
	s = s - h * 3600 - m * 60;
	float tmp = s - (int)s;
	if (tmp >= 0.5) s++;
	cout << setfill('0') << setw(2) << h << ":"
		<< setfill('0') << setw(2) << m << ":"
		<< setfill('0') << setw(2) << (int)s;
	return 0;
}