#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
10816 ���� ī�� 2
N���� ���ڸ� �Է¹ް� M���� ���ڸ� �Է¹��� �� �Է¹��� M���� ���ڵ��� N���� ���ڿ��� ������� ���
���� Ž������ ���Ҹ� Ž���ϴ� upper_bound�� lower_bound�� �ش� ������ ������ ���� �ε����� ù��° �����ε����� ���� �� ���� ���ش�. 
*/

int main()
{
	int N, M,num;
	vector<int> card;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		card.push_back(num);
	}
	sort(card.begin(), card.end());
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		cout<<upper_bound(card.begin(), card.end(), num) - lower_bound(card.begin(), card.end(), num)<<' ';
	}
}