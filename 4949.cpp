#include <iostream>
#include <string>
#include <stack>
using namespace std;

/*
4949 �������� ����
���ڿ� �Է¹ް� ��ȣ ()[]�� ¦�� �̷���� Ȯ���ϴ� �˰���
stack�� �̿��Ͽ� ��ȣ���� push�ϰ� ���� �����ϸ� pop�Ͽ� ���ڿ��� ������ �� stack�� ������� yes���
*/

int main()
{
	while (1) {
		string str;
		getline(cin, str);
		bool ans = true;
		if (str.length()==1 && str[0] == '.')
			break;
		stack<char> cnt;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[')
				cnt.push(str[i]);
			if (str[i] == ')') {
				if (cnt.empty() || cnt.top() == '[')
					ans = false;
				else
					cnt.pop();
			}
			if (str[i] == ']') {
				if (cnt.empty() || cnt.top() == '(')
					ans = false;
				else
					cnt.pop();
			}
		}
		if (cnt.empty() && ans == true)
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}
}