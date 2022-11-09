#include <iostream>
using namespace std;
/*
2609 최대공약수와 최소공배수
유클리드호제법을 이용해 최대공약수와 최소공배수 구하는 알고리즘
*/

int gcd(int a, int b) {
	int temp;
	while (b) {
		if (a % b == 0)
			return b;
		temp = a % b;
		a = b;
		b = temp;
	}
}

int main()
{
	int N, M;
	cin >> N >> M;
	cout << gcd(N, M) << endl;
	cout << N * (M / gcd(N, M));
}