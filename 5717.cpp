#include <iostream>
using namespace std;
/*
5717 ������� ģ����
�ܼ� �Է¹� ���, ��¹���
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