#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
1181 �ܾ�����
N���� �ܾ �Է¹޾� ���̼�, ���������� �����ϴ� ���α׷�
-�ܾ��� �Է��� �ҹ��ڷθ� ����
-���̰� ���ٸ� ���������� ����

string x�� �Է¹޾� vector�� ���� �ܾ �ִ��� �Ǻ� �� vector�� push
sort�� �̿��Ͽ� ���� - compare�� �����Ͽ� ���̼�, ������ ���� �ϵ��� ����
vector������ŭ �ݺ��Ͽ� ���ĵ� ��� �ܾ� ���
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