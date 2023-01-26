#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned int K, N,ans;
unsigned int length[10001];

int main() {
	cin >> K >> N;

	unsigned int maxnum = 0;
	for (int i = 0; i < K; i++) {
		cin >> length[i];
		maxnum = max(maxnum, length[i]);
	}
	unsigned int left=1, right=maxnum, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		unsigned int addans = 0;
		for (int i = 0; i < K; i++) {
			addans += length[i] / mid;
		}
		if (addans >= N) {
			left = mid + 1;
			ans = max(ans, mid);
		}
		else {
			right = mid - 1;
		}
	}
	cout << ans << '\n';
}