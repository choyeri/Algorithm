#include <iostream>
using namespace std;
#include <cctype>
/*
5524 �Խǰ���
N���� ���ڿ� �Է¹޾� ��� �ҹ��ڷ� ����ϱ�
*/

int main()
{
	string str;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (isupper(str[j]))
				str[j] = tolower(str[j]);
		}
		cout << str << endl;
	}
}