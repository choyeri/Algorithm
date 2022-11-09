#include <iostream>
using namespace std;
/*
2775 부녀회장이 될테야
a-1층 b호의 사람들과 a층 b-1호 사람들의 수를 더하면 a층 b호에 사는 사람들의 수를 구할 수 있다.
a=0일때는 호수에 적힌 숫자만큼 사람들이 살고, b=1인 호수에는 모두 1명이 사는 중이다.
재귀함수를 이용하여 a-1층 b호에 사는 사람과 a층 b-1호에 사는 사람의 수를 더하는 함수를 만들었다. 
*/

int sumpeople(int a, int b) {
	if (b == 1)
		return 1;
	if (a == 0)
		return b;
	return (sumpeople(a, b - 1) + sumpeople(a - 1, b));
}

int main()
{
	int T,k,n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << sumpeople(k, n) << endl;
	}
}