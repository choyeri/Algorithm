#include <iostream>
#include <queue>
using namespace std;

/*
2164 ī��2
N���� 1~N������ ���� ī�忡�� ���� ù��° 1ī�带 ������ 2ī�带 Nī�� �ڷ� �ű�� ī�尡 ������ ���������� �ݺ��Ѵ�.
1�� ���� ī���� ���ڸ� ����Ѵ�.
queue�� ����Ͽ� pop�� push�� �̿��Ͽ� �䱸������ �����Ѵ�. 
*/

int main()
{
	int N,num;
	queue<int> card;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		card.push(i);
	}
	while (card.size() > 1) {
		card.pop();
		card.push(card.front());
		card.pop();
	}
	cout << card.front();
}