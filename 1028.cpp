#include <iostream>
#include <string>
using namespace std;

struct Person {
	string name;
	int year;
	int month;
	int day;
};

bool legal(Person &p) {
	if (p.year < 1814 || p.year > 2014) return false;
	else if (p.year == 1814 && p.month < 9) return false;
	else if (p.year == 2014 && p.month > 9) return false;
	else if (p.year == 2014 && p.month == 9 && p.day > 6) return false;
	else if (p.year == 1814 && p.month == 9 && p.day < 6) return false;
	return true;
}

int cmp(Person &a, Person &b) {
	if (a.year == b.year) {
		if (a.month == b.month) return a.day < b.day;
		return a.month < b.month;
	}
	return a.year < b.year;
}

int main() {
	int n, cnt = 0, flag = 1;
	cin >> n;
	string s1, s2;
	Person tmp;
	Person old, young;
	while (cin >> s1 >> s2) {
		tmp.name = s1;
		tmp.year = stoi(s2.substr(0, 4));
		tmp.month = stoi(s2.substr(5, 7));
		tmp.day = stoi(s2.substr(8, 9));
		if (legal(tmp)) {
			if (flag) {
				young = tmp;
				old = tmp;
				flag = 0;
			}
			cnt++;
			if (cmp(tmp, young)) young = tmp;
			if (cmp(old, tmp)) old = tmp;
		}
	}
	cout << cnt << " " << young.name << " " << old.name;
	return 0;
}