#include <iostream>
using namespace std;
#include <string>

/*
1436 ��ȭ���� ��
6�� ��� 3���� �پ��ִ� ���� �� �������� ���� 666, �״����� 1666�̴�.
�Է¹��� N��° 666�� ����ִ� ���� ���϶�
*/

int Findseries(int n) {
	int i = 666, series = 0;
	string seriesstr;
	while (1) {
		seriesstr = to_string(i);
		for (int j = 0; j < seriesstr.length() - 2; j++) {
			if (seriesstr[j] == '6' && seriesstr[j + 1] == '6' && seriesstr[j + 2] == '6') {
				series++;
				if (series == n) return i;
				break;
			}
		}
		i++;
	}
}//i�� 1�� ���ذ��鼭 666���� ��� ���ڸ� �ݺ������� ã�ƺ��� �˰���
//�ٸ� ��� ���� �ʿ�

int main() 
{
	int N;
	cin >> N;
	cout << Findseries(N);
}