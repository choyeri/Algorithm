#include <iostream>
#include <queue>
using namespace std;
/*
10845 ť
*/

queue<int> X;

int pop() {
	if (X.size() == 0)
		return -1;
	else {
		int front;
		front = X.front();
		X.pop();
		return front;
	}
}

int empty() {
	if (X.size() == 0)
		return 1;
	else
		return 0;
}

int front() {
	if (X.size() == 0)
		return -1;
	else {
		int n;
		n = X.front();
		return n;
	}
}

int back() {
	if (X.size() == 0)
		return -1;
	else {
		int n;
		n = X.back();
		return n;
	}
}

int main()
{
	int N,result;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			X.push(num);
		}
		else if (str == "pop") {
			result = pop();
			cout << result << "\n";
		}
		else if (str == "size") {
			result = X.size();
			cout << result << "\n";
		}
		else if (str == "empty") {
			result = empty();
			cout << result << "\n";
		}
		else if (str == "front") {
			result = front();
			cout << result << "\n";
		}
		else if (str == "back") {
			result = back();
			cout << result << "\n";
		}
	}
}