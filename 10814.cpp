#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
/*
10814 ���̼�����
stable_sort�� ����ϴ� ��������. sort�� �̿��ϸ� age�������� ���� �� ���� ���̰� �Էµ� ������ ���ĵ��� ���� �� �ִµ� stable_sort�� ������ ���� ����������.  
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