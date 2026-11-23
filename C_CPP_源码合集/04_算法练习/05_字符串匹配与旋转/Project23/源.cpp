#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string line;
		getline(cin, line);
		stringstream ss(line);
		string word;
		bool first = true;
		while (ss >> word) {
			reverse(word.begin(), word.end());
			if (!first)
				cout << " ";
			cout << word;
			first = false;
		}
		cout << "\n";
	}	
	return 0;
}