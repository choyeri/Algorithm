#include <iostream>
using namespace std;

/*
2292 ����
�߾��� �� 1���� �����ؼ� �̿��ϴ� �濡 ���ư��鼭 1�� �����ϴ� ��ȣ
N�� �Է¹޾� �߾��� 1�� �濡�� �ּ� ��� ���� ���� N�� ����� �� �� �ִ��� ���ϴ� �˰���
- ������ ���
*/

int main()
{
	int N;
	cin >> N;
	int sum = 2, i=1; //sum�� ���ȣ, i�� ������ ���� ��
	while (sum <= N) { 
		sum += 6 * i;
		i++;
	}
	if (N == 1)
		i= 1;
	cout << i;
	return 0;
}