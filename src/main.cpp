#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto names = vector<string>{
		"Yakk",
		"Doh",
		"Seh",
		"Ghar",
		"Bang",
		"Sheesh"
	};

	int t; cin >> t;
	for (auto i = 1; i <= t; ++i) {
		cout << "Case " << i << ": ";

		int a, b; cin >> a >> b;

		if (a < b) {
			a ^= b;
			b ^= a;
			a ^= b;
		}

		if (a == b) {
			if (1 == a) {
				cout << "Habb Yakk";
			}
			else if (2 == a) {
				cout << "Dobara";
			}
			else if (3 == a) {
				cout << "Dousa";
			}
			else if (4 == a) {
				cout << "Dorgy";
			}
			else if (5 == a) {
				cout << "Dabash";
			}
			else if (6 == a) {
				cout << "Dosh";
			}
		}
		else if (6 == a && 5 == b) {
			cout << "Sheesh Beesh";
		}
		else {
			cout << names[a - 1] << ' ' << names[b - 1];
		}

		cout << '\n';
	}

	return 0;
}