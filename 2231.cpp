#include <iostream>
using namespace std;
/*
2231 ������
���� N�� �Է¹޾� ���ڿ� �� �ڸ����� ���ڸ� ��� ������ �� N�� �Ǵ� �ּ��� ���� ���Ѵ�.
*/

int part(int n) {
	int sum = n;
	while (n) {
		sum += n % 10; //�� �ڸ��� ���ڿ� n���ϴ� ����
		n /= 10; 
	}
	return sum;
}

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int temp = part(i);
		if (temp == N) {
			cout << i << endl; //�����ڰ� ���� �� ��� 
			return 0;
		}
	}
	cout << 0 << endl; //�����ڰ� ���� �� ���
	return 0;
}