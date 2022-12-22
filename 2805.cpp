#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
2805 나무자르기
*/

long long N, M, num,result;
vector<long long> tree;

int binarySearch() {
	int start = 0;
	int end = *max_element(tree.begin(), tree.end());
	int mid = 0;
	while (start <= end) {
		mid = (start + end) / 2;
		long long tmp=0;
		for (int i = 0; i < N; i++) {
			if (tree[i] > mid) tmp +=(tree[i] - mid);
		}
		if (tmp >= M) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return end;
}
int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> num;
		tree.push_back(num);
	}
	result = binarySearch();
	cout << result;
}