#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

/*
11651 좌표정렬하기2
11650과 달리 y좌표기준으로 낮은 값부터 정렬.
y좌표가 같다면 x좌표가 낮은것부터 정렬.
*/
bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	int N;
	cin >> N;
	pair<int, int> tmp;
	vector<pair<int, int>> xy;
	for (int i = 0; i < N; i++) {
		cin >> tmp.first >> tmp.second;
		xy.push_back(tmp);
	}
	sort(xy.begin(), xy.end(), compare);
	for (int i = 0; i < N; i++) {
		cout << xy[i].first << ' ' << xy[i].second << '\n';
	}
}