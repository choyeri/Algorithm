#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N,M,K,num;
	cin >> N;
	while (N--) {
		cin >> M >> K;
		queue<pair<int, int>> q;
		priority_queue<int> priorityqueue;
		int count = 0;
		for (int i = 0; i < M; i++) {
			cin >> num;
			q.push({ i,num });
			priorityqueue.push(num);
		}
		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (priorityqueue.top() == value) {
				priorityqueue.pop();
				count++;
				if (index == K) {
					cout << count << "\n";
					break;
				}
			}
			else q.push({ index,value });
		}
	}
}