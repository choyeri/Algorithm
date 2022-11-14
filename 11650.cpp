#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
/*
11650 ��ǥ �����ϱ�
pair�� �̿��Ͽ� �ΰ��� ������ �ѽ����� ���� ����ϰ�, vector�� �̿��Ͽ� �Է¹��� �� sort�Լ��� �̿��Ͽ� �����Ѵ�. 
*/

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
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