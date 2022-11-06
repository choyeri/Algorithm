#include <iostream>
using namespace std;
#include <cctype>
/*
5524 입실관리
N개의 문자열 입력받아 모두 소문자로 출력하기
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