#include <iostream>
#include <stack>
using namespace std;
/*
10828 스택
LIFO(Last In First Out)구조의 스택 구현.
push, pop, size, empty, top과 같은 입력받은 명령어에 따라 다른 기능 구현
*/

int main()
{
	stack<int> X;
	int N;
	string str;
	int result = 0;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			X.push(num);
		}
		else if (str == "pop") {
			if (X.size() == 0)
				cout << "-1" << "\n";
			else {
				result = X.top();
				cout << result << "\n";
				X.pop();
			}
		}
		else if (str == "size") {
			result = X.size();
			cout << result << "\n";
		}
		else if (str == "top") {
			if (X.size() == 0)
				cout << "-1" << "\n";
			else {
				result = X.top();
				cout << result << "\n";
			}
		}
		else if (str == "empty") {
			if (X.size() == 0)
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
	}
}