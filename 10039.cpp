#include <iostream>
using namespace std;
/*
10039 �������
5���� ���� �Է¹޴µ� 40�� ������ ������ 40������ �Է��Ͽ� ��� ���� ���ϱ�
*/

int main()
{
	int result=0, num;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (num < 40)
			num = 40;
		result += num;
	}
	result = result / 5;
	cout << result;
}