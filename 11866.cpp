#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	queue<int> num;
	for (int i = 1; i <= N; i++)
		num.push(i);
	cout << '<';
	while (num.size() != 0) {
		for (int i = 1; i < K; i++) {
			num.push(num.front());
			num.pop();
		}
		cout << num.front();
		if (num.size() != 1)
			cout << ', ';
		num.pop();
	}
	cout << '>';
}