#include <iostream>
using namespace std;
/*
2609 �ִ������� �ּҰ����
��Ŭ����ȣ������ �̿��� �ִ������� �ּҰ���� ���ϴ� �˰���
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