#include <iostream>
#include <string>
using namespace std;
/*
4470 줄번호
N개의 줄을 입력받고 1. , 2.와같이 순차적으로 줄번호 붙인다. */

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