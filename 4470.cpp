#include <iostream>
#include <string>
using namespace std;
/*
4470 �ٹ�ȣ
N���� ���� �Է¹ް� 1. , 2.�Ͱ��� ���������� �ٹ�ȣ ���δ�. */

int main()
{
	string str;
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		cin.clear();
		cout << i+1 << ". " << str<<"\n";
	}
}