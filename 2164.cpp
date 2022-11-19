#include <iostream>
#include <queue>
using namespace std;

/*
2164 카드2
N개의 1~N까지의 숫자 카드에서 가장 첫번째 1카드를 버리고 2카드를 N카드 뒤로 옮기고를 카드가 한장이 남을때까지 반복한다.
1장 남은 카드의 숫자를 출력한다.
queue를 사용하여 pop과 push를 이용하여 요구사항을 적용한다. 
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