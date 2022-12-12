#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
11945 ¶ß°Å¿î ºØ¾î»§
*/

int main()
{
	int N, M;
	string str;
	cin >> N >> M;
	vector<string> bbang;
	for (int i = 0; i < N; i++) {
		cin >> str;
		bbang.push_back(str);
	}
	for (int i = 0; i < N; i++) {
		reverse(bbang[i].begin(), bbang[i].end());
		cout << bbang[i] << "\n";
	}
}