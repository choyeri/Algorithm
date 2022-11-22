#include <iostream>
#include <string>
#include <stack>
using namespace std;
/*
9012 °ýÈ£
*/

int main(void) {
	int k;
	cin >> k;

	while (k > 0) {
		k--;
		string input;
		cin >> input;

		stack<char> str;
		string ans = "YES";
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(') {
				str.push(input[i]);
			}
			else if (!str.empty() && input[i] == ')' && str.top() == '(') {
				str.pop();
			}
			else {
				ans = "NO";
				break;
			}
		}
		if (!str.empty()) ans = "NO";

		cout << ans << endl;
	}
	return 0;
}