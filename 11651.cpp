#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

/*
11651 ��ǥ�����ϱ�2
11650�� �޸� y��ǥ�������� ���� ������ ����.
y��ǥ�� ���ٸ� x��ǥ�� �����ͺ��� ����.
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