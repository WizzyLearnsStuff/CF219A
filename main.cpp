#include<iostream>

using namespace std;

int main() {
	int k;
	cin >> k;

	int counts[26] = {0};

	char c;
	while (cin >> c) {
		counts[c - 'a']++;
	}

	for (int &i : counts) {
		if ((i % k) != 0) {
			cout << -1;
			return 0;
		}
		i = i / k;
	}

	string ret;

	for (int i = 0; i < 26; i++) {
		ret.append(counts[i], (char)(i + 'a'));
	}

	for (int i = 0; i < k; i++) cout << ret;

	
}
