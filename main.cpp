#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s; cin >> s;
	int n; cin >> n;
	cout << s[n - 1];

	return 0;
}