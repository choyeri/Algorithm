#include <iostream>
#include <string>
#include <stack>
using namespace std;

/*
4949 균형잡힌 세상
문자열 입력받고 괄호 ()[]가 짝을 이루는지 확인하는 알고리즘
stack을 이용하여 괄호들을 push하고 조건 부합하면 pop하여 문자열이 끝났을 때 stack이 비었으면 yes출력
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