#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
1181 단어정렬
N개의 단어를 입력받아 길이순, 사전순으로 정렬하는 프로그램
-단어의 입력은 소문자로만 받음
-길이가 같다면 사전순으로 정렬

string x로 입력받아 vector에 같은 단어가 있는지 판별 후 vector에 push
sort를 이용하여 정렬 - compare을 정의하여 길이순, 사전순 정렬 하도록 만듦
vector개수만큼 반복하여 정렬된 모든 단어 출력
*/

bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main()
{
	int N;
	cin >> N;
	vector<string> str;
	for (int i = 0; i < N; i++) {
		string x;
		cin >> x;
		if (find(str.begin(), str.end(), x) == str.end())
			str.push_back(x);
	}
	sort(str.begin(), str.end(),compare);
	for (int i = 0; i < str.size(); i++)
		cout << str[i] << '\n';
}