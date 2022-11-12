#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
/*
10814 나이순정렬
stable_sort를 써야하는 문제였다. sort를 이용하면 age기준으로 정렬 후 같은 나이가 입력된 순으로 정렬되지 않을 수 있는데 stable_sort를 씀으로 정렬 가능해진다.  
*/

bool compare(pair<int, string> a, pair<int, string>b) {
	return a.first < b.first;
}

int main()
{
	int N;
	cin >> N;
	pair<int, string> tmp;
	vector<pair<int, string>> member;
	for (int i = 0; i < N; i++) {
		cin >> tmp.first>>tmp.second;
		member.push_back(tmp);
	}
	sort(member.begin(), member.end(),compare);
	for (int i = 0; i < N; i++) {
		cout << member[i].first << ' ' << member[i].second << '\n';
	}
}