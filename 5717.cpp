#include <iostream>
using namespace std;
/*
5717 상근이의 친구들
단순 입력및 계산, 출력문제
*/

int main()
{
	pair<int, int> p;
	cin >> p.first >> p.second;
	while (p.first != 0 && p.second != 0) {
		int result = p.first + p.second;
		cout << result << "\n";
		cin >> p.first >> p.second;
	}
}