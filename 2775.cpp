#include <iostream>
using namespace std;
/*
2775 �γ�ȸ���� ���׾�
a-1�� bȣ�� ������ a�� b-1ȣ ������� ���� ���ϸ� a�� bȣ�� ��� ������� ���� ���� �� �ִ�.
a=0�϶��� ȣ���� ���� ���ڸ�ŭ ������� ���, b=1�� ȣ������ ��� 1���� ��� ���̴�.
����Լ��� �̿��Ͽ� a-1�� bȣ�� ��� ����� a�� b-1ȣ�� ��� ����� ���� ���ϴ� �Լ��� �������. 
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