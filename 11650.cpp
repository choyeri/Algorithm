#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
/*
11650 좌표 정렬하기
pair를 이용하여 두개의 정수를 한쌍으로 묶어 사용하고, vector를 이용하여 입력받은 후 sort함수를 이용하여 정렬한다. 
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