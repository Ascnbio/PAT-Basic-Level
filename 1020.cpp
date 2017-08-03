#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

struct mooncake {
	double mount;
	double price;
	double unit;
};

int cmp(mooncake &a, mooncake &b) {
	return a.unit > b.unit;
}

int main() {
	int n, d;
	cin >> n >> d;
	vector<mooncake> mc;
	mooncake tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp.mount;
		mc.push_back(tmp);
	}
	for (int i = 0; i < n; i++) {
		cin >> mc[i].price;
		mc[i].unit = mc[i].price / mc[i].mount;
	}

	double profit = 0.0;
	sort(mc.begin(), mc.end(), cmp);
	int i = 0, dTmp = d;
	int total = 0;
	for (auto c : mc) total += c.mount;
	if (d > total) {
		for (auto c : mc) profit += c.price;
		cout << fixed << setprecision(2) << profit;
		return 0;
	}

	while (dTmp > 0) dTmp -= mc[i++].mount;
	if (i == 1) {
		cout << fixed << setprecision(2) << mc[0].unit * d;
		return 0;
	}
	total = 0;
	for (int j = 0; j < i - 1; j++) {
		profit += mc[j].price;
		total += mc[j].mount;
	}
	profit += mc[i - 1].unit * (d - total);
	cout << fixed << setprecision(2) << profit;

	return 0;
}