#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
10816 숫자 카드 2
N개의 숫자를 입력받고 M개의 숫자를 입력받은 후 입력받은 M개의 숫자들이 N개의 숫자에서 몇개였는지 출력
이진 탐색으로 원소를 탐색하는 upper_bound와 lower_bound로 해당 숫자의 마지막 원소 인덱스와 첫번째 원소인덱스를 받은 후 둘을 빼준다. 
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